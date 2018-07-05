//
//  main.cpp
//  삼거리 주유소
//
//  Created by 양종열 on 2018. 5. 10..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int widthCity[5001], heightCity[5001];
int dp1[10001];  // 삼거리에서 그냥 가는 방법
int dp2[10001];  // 삼거리에서 좌회전 했다가 충전 후 가는 방법
int widthRoad[5000], heightRoad[5000];

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int width;
    cin>>width;
    for (int i=1; i<=width-1; i++) {
        cin>>widthCity[i]>>widthRoad[i];
    }
    
    int index, height;
    cin>>index>>height;
    for (int i=1; i<=height; i++) {
        cin>>heightRoad[i]>>heightCity[i];
    }
    
    dp1[1] = widthCity[1]*widthRoad[1];
    int i;
    for (i = 2; i<=width; i++) {
        dp1[i] = min(dp1[i-1]+widthCity[i-1]*widthRoad[i], dp1[i-1]+widthCity[i]*widthRoad[i]);
    }
    
    dp2[1] = widthCity[1]*widthRoad[1];
    int j;
    for (j = 2; j<index; j++) {
        dp2[i] = min(dp2[i-1]+widthCity[i-1]*widthRoad[i], dp2[i-1]+widthCity[i]*widthRoad[i]);
    }
    
    dp2[index] = widthCity[index]*heightRoad[1];
    int k;
    for (k = 2; k < ; <#increment#>) {
        <#statements#>
    }
    
    cout<<min(dp1[i], dp2[j]);
    return 0;
}
