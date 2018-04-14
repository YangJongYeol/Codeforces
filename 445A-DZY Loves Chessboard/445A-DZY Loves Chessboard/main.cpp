//
//  main.cpp
//  445A-DZY Loves Chessboard
//
//  Created by 양종열 on 2018. 4. 2..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
char chessboard[100][100];
char result[100][100];
int n,m;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n>>m;
    string str;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if((i+j)%2==0) result[i][j] = 'B';
            else result[i][j] = 'W';
        }
    }
    
    for (int i=0; i<n; i++) {
        cin>>str;
        for (int j=0; j<m; j++) {
            if (str[j] == '-') result[i][j] = '-';
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<result[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}
