//
//  6249.cpp
//  eolymp
//
//  Created by vitaliy on 5/2/16.
//  Copyright © 2016 YesApp LLC. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int days[n];
    int resultDay, nextDayPlusGap;
    
    for(int i = 0; i < n; i++) {
        cin >> days[i];
    }
    
    sort(days, days+n, greater<int>());
    
    resultDay = days[0];
    
    for (int i = 0; i < n-1; i++) {
        nextDayPlusGap = days[i+1] + (i+1);
        if(nextDayPlusGap > resultDay) {
            resultDay = nextDayPlusGap;
        }
    }
    
    resultDay += 2;
    
    cout << resultDay << endl;
}
