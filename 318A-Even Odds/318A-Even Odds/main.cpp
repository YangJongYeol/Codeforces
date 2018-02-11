//
//  main.cpp
//  318A-Even Odds
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    // insert code here...
    
    long long k, n;
    cin>>k>>n;
    
    if(k%2==1) {
        if(n>k/2+1)
            cout<<2*(n-(k/2+1));
        else
            cout<<2*n-1;
    } else {
        if(n>k/2)
            cout<<2*(n-(k/2));
        else
            cout<<2*n-1;
    }
    
    return 0;
}
