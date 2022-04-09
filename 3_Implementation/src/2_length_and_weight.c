#include<stdio.h>

int length(int v1);
int weight(int v1);
int length(int v1)         /*user selects length option*/
    {
    int option1,km,meter,feet,mile;
    printf("Enter in km:");
    scanf("%d",&km);
    printf("Choose:\n 1.meter 2.feet 3.mile\n");
    scanf("%d",&option1);
    switch(option1){
        case 1:
        meter= km * 1000;   //km - m 
        return meter;
        break;
        
        case 2:
        feet = km * 3281;    //km-feet
        return feet;
        break;
        
        case 3:
        mile = km / 1.609;  //km-mile
        return mile;
        break;
        
        default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 3 ***");
        exit(0);
    }
}
int weight(int v1)    /*user selects weight option*/
    {
    int option2,kg,gram,pound,ounce;
    printf("Enter in kilograms:");
    scanf("%d",&kg);
    printf("Choose:\n 1.gram 2.pound 3.ounce\n");
    scanf("%d",&option2);
    switch(option2){
        case 1:
        gram = kg*0.001;           //kg-g
        return gram;
        break;
        
        case 2:
        pound = kg*2.20462;    //kg-pound
        return pound;
        break;
        
        case 3:
        ounce = kg*35.274;     //kg-ounce
        return ounce;
        break;
        
        default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 3 ***");
        exit(0);
    }
}
