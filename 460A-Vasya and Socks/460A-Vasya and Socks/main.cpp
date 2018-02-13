//
//  main.cpp
//  460A-Vasya and Socks
//
//  Created by 양종열 on 2018. 2. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m, count=0;
    cin>>n>>m;
    
    while (n--) {
        count++;
        if (count%m==0) {
            n++;
        }
    }
    
    cout<<count;
    
    return 0;
}
