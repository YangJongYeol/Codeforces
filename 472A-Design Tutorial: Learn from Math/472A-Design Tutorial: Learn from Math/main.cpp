//
//  main.cpp
//  472A-Design Tutorial: Learn from Math
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    if (n % 2 == 0) {
        cout << n - 4 << " 4";
    } else {
        cout << n - 9 << " 9";
    }
}
