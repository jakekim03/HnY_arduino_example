#include<stdio.h>
#include<wiringPi.h>
#include<softPwm.h>
 
#define SERVO 1
 
int main() {
        char str;
 	int x;
	


        if(wiringPiSetup()==-1)
                return 1;
 
        softPwmCreate(SERVO,0,200);
 
        while(1) {
		
               
               	float y=0;
		printf("angle : ");
		scanf("%d",&x);
		if(x==0) softPwmWrite(SERVO,5);
		else{
			y=x*0.1+5;	
			softPwmWrite(SERVO,y);
			}
                 }
 
        return 0;
}



