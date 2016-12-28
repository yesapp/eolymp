//
//  2.cpp
//  eolymp
//
//  Created by vitaliy on 12/28/16.
//  Copyright © 2016 YesApp. All rights reserved.
//

#include <iostream>
using namespace std;

int main (void)
{
    int k=1;
    int number;
    
    scanf("%d",&number);
    while(number >= 10)
    {
        number/=10;
        k++;
    }
    printf("%d\n",k);
    return 0;
}
