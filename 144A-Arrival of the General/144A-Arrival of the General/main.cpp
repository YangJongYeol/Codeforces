//
//  main.cpp
//  144A-Arrival of the General
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    // insert code here...
    
    int n;
    cin>>n;
    
    int num[n];
    memset(num, 0, n);
    
    int maxIndex = 0, minIndex = 100;
    int maxNum = 0, minNum = 100;
    for(int i=0; i<n; i++){
        cin>>num[i];
        
        if(num[i]>maxNum){
            maxIndex = i;
            maxNum = num[i];
        }
    }
    
    for(int i=n-1; i>=0; i--){
        if(num[i]<minNum) {
            minIndex = i;
            minNum = num[i];
        }
    }
    
    if(minIndex < maxIndex)
        cout<<n-minIndex+maxIndex-2;
    else
        cout<<n-minIndex+maxIndex-1;
}
