#include<stdio.h>

int temperature(int v1);

int temperature(int v1)    /*user selects temperature option*/
    {
    int option3,celsius,farenheit,kelvin;
    printf("Choose:\n 1.celsius to farenheit\n 2.farenheit to celsius\n 3.celsius to kelvin\n");
    printf(" 4.kelvin to celsius\n");
    scanf("%d",&option3);
    switch(option3){
        case 1:
        printf("Enter in celsius:");    //C-F
        scanf("%d",&celsius);
        farenheit = (celsius * 9/5) + 32 ;
        return farenheit;
        break;
        
        case 2:
        printf("Enter in farenheit:");   //F-C
        scanf("%d",&farenheit);
        celsius = (farenheit - 32)*5/9;
        return celsius;
        break;
        
        case 3:
        printf("Enter in celsius:");    //C-K
        scanf("%d",&celsius);
        kelvin = celsius + 273.15;
        return kelvin;
        break;
        
        case 4:
        printf("Enter in kelvin:");     //K-C
        scanf("%d",&kelvin);
        celsius = kelvin - 273.15;
        return celsius;
        break;
        
        default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 4 ***");
        exit(0);
    }
}
