//
//  main.cpp
//  467A-George and Accommodation
//
//  Created by 양종열 on 2018. 1. 29..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, count=0;
    int p, q;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>p>>q;
        if (q-p >= 2) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}
