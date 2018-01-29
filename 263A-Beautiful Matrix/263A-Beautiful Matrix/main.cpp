//
//  main.cpp
//  263A-Beautiful Matrix
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            cin>>n;
            if(n==1){
                cout<<abs(i-3)+abs(j-3);
                break;
            }
        }
    }
}
