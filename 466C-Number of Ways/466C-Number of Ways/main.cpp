//
//  main.cpp
//  466C-Number of Ways
//
//  Created by 양종열 on 2018. 3. 24..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long long n;
    cin>>n;
    
    long long a[n], index[n], avg=0, sum1=0, sum2=0, count1=0, count2=0;
    for (long long i=0; i<n; i++) {
        cin>>a[i];
        avg += a[i];
    }
    
    if (avg%3 ==0) {
        avg /= 3;
        
        memset(index, 0, n*sizeof(long long));
        
        for (long long i=0; i<n-2; i++) {
            sum1 += a[i];
            
            if (sum1 == avg) {
                count1++;
            }
        }
        
        for (long long i=n-1; i>=1; i--) {
            sum2 += a[i];
            
            if (sum2 == avg) {
                count2++;
            }
        }
    }
    
    cout<<count1*count2;
    return 0;
}
