//
//  main.cpp
//  788A-Functions again
//
//  Created by 양종열 on 2018. 4. 27..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n;
vector<int> vc;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n;
    
    int tmp;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        vc.push_back(tmp);
    }
    
    long long dp[n];
    dp[0] = 0;
    for (int i=1; i<n; i++) {
        dp[i] = abs(vc[i-1] - vc[i]);
    }
    
    long long dp_2[n];
    dp_2[0] = dp[0];
    for (int i=1; i<n; i++) {
        if (i % 2 == 1) {
            dp_2[i] = dp_2[i-1] + dp[i];
        } else {
            dp_2[i] = dp_2[i-1] - dp[i];
        }
    }
    
    long long min = 2000000000;
    long long max = 0;
    for (int i=0; i<n; i++) {
        if (min > dp_2[i]) {
            min = dp_2[i];
        }
        if (max < dp_2[i]) {
            max = dp_2[i];
        }
    }
    
    cout<<abs(max-min);
    return 0;
}
