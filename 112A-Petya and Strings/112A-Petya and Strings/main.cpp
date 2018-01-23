//
//  main.cpp
//  112A-Petya and Strings
//
//  Created by 양종열 on 2018. 1. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    
    for(int i=0; i<str1.length(); i++){
        str1[i] = tolower(str1[i]);
    }
    
    for(int i=0; i<str2.length(); i++){
        str2[i] = tolower(str2[i]);
    }
    
    if(str1.compare(str2)==0){
        cout<<"0"<<endl;
    } else if(str1.compare(str2)>0){
        cout<<"1"<<endl;
    } else {
        cout<<"-1"<<endl;
    }
    
    return 0;
}
