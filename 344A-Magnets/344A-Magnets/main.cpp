//
//  main.cpp
//  344A-Magnets
//
//  Created by 양종열 on 2018. 2. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, group=1;
    cin>>n;
    
    int temp, lastNum;
    
    cin>>temp;
    lastNum = temp;
    for (int i=0; i<n-1; i++) {
        cin>>temp;
        
        if(lastNum != temp) {
            group++;
            lastNum = temp;
        }
    }
    
    cout<<group;
    
    return 0;
}
