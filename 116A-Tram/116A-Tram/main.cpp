//
//  main.cpp
//  116A-Tram
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    int exitNum, enterNum;
    int capacity=0, remainNum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>exitNum>>enterNum;
        remainNum = remainNum+enterNum-exitNum;
        if(remainNum>capacity)
            capacity=remainNum;
    }
    
    cout<<capacity;
}
