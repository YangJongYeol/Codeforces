//
//  main.cpp
//  266B-Queue at the School
//
//  Created by 양종열 on 2018. 2. 3..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,t;
    cin>>n>>t;
    
    string str;
    cin>>str;
    
    while(t--){
        for(int i=0; i<n; i++){
            if(str[i]=='B' && str[i+1]=='G'){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }
    
    cout<<str;
    
    return 0;
}
