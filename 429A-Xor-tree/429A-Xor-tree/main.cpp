//
//  main.cpp
//  429A-Xor-tree
//
//  Created by 양종열 on 2018. 4. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
const int N=100100;
vector<int> g[N],v;
int n,f[N];
void go(int a,int p,int q,int b=0){
    if(p^f[a]){
        v.push_back(a);
        p^=1;
    }
    
    for(int i=0;i<g[a].size();++i) {
        if(g[a][i]!=b)
            go(g[a][i],q,p,a);
    }
}

int main(void) {
    cin>>n;
    int a, b;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    for(int i=1;i<=n;++i)
        cin>>f[i];
    
    int x;
    for(int i=1;i<=n;++i){
        cin>>x;
        f[i]^=x;
    }
    
    go(1,0,0);
    
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();++i)cout<<v[i]<<endl;
}
