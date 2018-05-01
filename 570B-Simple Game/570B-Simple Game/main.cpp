//
//  main.cpp
//  570B-Simple Game
//
//  Created by 양종열 on 2018. 5. 1..
//  Copyright © 2018년 양종열. All rights reserved.
//  |c-a| < |c-m|

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    
    if (n==1) {
        cout<<1;
        return 0;
    }
    
    if(n-m >= m) cout<<m+1;
    else cout<<m-1;
    
    return 0;
}
