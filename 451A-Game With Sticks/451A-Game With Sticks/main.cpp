//
//  main.cpp
//  451A-Game With Sticks
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    // insert code here...
    
    int n,m;
    cin>>n>>m;
    
    bool trun = false;
    int interNum = n*m;
    while(interNum != 0) {
        interNum = interNum - (n+m-1);
        n--;
        m--;
        if(trun) trun = false;
        else trun = true;
    }
    
    if(trun) cout<<"Akshat";
    else cout<<"Malvika";
    
    return 0;
}
