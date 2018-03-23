//
//  main.cpp
//  230B-T-primes
//
//  Created by 양종열 on 2018. 3. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long long n;
    cin>>n;
    
    
    long long x[n];
    for (long long i=0; i<n; i++) { cin>>x[i]; }

    bool flag;
    for (long long j=0; j<n; j++) {
        flag = true;
        if (x[j]==1) {
            cout<<"NO\n";
            continue;
        }

        if(sqrt(x[j])==(int)sqrt(x[j])) {
            x[j] = sqrt(x[j]);
            for (int i=2; i*i<=x[j]; i++) {
                if(x[j]%i==0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout<<"YES\n";
                continue;
            }
        }

        cout<<"NO\n";
    }

    return 0;
}

