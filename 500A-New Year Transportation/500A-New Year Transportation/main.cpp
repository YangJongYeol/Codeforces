//
//  main.cpp
//  500A-New Year Transportation
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, t, a, cur=1, b=1;
    
    cin >> n;
    cin >> t;
    
    while(n--){
        cin >> a;
        cur += a;   // a를 더해주자. += 인 이유는 index + 값이므롱
        b++;
        if(cur > b){
            while(cur > b){
                cin >> a;   // 입력만 받고 넘어가자
                b++;    // index 앞으로
            }
        }
        if(cur >= t) break;
    }
    if(cur == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
