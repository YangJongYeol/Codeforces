//
//  main.cpp
//  604B-More Cowbell
//
//  Created by 양종열 on 2018. 4. 15..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
using namespace std;
int k,n,x,m,i,s[100001];
int main() {
    ios::sync_with_stdio(false);
    cin>>n>>k;
    for(i=2*k-n+1;i<=2*k;i++)
        cin>>s[i];
    for(i=1;i<=k;i++)
        m=max(m,s[i]+s[2*k-i+1]);
    cout<<m<<endl;
    
    return 0;
}
