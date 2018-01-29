//
//  main.cpp
//  546A-Soldier and Bananas
//
//  Created by 양종열 on 2018. 1. 29..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int k,n,w;
    cin>>k>>n>>w;
    
    int total = w*(k+k*w)/2;
    cout<<max(total-n, 0);
    
    return 0;
}
