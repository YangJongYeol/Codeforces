//
//  main.cpp
//  510B-Fox And Two Dots
//
//  Created by 양종열 on 2018. 3. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

bool map [51][51];
string str[51];
int n, m;
bool checkCircle = false;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void dfs(int x , int y , int fromX , int fromY , char alpha)
{
    if(x < 0 || x >= n || y < 0 || y >= m) return;
    if(str[x][y] != alpha) return;
    if(map[x][y]){
        checkCircle = true;
        return;
    }
    map[x][y] = true;
    for(int f =0 ; f < 4 ; f++){
        int nextX = x + dx[f];
        int nextY = y + dy[f];
        if(nextX == fromX && nextY == fromY) continue;
        dfs(nextX , nextY , x , y , alpha);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    memset(map, false, sizeof(map));
    
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>str[i];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (!map[i][j]) {
                dfs(i, j, -1, -1, str[i][j]);
            }
        }
        
        if (checkCircle) {
            cout<<"Yes";
            return 0;
        }
    }
    
    cout<<"No";
    return 0;
}
