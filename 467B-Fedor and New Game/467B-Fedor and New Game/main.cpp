//
//  main.cpp
//  467B-Fedor and New Game
//
//  Created by 양종열 on 2018. 3. 16..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m,k;
    cin>>n>>m>>k;
    
    long long army[m+1];
    for (int i=0; i<=m; i++) {
        cin>>army[i];
    }
    
    int checkNum, friendNum=0;
    for (int i=0; i<m; i++) {
        checkNum = 0;
        army[i] = army[i]^army[m];
        // bit연산 ^ : XOR -> 같으면 0, 틀리면 1
        
        while (army[i]>=1) {
            if (army[i]%2) {
                checkNum++;
            }
            
            if (checkNum > k) {
                break;
            }
            army[i] /= 2;
        }
        
        if (checkNum <= k) {
            friendNum++;
        }
    }
    
    cout<<friendNum;
    return 0;
}
