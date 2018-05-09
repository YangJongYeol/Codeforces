//
//  main.cpp
//  976C-Nested Segments
//
//  Created by 양종열 on 2018. 5. 9..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> pos;
vector<pair<int, int>> Index;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n;
    for (int i=0; i<n; i++) {
        int a,b;
        pair<int, int> tmp;
        cin>>a>>b;
        
        pos.push_back(i+1);
        tmp.first = a; tmp.second = b;
        Index.push_back(tmp);
    }
    
    sort(pos.begin(), pos.end(), [](int a, int b) {
        if(Index[a-1].first != Index[b-1].first) {
            return Index[a-1].first < Index[b-1].first;
        } else {
            return Index[a-1].second > Index[b-1].second;
        }
    });
    
    int a = -1, b = -1;
    for(int i=0; i<n-1; i++) {
        if(Index[pos[i]-1].first <= Index[pos[i+1]-1].first && Index[pos[i]-1].second >= Index[pos[i+1]-1].second) {
            a = pos[i+1]; b = pos[i];
            break;
        }
    }
    
    cout<<a<<" "<<b;
    return 0;
}
