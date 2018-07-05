//
//  main.cpp
//  839C-Journey
//
//  Created by 양종열 on 2018. 5. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int n;
bool visited[100001];
vector<vector<int>> vc(100001);
double ave = 0.0, num = 0.0;

void dfs(int x, int pre, double dept) {
    bool flag = false;
//    visited[x] = true;
    for (int i=0; i<vc[x].size(); i++) {
        if (vc[x][i] != x) {
//        if (!visited[vc[x][i]]) {
            flag = true;
            dfs(vc[x][i], x, dept+1.0);
        }
    }
    
    if (flag == false) {
        ave += dept;
        num += 1.0;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n;
    double a, b;
    for (int i=0; i<n-1; i++) {
        cin>>a>>b;
        vc[a].push_back(b);
        vc[b].push_back(a);
    }
    
    
    dfs(1, -1, 0.0);
    cout<<ave/num;
    return 0;
}
