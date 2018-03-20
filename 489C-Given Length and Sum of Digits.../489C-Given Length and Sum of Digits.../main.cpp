//
//  main.cpp
//  489C-Given Length and Sum of Digits...
//
//  Created by 양종열 on 2018. 3. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int m,s,size;
    cin>>m>>s;
    
    if (s==0) {
        if (m==1) { cout<<"0 0"; }
        else { cout<<"-1 -1"; }
        return 0;
    }
    
    size = m;
    
    int num[size];
    while (m--) {
        if (s-9 > 10 || s > 9) {
            num[m] = 9;
            s-=9;
        } else {
            num[m]=s;
            s=0;
        }
    }
    
    if (s>0) {
        cout<<"-1 -1";
        return 0;
    }
    
    bool flag = false;
    int index=0;
    if (num[0]==0) {
        flag = true;
        while (num[index]==0) {
            index++;
        }
        
        num[0] = 1;
        num[index]--;
    }
    for (int i=0; i<size; i++) { cout<<num[i]; }
    cout<<" ";
    
    if(flag){
        num[0]=0;
        num[index]++;
    }
    for (int i=size-1; i>=0; i--) { cout<<num[i]; }
    
    return 0;
}
