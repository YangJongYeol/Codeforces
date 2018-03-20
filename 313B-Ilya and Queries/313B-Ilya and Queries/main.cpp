//
//  main.cpp
//  313B-Ilya and Queries
//
//  Created by 양종열 on 2018. 3. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string queries;
    cin>>queries;
    
    int dp[queries.length()];
    
    dp[0]=0;
    for (int i=1; i<queries.length(); i++) {
        if (queries[i-1]==queries[i]) { dp[i] = dp[i-1]+1; }
        else { dp[i] = dp[i-1]; }
    }
    
    int m,l,r;
    cin>>m;
    for (int i=0; i<m; i++) {
        cin>>l>>r;
        cout<<(dp[r-1]-dp[l-1])<<"\n";
    }
    
    return 0;
}
