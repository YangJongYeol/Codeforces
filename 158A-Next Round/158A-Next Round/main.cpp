//
//  main.cpp
//  158A-Next Round
//
//  Created by 양종열 on 2018. 1. 21..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, k, count=0;
    int a[100];
    cin>>n>>k;
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if(a[0]==0){
            cout<<0;
            return 0;
        }
    }
    
    for (int i=0; i<n; i++) {
        if(a[k-1]<=a[i])
            count++;
        else
            break;
        if(a[i]==0)
            count--;
    }
    
    cout<<endl<<count;
    
    return 0;
}
