//
//  main.cpp
//  455A-Boredom
//
//  Created by 양종열 on 2018. 3. 9..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
const int MAX = 100001;

long long num[MAX];
int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long long n, tmp, maxNum=0;
    long long dp[MAX];
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>tmp;
        num[tmp]++;
        
        if (tmp > maxNum) {
            maxNum = tmp;
        }
    }
    
    dp[0] = 0;
    dp[1] = num[1];
    int i=2;
    for (; i<=maxNum; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + i*num[i]);
    }
    
    cout<<dp[maxNum];
    return 0;
}
