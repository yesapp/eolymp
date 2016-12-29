//
//  main.cpp
//  development
//
//  Created by vitaliy on 12/28/16.
//  Copyright © 2016 YesApp. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    double centerDist = sqrt(pow(x1-x2, 2) + pow(y1 - y2, 2));
    double radiusDist = r1 + r2;
    
    // case when both circumference are equal
    if(x1 == x2 && y1 == y2 && r1 == r2) {
        cout << "-1" << endl;
    } else
    // case when there is no crossing
    // and two circumference far away from each other
    if(centerDist > radiusDist) {
        cout << "0" << endl;
    } else
    // case when thre is no crossing and one circumferene
    // is inside the another one
    if((centerDist < r1 && (r1 - centerDist) > r2) || (centerDist < r2 && (r2 - centerDist) > r1)) {
        cout << "0" << endl;
    } else
    // case when there is only one cross
    if(centerDist == radiusDist) {
        cout << "1" << endl;
    } else
    // case when thre is only one crossibg and one circumferene
    // is inside the another one
    if((centerDist < r1 && (r1 - centerDist) == r2) || (centerDist < r2 && (r2 - centerDist) == r1)) {
        cout << "1" << endl;
    }
    else {
        cout << "2" << endl;
        return 0;
    }

    return 0;
}
