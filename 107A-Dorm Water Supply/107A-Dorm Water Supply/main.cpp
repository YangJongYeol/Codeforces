//
//  main.cpp
//  107A-Dorm Water Supply
//
//  Created by 양종열 on 2018. 4. 14..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> vc(1001);
int visited[1001];
int map[1001][1001];
vector<int> startVc, endVc, diameterVc;
int n,p,minDia=1000000;

void dfs(int node, bool flag) {
    if(!flag) {
        for(int i=0; i<vc[node].size(); i++) {
            if(visited[vc[node][i]]) continue;
            else {
                visited[vc[node][i]] = true;
                dfs(vc[node][i], flag);
            }
        }
    } else {
        bool isEnd = true;
        for(int i=0; i<vc[node].size(); i++) {
            if(visited[vc[node][i]]) continue;
            else {
                isEnd = false;
                visited[vc[node][i]] = true;
                if(map[node][vc[node][i]] < minDia)
                    minDia = map[node][vc[node][i]];
                dfs(vc[node][i], flag);
            }
        }
        
        if (isEnd) endVc.push_back(node);
    }
}

void clean() {
    for(int i=1; i<=n; i++) {
        visited[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    
    cin>>n>>p;
    
    if(p==0) {
        cout<<0<<"\n";
        return 0;
    }
    
    int house1, house2, diameter;
    for(int i=0; i<p; i++) {
        cin>>house1>>house2>>diameter;
        
        vc[house1].push_back(house2);
        // vc[house2].push_back(house1);
        
        map[house1][house2] = diameter;
        map[house2][house1] = diameter;
    }
    
    for(int i=1; i<=n; i++) {
        dfs(i, false); // search start or end point
    }
    
    for(int i=1; i<=n; i++) {
        if(visited[i] == false)
            startVc.push_back(i);
    }
    
    clean();
    
    for(int i=0; i<startVc.size(); i++) {
        dfs(startVc[i], true);  // find start to end node & min diameter
        //cout<<startVc[i]<<" "<<t<<" "<<minDia<<"\n";
        diameterVc.push_back(minDia);
        minDia=1000000;
    }
    
    int count = 0;
    for(int i=0; i<startVc.size(); i++) {
        if(startVc[i] == endVc[i] || diameterVc[i] == 1000000) continue;
        count++;
    }
    
    cout<<count<<"\n";
    for(int i=0; i<startVc.size(); i++) {
        if(startVc[i] == endVc[i] || diameterVc[i] == 1000000) continue;
        cout<<startVc[i]<<" "<<endVc[i]<<" "<<diameterVc[i]<<"\n";
    }
    
    return 0;
}
