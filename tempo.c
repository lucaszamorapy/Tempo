/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int horas, minutos, segundos, segundos2, resto;
    printf("Digite qualquer valor:\n");
    scanf("%d",&segundos);
    
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos2 = resto % 60;
    
    printf("%d:%d:%d\n",horas,minutos,segundos2);
    
    
}
