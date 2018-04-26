//
//  main.cpp
//  707B-Bakery
//
//  Created by 양종열 on 2018. 4. 26..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int n,m,k;
vector<int> u,v;
vector<long long> l;
bool s[100001];
long long minVal = 1000000001;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n>>m>>k;
 
    int a,b,c;
    for (int i=0; i<m; i++) {
        cin>>a>>b>>c;

        u.push_back(a);
        v.push_back(b);
        l.push_back(c);
    }

    int z;
    for (int i=0; i<k; i++) {
        cin>>z;
        s[z] = true;
    }
    
    for (int j=0; j<m; j++) {
        if((u[j] != v[j]) && (s[u[j]] != s[v[j]])) {
            if(minVal > l[j]) minVal = l[j];
        }
    }
    
    if (minVal == 1000000001) {
        cout<<"-1";
    } else {
        cout<<minVal;
    }
    return 0;
}
