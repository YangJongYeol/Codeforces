//
//  main.cpp
//  476B-Dreamoon and WiFi
//
//  Created by 양종열 on 2018. 3. 28..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string dreamoon, drazil;
    int dreamoonPos=0, drazilPos=0, questionCount=0;
    
    cin>>dreamoon>>drazil;
    
    for (int i=0; i<dreamoon.length(); i++) {
        if (dreamoon[i] == '+') { dreamoonPos++; }
        else if (dreamoon[i] == '-') { dreamoonPos--; }
    }
    
    for (int i=0; i<drazil.length(); i++) {
        if (drazil[i] == '+') { drazilPos++; }
        else if (drazil[i] == '-') { drazilPos--; }
        else if (drazil[i] == '?') { questionCount++; }
    }
    
    int values[(int)pow(questionCount, 2)];
    int index = 0;
    for (int i=0; i<questionCount; i++) {
        
    }
    
    return 0;
}
