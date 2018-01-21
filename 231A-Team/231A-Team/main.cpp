//
//  main.cpp
//  231A-Team
//
//  Created by 양종열 on 2018. 1. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, count=0;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        int point = 0;
        for (int i=0; i<3; i++) {
            int a;
            cin>>a;
            if (a) {
                point++;
            }
        }
        if(point >= 2)
            count++;
    }
    
    cout<<count<<endl;
    
    return 0;
}
