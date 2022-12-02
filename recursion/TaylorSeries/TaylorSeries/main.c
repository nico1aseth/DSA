//
//  main.c
//  TaylorSeries
//
//  Created by 王鏡溏 on 2022/11/30.
//

#include <stdio.h>

double e(int x, int n) {
    static double p=1, f=1;
    double r;
    if (n==0) return 1;
    r=e(x, n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

double e1(int x, int n) {
    static double s;
    if (n==0) return s;
    s=1+s*x/n;
    return e1(x, n-1);
}

double e2(int x, int n) {
    double s=1;
    int i=1;
    double num=1;
    double den=1;
    
    for (i=1; i<=n; i++) {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main() {
    // insert code here...
    printf("%lf \n", e2(4, 7));
    return 0;
}
