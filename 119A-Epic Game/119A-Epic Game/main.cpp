//
//  main.cpp
//  119A-Epic Game
//
//  Created by 양종열 on 2018. 3. 8..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int a,b,n,gcd;
    cin>>a>>b>>n;
    
    bool flag = 0;  // 0 : simon, 1 : Antisimon
    while(n>=0){
        if(!flag) {
            gcd = __gcd(a,n);
            
            if(gcd > n || n==0) {
                cout<<1;
                return 0;
            }
            
            n -= gcd;
            flag = true;
        } else {
            gcd = __gcd(b,n);
            
            if(gcd > n || n==0) {
                cout<<0;
                return 0;
            }
            
            n -= gcd;
            flag = false;
        }
    }
    
    return 0;
}
