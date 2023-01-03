/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int get_digit(int n) {
    int value = 0, nn = n;
    while (nn > 0) {
        value *= 10;
        value += nn % 10;
        nn /= 10;
    }
    
    return value;
}

int main() {
    int n = 1234;
    int sum = 0;
    sum = get_digit(n);
    printf("sum = %d\n", sum);

    return 0;
}


