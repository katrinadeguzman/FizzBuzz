//
//  main.c
//  FizzBuzz
//
//  Created by Katrina de Guzman on 2017-05-17.
//  Copyright © 2017 Katrina de Guzman. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char* divBy3 = "Fizz";
    char* divBy5 = "Buzz";
    char* divBy3and5 = "FizzBuzz";
    
    for(int i = 1; i <= 100 ; i++)
    {
        if(i%3 == 0 && i%5 != 0)
        {
            printf("%s\n", divBy3);
        }
        else if(i%5 == 0 && i%3 !=0)
        {
            printf("%s\n", divBy5);
        }
        else if (i%3 == 0 && i%5 == 0)
        {
            printf("%s\n", divBy3and5);
        }
        else
        printf("%d\n", i);
    }
    return 0;
}
