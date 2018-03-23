//
//  main.cpp
//  734B-Anton and Digits
//
//  Created by 양종열 on 2018. 3. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int k[4], output=0;
    for (int i=0; i<4; i++) { cin>>k[i]; }
    
    int min256 = min(k[0], k[2]);
    min256 = min(min256, k[3]);
    
    output += min256*256;
    
    k[0] -= min256;
    output += min(k[0], k[1])*32;
    
    cout<<output;
    
    return 0;
}
