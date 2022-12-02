//
//  main.c
//  factorial
//
//  Created by 王鏡溏 on 2022/11/29.
//

#include <stdio.h>

int fun(int x) {
    if (x==0) {
        return 1;
    }
    return fun(x-1)*x;
}

int main(int n) {
    n=fun(5);
    printf("%d\n", n);
    
    return 0;
}
