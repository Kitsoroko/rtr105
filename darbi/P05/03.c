#include<stdio.h>


char x;

int fun()
{
char delta = 7;
char x =  x+delta;

return x;
}

int main() 
 {
char x = 30;
printf("Pirms, %c \n", x);
// Sheit paradas burts jo atbilst ASCII tabulai

fun();
printf("Peec 1 reizes, %c \n", x);

printf("Peec 2 reizem, %c \n", x);
}
