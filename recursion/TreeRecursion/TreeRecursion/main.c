//
//  main.c
//  TreeRecursion
//
//  Created by 王鏡溏 on 2022/11/29.
//

#include <stdio.h>

void fun1(int n) {
    if (n>0) {
        printf("%d", n);
        fun1(n-1);
        fun1(n-1);
    }
}

int main(int x) {
    x=3;
    fun1(x);
    
    return 0;
}
