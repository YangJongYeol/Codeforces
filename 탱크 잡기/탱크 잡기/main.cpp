//
//  main.cpp
//  탱크 잡기
//
//  Created by 양종열 on 2018. 6. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<pair<int, int>, int>> node(100000);
vector<pair<int, int>> node2(100000);
int total[100000];

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    pair<pair<int, int>, int> temp;
    for (int i=0; i<n; i++) {
        cin>>temp.first.first>>temp.first.second>>temp.second;
        node.push_back(temp);
    }
    
    sort(node.begin(), node.end(), [](auto& lhs, auto& rhs));
    
    pair<int, int> info[n];
    
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (node[i].first.first > node[j].first.first && node[i].first.second > node[j].first.second) {
                if (total[j] != 0) {
                    total[i] += total[j];
                    break;
                }
            }
        }
    }
    
    int result = 0;
    for (int i=0; i<n; i++) {
        result += total[i];
    }
    return 0;
}
