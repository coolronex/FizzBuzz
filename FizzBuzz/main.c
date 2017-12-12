//
//  main.c
//  FizzBuzz
//
//  Created by Aaron Chong on 12/6/17.
//  Copyright © 2017 ACprojects. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 1;
    int limit = 100;
    
    for (i = 1; i <= limit; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        } else if(i % 3 == 0) {
            printf("fizz\n");
        } else if(i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
