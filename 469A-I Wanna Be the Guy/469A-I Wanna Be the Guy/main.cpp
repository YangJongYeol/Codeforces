//
//  main.cpp
//  469A-I Wanna Be the Guy
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
    
    int n,a,b;
    
    cin>>n>>a;
    
    int level[n];
    memset(level, 0, n*4);
    
    for(int i=0; i<a; i++){
        int tmp;
        cin>>tmp;
        
        level[tmp-1]++;
    }
    
    cin>>b;
    for(int i=0; i<b; i++){
        int tmp;
        cin>>tmp;
        
        level[tmp-1]++;
    }
    
    for(int i=0; i<n; i++){
        if(level[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    
    cout<<"I become the guy.";
    return 0;
}
