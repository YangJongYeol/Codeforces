//
//  main.cpp
//  913A-Modular Exponentiation
//
//  Created by 양종열 on 2018. 1. 24..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    // insert code here...
    
    double n,m;
    int result=1;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        result = result*2;
        if(result> m){
            cout<<m<<endl;
            return 0;
        }
    }
    
    
    
    return 0;
}
