#include<stdio.h>
#define PI 3.142857
#define freq 50

int elecunit(float v1);
int electricalformula(int v1);

int elecunit(float v1){          /*user selects electrical unit conversion option*/
    int option4;
    float power_w=0,power_hp=0,power_kW=0,powerfact,power_kVA=0;
    float rad_s,RPM;
    printf("choose:\n 1.hp to watts\n 2.watts to hp");
     printf("\n 3.kW to kVA\n 4.kVA to kW");
    printf("\n 5.rad/sec to RPM\n 6.RPM to rad/sec\n");
    scanf("%d",&option4);
    switch(option4){
        case 1:
        printf("enter power in HP: "); scanf("%f",&power_hp); 
        power_w = 746 * power_hp ;      //hp - w
        printf("power in watts: ");
        return power_w;
        break;
        
        case 2:
        printf("enter power in watts: "); scanf("%f",&power_w);
        power_hp = power_w / 746 ;    // w-hp
        printf("power in HP: ");
        return power_hp;
        break;
        
        case 3:
        printf("enter power in kW: "); scanf("%f",&power_kW);
        printf("enter powerfactor value: "); scanf("%f",&powerfact);
        power_kVA = power_kW / powerfact ;      // kw-kva
        printf("power in kVA: ");
        return power_kVA;
        break;
        
        case 4:
        printf("enter power in kVA: "); scanf("%f",&power_kVA);
        printf("enter powerfactor value: "); scanf("%f",&powerfact);
        power_kW = power_kVA * powerfact ;        //kva-kw
        printf("power in kW: ");
        return power_kW;
        break;
        
        case 5:
        printf("enter rad/sec value: "); scanf("%f",&rad_s);
        RPM = (rad_s / (2*PI))*60;            //rad/sec - rpm
        printf("value in RPM: ");
        return RPM;
        break;
        
        case 6:
        printf("enter RPM value: "); scanf("%f",&RPM);
        rad_s = (RPM / 60)*(2*PI);            //rpm - rad/sec
        printf("value in rad/sec: ");
        return rad_s;
        break;
        
        default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 6 ***");
        exit(0);
    }
}
        
int electricalformula(int v1){   /*user selects electrical formula option*/
    int ption5,power,speed,torque,no_of_poles,ang_freq,frequency;
    printf("choose:\n 1.power 2.torque");
    printf("\n 3.speed 4.no_of_poles");
    printf("\n 5.freq  6.ang_freq\n");
    scanf("%d",&option5);
    switch(option5){
        case 1:
        printf("enter torque in N-m: "); scanf("%d",&torque);
        printf("enter speed in RPM: ");  scanf("%d",&speed);
        power = torque * speed / 9.5488;     
        printf("power in W: ");
        return power;
        break;
        
        case 2:
        printf("enter power in watts: "); scanf("%d",&power);  
        printf("enter speed in RPM: ");  scanf("%d",&speed);
        torque = 9.5488 * power / speed;
        printf("torque (in N.m): ");
        return torque;
        break;
        
        case 3:
        printf("enter the number of poles: ");  scanf("%d",&no_of_poles);//4->1500
        speed = (120 * freq) / no_of_poles;
        printf("speed value(in rpm): ");
        return speed;
        break;
        
        case 4:
        printf("enter the speed(in rpm): ");  scanf("%d",&speed); //1500->4
        no_of_poles = (120 * freq) / speed;
        printf("no_of_poles: ");
        return no_of_poles;
        break;
        
        case 5:
        printf("enter angular frequency(in rad/sec): ");  scanf("%d",&ang_freq); //315->50
        frequency = ang_freq / (2*PI);
        printf("frequency in Hz: ");
        return frequency;
        break;
        
        case 6:
        printf("enter frequency(in Hz): ");  scanf("%d",&frequency); //50->314
        ang_freq = (2*PI)*frequency;
        printf("angular frequency in rad/sec: ");
        return ang_freq;
        break;
        
        default:
        printf("       ...!!WARNING!!...    \n");
        printf("You have pressed a wrong choice\n");
        printf("!***KINDLY CHOOSE THE AVAILABLE OPTIONS FROM 1 to 6 ***");
        exit(0);
    }
}
