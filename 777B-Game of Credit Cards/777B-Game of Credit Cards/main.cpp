//
//  main.cpp
//  777B-Game of Credit Cards
//
//  Created by 양종열 on 2018. 5. 6..
//  Copyright © 2018년 양종열. All rights reserved.
//  더 작은 쪽이 flick

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, sherlock, moriarty, flick1 = 0, flick2 = 0;
    vector<int> vc_sherlock, vc_moriarty;
    cin>>n>>sherlock>>moriarty;
    
    for (int i=0; i<n; i++) {
        vc_sherlock.push_back(sherlock%10);
        vc_moriarty.push_back(moriarty%10);
        sherlock /= 10;
        moriarty /= 10;
    }
    
    sort(vc_sherlock.begin(), vc_sherlock.end());
    sort(vc_moriarty.begin(), vc_moriarty.end());

    for (int i=0; i<n; i++) {
        <#statements#>
    }
    
    return 0;
}
