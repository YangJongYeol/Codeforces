//
//  main.cpp
//  160A-Twins
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    
    vector<int> coins;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        coins.push_back(temp);
    }
    
    sort(coins.begin(), coins.end());
    
    int myCoins=1;
    int myCoinValues=coins[n-1];
    int twinCoinValues = accumulate(coins.begin(),coins.end()-1,0);
    
    while(twinCoinValues>=myCoinValues){
        myCoinValues+=coins[n-1-myCoins];
        twinCoinValues -= coins[n-1-myCoins];
        myCoins++;
    }
    
    cout<<myCoins;
    
    return 0;
}
