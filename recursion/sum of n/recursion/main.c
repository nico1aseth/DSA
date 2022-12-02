//
//  main.c
//  recursion
//
//  Created by 王鏡溏 on 2022/11/29.
//

#include <stdio.h>

int sum(int x) {
    if (x==0) {
        return 0;
    }
    return sum(x-1)+x;
}

int main(int n) {
    n=sum(5);
    printf("%d\n", n);
    
    return 0;
}
