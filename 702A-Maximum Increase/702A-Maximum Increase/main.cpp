//
//  main.cpp
//  702A-Maximum Increase
//
//  Created by 양종열 on 2018. 3. 27..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long long n, max=1, length=1;
    cin>>n;
    
    long long a[n];
    
    for (long long i=0; i<n; i++) { cin>>a[i]; }
    for (long long i=1; i<n; i++) {
        if (a[i] > a[i-1]) { length++; }
        else { length = 1; }
        
        if (length > max) {
            max = length;
        }
    }
    
    cout<<max;

    return 0;
}
