/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_spaces(int r, int rows){
    printf("%*c", r*2 ,' ' );
    return;
        
}
    
void print_stars(int r){
    for (int j = 0; j < r; j++){
        if(j== r-1)
            printf("*");
        else
            printf("* ");
    }
    printf("\n");
    return;
        
    
    
}
int main(){
    int rows = 5;
    for (int i = 0; i <= rows; i++){
        if(i)
            print_spaces(i, rows);
            print_stars((rows - i) * 2 -1);
        
    }

    return 0;
}
