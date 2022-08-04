/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int module(int in)
{
    return(fabs(in)); //fabs - нахождение модуля от числа из <math.h>.
}

int main()
{
    int in;
    int out;
    //printf("Введите целое число.\n");
    scanf("%d", &in);
    out = module (in);
    //printf("Модуль числа %d = %d. \n", in, out);
    printf("%d", out);
    return 0;
}

