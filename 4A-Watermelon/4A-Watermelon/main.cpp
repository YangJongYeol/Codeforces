//
//  main.cpp
//  4A-Watermelon
//
//  Created by 양종열 on 2018. 1. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
