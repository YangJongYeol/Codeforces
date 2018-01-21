//
//  main.cpp
//  1A-Theatre Square
//
//  Created by 양종열 on 2018. 1. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    int n,m,a;
    int widthNum, heightNum;
    
    cin>>n>>m>>a;
    
    if(n%a!=0)
        widthNum = (n/a)+1;
    else
        widthNum = (n/a);
    
    if(m%a!=0)
        heightNum = (m/a)+1;
    else
        heightNum = (m/a);
    
    cout<<(long long)widthNum*heightNum;
    
    return 0;
}
