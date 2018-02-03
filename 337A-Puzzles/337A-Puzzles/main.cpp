//
//  main.cpp
//  337A-Puzzles
//
//  Created by 양종열 on 2018. 2. 4..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    
    vector<int> puzzle;
    
    for (int i=0; i<m; i++) {
        int temp;
        cin>>temp;
        
        puzzle.push_back(temp);
    }
    
    sort(puzzle.begin(), puzzle.end());
    
    int minDiff = 1000;
    for (int i=0; i<=m-n; i++) {
        minDiff = min(minDiff, puzzle[n+i-1]-puzzle[i]);
    }
    
    cout<<minDiff;
    
    return 0;
}
