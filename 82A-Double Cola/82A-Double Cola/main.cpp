//
//  main.cpp
//  82A-Double Cola
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

//  "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"

// Sheldon1 - Leonard2 - Penny3 - Rajesh4 - Howard5

// Sheldon6 - Sheldon7 - Leonard8 - Leonard9 - Penny10 - Penny11 - Rajesh12 - Rajesh13 - Howard14 - Howard15

// Sheldon16 - Sheldon17 - Sheldon18 - Sheldon19 - Leonard20 - Leonard21 - Leonard22 - Leonard23 -
// Penny24 - Penny25 - Penny26 - Penny27 - Rajesh28 - Rajesh29 - Rajesh30 - Rajesh31 - Howard32 - Howard33 - Howard34 - Howard35

/*
 1*5 - 2*5 - 4*5 - 8*5
 
 5  = num(0) + 5*2^line(0)
 15 = num(5) + 5*2^line(1)
 35 = num(15) + 5*2^line(2)
 75 = num(35) + 5*2^line(3)
 num = num + 5*pow(2,line)
 
 if n = 6
 num = 0, line = 0
 5 < 6 num = 5, line = 1
 15 > 6 break num = 5, line = 1
 
 6-5 = 1
 1 <= 1 && 1 <=(line+1)*1+1
 
 
 \\
 if n = 3
 num = 0, line = 0
 5 > 3 break num = 0, line = 0
 n(3) - num(0) = 3 / line+1 = 3 = penny
 
 \\
 if n = 5
 num = 0, line = 0
 5 = 5 break num = 0, line = 0
 n(5) - num(0) = 5 / line+1 = 5 = howard
 
 \\
 if n = 10
 num = 0, line = 0
 5 < 10 num = 5, line = 1
 15 > 10 break num = 5, line = 1
 10 - 5 = 5
 
 1 <
 
 \\
 if n = 20
 num = 0, line = 0
 5 < 20 num = 5, line = 1
 15 < 20 num = 15, line = 2
 35 > 20 break, num = 15, line = 2
 n(20)-num(15)/line+1 = 5/3 = 1.6 = leonard
 
 \\
 if n = 35
 num = 0, line = 0
 5 < 35 num = 5, line = 1
 15 < 35 num = 15, line = 2
 35 = 35 break num = 15, line  = 2
 
 35 - 15 / 3 = 20/3
 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    double n;
    cin>>n;
    
    double num = 0;
    double line = 0;
    while (true) {
        if(num+5*pow(2, line) >= n)
            break;
        
        num = num+5*pow(2, line);
        line++;
    }
    // line을 찾았다.
    
    // Sheldon - Leonard - Penny - Rajesh - Howard
    double temp = n - num;
    double count = 0.0;
    while (true) {
        if (1+(count+1)*pow(2,line) > temp) {
            break;
        }
        
        count++;
    }
    
    if(count == 0) { cout<<"Sheldon"; }
    else if (count == 1 ) { cout<<"Leonard"; }
    else if (count == 2 ) { cout<<"Penny"; }
    else if (count == 3 ) { cout<<"Rajesh"; }
    else { cout<<"Howard"; }
    cout<<endl;
    
    return 0;
}
