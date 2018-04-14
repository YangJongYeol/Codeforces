//
//  main.cpp
//  103B-Cthulhu
//
//  Created by 양종열 on 2018. 4. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int n, m, fc=0;
bool visited[5000];
vector<vector<int>> graph(101);
bool flag = false;

void dfs(int a, int a_pre) {
    if (fc > 2) {
        flag = false;
        return;
    }
    
    visited[a] = true;
    
    for (int i=0; i<graph[a].size(); i++) {
        if (visited[graph[a][i]] && a_pre != graph[a][i]) {
            fc++;
            flag = true;
        } else {
            if (a_pre != graph[a][i]) {
                dfs(graph[a][i], a);
                
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n>>m;
    
    int a,b;
    for (int i=0; i<m; i++) {
        cin>>a>>b;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1,-1);
    
    for (int j=1; j<=n; j++) {
        if (visited[j] == false) {
            cout<<"NO";
            return 0;
        }
    }
    
    if (flag) {
        cout<<"FHTAGN!";
        return 0;
    }
    
    cout<<"NO";
    return 0;
}
