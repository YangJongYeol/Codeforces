//
//  main.cpp
//  500A-New Year Transportation
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
int N, idx, A;

int main(){
    
    std::cin >> N;
    cin >> idx;
    int currIdx =1;
    int b = 1;
    
    while(N--){
        cin >> A;
        currIdx += A;
        b++;
        if(currIdx > b){
            while(currIdx > b){
                cin >> A;
                b++;
            }
        }
        if(currIdx >= idx) break;
    }
    if(currIdx == idx){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
