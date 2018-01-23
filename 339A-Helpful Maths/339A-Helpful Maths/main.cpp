//
//  main.cpp
//  339A-Helpful Maths
//
//  Created by 양종열 on 2018. 1. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    vector<int> a;
    getline(cin, str);
    
    for(int i=0; i<str.length(); i+=2){
        a.push_back(str[i]);
    }
    
    sort(a.begin(), a.end());
    
    for(int i=0; i<=str.length()/2; i++){
        str[i*2]=a[i];
    }
    
    cout<<str<<endl;
    
    return 0;
}
