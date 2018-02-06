//
//  main.cpp
//  479A-Expression
//
//  Created by 양종열 on 2018. 2. 6..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int a,b,c, cs[5];
    cin>>a>>b>>c;
    
    cs[0] = (a+b)*c;
    cs[1] = a+b*c;
    cs[2] = a*(b+c);
    cs[3] = a*b*c;
    cs[4] = a+b+c;
    
    int max = 0;
    for (int i=0; i<5; i++) {
        if (max < cs[i]) {
            max = cs[i];
        }
    }
    
    cout<<max;
    
    return 0;
}
