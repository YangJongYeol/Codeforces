//
//  main.cpp
//  580C-Kefa and Park
//
//  Created by 양종열 on 2018. 3. 27..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#define MAX 10000001
using namespace std;
int isCat[MAX];
bool visited[MAX];
vector<vector<int>> graph(MAX);
int n, m, ans = 0;

void dfs(int u, int sum_cat) {
    int sum = 0;
    visited[u] = true;
    
    if (sum_cat > m) {
        return;
    }
    
    bool ok = false;
    for (int v=0; v<graph[u].size(); v++) {
        if (!visited[graph[u][v]]) {
            isCat[graph[u][v]] ? sum = sum_cat+1 : sum=0;
            dfs(graph[u][v], sum);
            ok = true;
        }
    }
    if(!ok)
        ans++;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int a, b;
    cin>>n>>m;
    for (int i=1; i<n+1; i++) {
        cin>>isCat[i];
    }
    
    for (int i=1; i<n; i++) {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1, isCat[1]);
    cout<<ans;
    
    return 0;
}
