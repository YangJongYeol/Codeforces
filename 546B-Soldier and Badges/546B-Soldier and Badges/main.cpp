//
//  main.cpp
//  546B-Soldier and Badges
//
//  Created by 양종열 on 2018. 5. 1..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,c=0;
    cin>>n;
    
    int a;
    vector<int> vc;
    for (int i=0; i<n; i++) {
        cin>>a;
        vc.push_back(a);
    }
    
    sort(vc.begin(), vc.end());
    
    for (int i=1; i<vc.size(); i++) {
        if (vc[i] == vc[i-1]) {
            vc[i]++; c++;
        } else if (vc[i] < vc[i-1]) {
            int b = vc[i-1] - vc[i];
            vc[i] += b+1;
            c += b+1;
        }
    }
    
    cout<<c;
    return 0;
}
