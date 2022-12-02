//
//  main.c
//  power
//
//  Created by 王鏡溏 on 2022/11/30.
//

#include <stdio.h>

int power(int m, int n) {
    if (n==0) return 1;
    if (n%2==0) {
        return power(m*m, n/2);
    } else return m*power(m*m, (n-1)/2);
}

int power1(int m, int n) {
    if (n==0) return 1;
    return m*power1(m, n-1);
}

int main() {
    int x = power1(2, 5);
    printf("%d\n", x);
    
    return 0;
}
