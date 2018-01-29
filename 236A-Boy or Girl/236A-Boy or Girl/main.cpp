//
//  main.cpp
//  236A-Boy or Girl
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    int alpha[26];
    for(int i=0; i<26; i++){
        alpha[i]=0;
    }
    
    for(int i=0; i<str.length(); i++){
        alpha[str[i]-97]++;
    }
    
    int num = 0;
    for(int i=0; i<26; i++){
        if(alpha[i]>0)
            num++;
    }
    
    if(num%2==0){
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
