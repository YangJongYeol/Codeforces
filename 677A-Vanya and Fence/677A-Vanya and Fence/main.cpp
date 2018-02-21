//
//  main.cpp
//  677A-Vanya and Fence
//
//  Created by 양종열 on 2018. 2. 21..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,h,tmp,count=0;
    
    cin>>n>>h;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        
        if (tmp <= h) {
            count++;
        } else count += 2;
    }
    
    cout<<count;
    return 0;
}
