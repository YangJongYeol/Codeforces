//
//  main.cpp
//  976B-Lara Croft and the New Game
//
//  Created by 양종열 on 2018. 5. 8..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
long long x, y, k;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>x>>y>>k;
    
    if (k < x) {
        cout<<1+k<<" "<<1;
    } else if (k < x+y-1) {
        cout<<x<<" "<<k-(x-1)+1;
    } else {
        k -= x+y-2;
        long long a = x, b = y;
        long long i = k/((y-1)*2);
        long long j = k%((y-1)*2);
        
        if (j == 0) {
            a = x - i*2;
        } else if (j <= y-1) {
            a = x-1 - i*2;
            b = y+1 - j;
        } else {
            j -= y-1;
            
            a = x-2 - i*2;
            b = y   + (j-(y-1));
        }
        
        cout<<a<<" "<<b;
    }
    
    return 0;
}

//    pair<int, int> coordi;
//
//    coordi.first = 1;
//    coordi.second = 1;
//
//    int direction = 1;  // 1: down, 2: right 3: up before right, 4: left, 5: up before left
//    while (k--) {
//        if (coordi.first != x && coordi.second == 1 && direction == 1) {
//            coordi.first +=1;
//        } else {
//            if (direction == 1) {
//                coordi.second += 1;
//                direction = 2;
//            } else if (direction == 2) {
//                if (coordi.second == y) {
//                    coordi.first -= 1;
//                    direction = 3;
//                } else {
//                    coordi.second += 1;
//                }
//            } else if (direction == 3) {
//                direction = 4;
//                coordi.second -= 1;
//            } else if (direction == 4) {
//                if (coordi.second == 2) {
//                    direction = 5;
//                    coordi.first -= 1;
//                } else {
//                    coordi.second -= 1;
//                }
//            } else {
//                direction = 2;
//                coordi.second += 1;
//            }
//        }
//    }
//
//    cout<<coordi.first<<" "<<coordi.second;
