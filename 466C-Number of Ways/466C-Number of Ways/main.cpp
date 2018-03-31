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
    
    long long a[n], indexFirst[n-2], sum=0, avg;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        
        sum += a[i];
    }
    
    if (sum%3 == 0) {
        avg = sum/n;
        
        sum = 0;
        for (int i=0; i<n-2; i++) {
            sum += a[i];
            
            if (avg == 0 && sum == 0) {
                indexFirst[i] = 1;
            } else {
                if (sum%avg == 0) {
                    indexFirst[i] = 1;
                } else {
                    indexFirst[i] = 0;
                }
            }
        }
        
        
    }
    return 0;
}
