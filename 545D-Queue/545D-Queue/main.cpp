//
//  main.cpp
//  545D-Queue
//
//  Created by 양종열 on 2018. 4. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long long n;
    cin>>n;
    
    vector<long long> vc;
    long long tmp;
    for (long long i=0; i<n; i++) {
        cin>>tmp;
        vc.push_back(tmp);
    }
    
    sort(vc.begin(), vc.end());
    
    long long count = 0;
    long long sum = 0;
    
    for (long long i=0; i<n; i++) {
        if (sum <= vc[i]) {
            count++;
            sum += vc[i];
        }
    }
    
    cout<<count;
    return 0;
}
