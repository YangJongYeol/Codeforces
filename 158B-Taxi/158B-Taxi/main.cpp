//
//  main.cpp
//  158B-Taxi
//
//  Created by 양종열 on 2018. 1. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

/*
 group[i]의 값이 4일 경우 pass
 아닐 경우 다른 group들 중에서 더했을때 값이 4가 나오는 경우를 확인
 있다면 group[i]의 값을 4로 변경 & group[j]의 값을 0으로 변경
 없다면 pass
 
 => group[]의 값이 0이 아닌 group의 개수를 출력
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,temp, count=0;
    cin>>n;
    int group[4];
    for (int i=0; i<5; i++) {
        group[i]=0;
    }
    
    for (int i=0; i<n; i++) {
        cin>>temp;
        group[temp-1]++;
    }
    
    group[0]=max(group[0]-group[2],0);
    
    temp = group[0]+2*group[1];
    if(temp%4!=0)
        count = group[3]+group[2]+temp/4+1;
    else
        count = group[3]+group[2]+temp/4;
    
    cout<<count<<endl;
    
    return 0;
}
