#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of Imaginary part is %d\n", c.complex);
}

int main(){
    comp cnums;
    
    printf("Enter the real value for num\n");
    scanf("%d", &cnums.real);

    printf("Enter the complex value for num\n");
    scanf("%d", &cnums.complex);
    
    display(cnums);
    
    return 0;
}