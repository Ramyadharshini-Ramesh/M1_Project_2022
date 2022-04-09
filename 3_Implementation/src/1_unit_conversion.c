#include<stdio.h>
#define PI 3.142857
#define freq 50

int length(int v1);
int weight(int v1);
int temperature(int v1);
int elecunit(float v1);
int electricalformula(int v1);

int main()
{
    int operation,fc,v1;
    float fd;
    printf("================= *** WELCOME *** ==================\n ") ;
          /* telling the user to choose their choice of interest */
    printf("Please choose your choice of convertion from the below suggestions\n");
    printf("Choose your options from 1 to 5\n");
    printf("1 - LENGTH\n");
    printf("2 - WEIGHT\n"); 
    printf("3 - TEMPERATURE\n");
    printf("4 - ELECTRICAL UNIT CONVERSION\n"); 
    printf("5 - POWER, TORQUE, SPEED, POLES, ANGULAR FREQ,FRQUENCY\n"); 
    printf("======================================================\n");
    
    scanf("%d",&operation);//input choice from user
    switch(operation)
    {
      case 1:
        fc = length(v1);
        printf("%d",fc);
        printf("\n  HOPE YOU GOT THE ANSWER!!..\n      HAVE A NICE DAY!!.......");
        break;

      case 2:
        fc = weight(v1);
        printf("%d",fc);
        printf("\nHOPE YOU GOT THE ANSWER!!..\n   HAVE A NICE DAY!!.......");
        break;

      case 3:
        fc = temperature(v1);
        printf("%d",fc);
        printf("\nHOPE YOU GOT THE ANSWER!!..\n   HAVE A NICE DAY!!.......");
        break;

      case 4:
        fd = elecunit(v1);
        printf("%.2f",fd);
        printf("\nHOPE YOU GOT THE ANSWER!!..\n   HAVE A NICE DAY!!.......");
        break;
        
      case 5:
        fc = electricalformula(v1);
        printf("%d",fc);
        printf("\nHOPE YOU GOT THE ANSWER!!..\n   HAVE A NICE DAY!!.......");
        break;
        
      default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 5 ***");
    }
    return 0;
}

