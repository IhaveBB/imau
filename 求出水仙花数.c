#include<stdio.h>
int main() {
    int a, ge, shi, bai;
    for (a = 100; a <= 1000; a++) {
        ge = a / 1 % 10;
        shi = a / 10 % 10;
        bai = a / 100 % 10;
        if (a == ge * ge * ge + shi * shi * shi + bai * bai * bai) {
            printf("%d\n", a);
        }
    }
    return 0;
}
