//
//  main.cpp
//  69A-Young Physicist
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, x, y, z;
    int sumX=0, sumY=0, sumZ=0;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>x>>y>>z;
        
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    
    if (sumX==0 && sumY==0 && sumZ==0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    
    return 0;
}
