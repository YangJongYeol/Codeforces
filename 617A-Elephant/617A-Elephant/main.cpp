//
//  main.cpp
//  617A-Elephant
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int num;
    cin>>num;
    
    int count = 0;
    while(num != 0){
        if(num >= 5)
            num -= 5;
        else if(num >= 4)
            num -= 4;
        else if(num >= 3)
            num -= 3;
        else if(num >= 2)
            num -= 2;
        else
            num -= 1;
        
        count++;
    }
    
    cout<<count;
    return 0;
}
