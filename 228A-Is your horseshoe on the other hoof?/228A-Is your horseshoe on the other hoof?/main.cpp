//
//  main.cpp
//  228A-Is your horseshoe on the other hoof?
//
//  Created by 양종열 on 2018. 2. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int tmp, valera=0;
    vector<int> vc;
    for (int i=0; i<4; i++) {
        cin>>tmp;
        vc.push_back(tmp);
    }
    
    sort(vc.begin(), vc.end());
    
    for (int i=1; i<4; i++) {
        if (vc[i-1] == vc[i]) {
            valera++;
        }
    }
    
    cout<<valera;
    
    return 0;
}
