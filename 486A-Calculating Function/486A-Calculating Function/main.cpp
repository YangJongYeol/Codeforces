//
//  main.cpp
//  486A-Calculating Function
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long num;
    cin>>num;
    
    if(num%2==0)
        cout<<num/2;
    else
        cout<<(num/2-num);
    
    return 0;
}
