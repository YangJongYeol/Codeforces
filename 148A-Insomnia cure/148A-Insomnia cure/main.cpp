//
//  main.cpp
//  148A-Insomnia cure
//
//  Created by 양종열 on 2018. 2. 5..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int k,l,m,n,d, count=0;
    cin>>k>>l>>m>>n>>d;
    
    bool dragons[d+1];
    memset(dragons, 0, d+1);
    
    for (int i=k; i<=d; i+=k) {
        dragons[i] = 1; //  damaged
    }
    
    for (int i=l; i<=d; i+=l) {
        if (dragons[i]==0) {
            dragons[i]=1;
        }
    }
    
    for (int i=m; i<=d; i+=m) {
        if (dragons[i]==0) {
            dragons[i]=1;
        }
    }
    
    for (int i=n; i<=d; i+=n) {
        if (dragons[i]==0) {
            dragons[i]=1;
        }
    }
    
    for (int i=1; i<=d; i++) {
        if (dragons[i]==1) {
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}
