//program for a 12hr clock
/*==========================================*/
//importing the header files
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//main method
int main(){
	int h,m,s; //declaring the hour, minute and, seconds counter
	int d = 1000; // adding a delay of 1k millisecond, we will use to sleep
	printf("\t\t\t\t\t\tWelcome to the Clocker APP\n\t\t\t\t\t\t/*---------------------------/*");
	printf("\nset the initial time of the clock: \n\n"); 
	scanf("%d:%d:%d",&h,&m,&s) ; //taking input for the initial time, i.e. set time of the clock
	if(h>12 || m>60 || s>60){ //checking for invalid inputs, for 24 hour clock, replace 'h>12' with 'h>24'
		printf("ERROR ! \n");
		exit(0);
	}
	while(1) // infinite loop, to run the clock program, unless user delibrately exits the program
	{
		s++;
		if(s>59){ //if 59 seconds are completed, increment the minute counter by 1
			m++;
			s=0;  //reset the seconds counter, after incrementing the minute counter
		}
		if(m>59){
			h++;
			m=0;
		}
		if(h>12){ //for 24 hour clock, replace 12 by 24
			h=1;  //reset the hour counter, when 12hrs completed(for 12 hour clock)
		}
		printf("\n Clock: ");
		printf("\n %02d:%02d:%02d",h,m,s); // this writes the time in the 00:00:00 format
		Sleep(d); //temporarily provides a pause between displaying of time, to show an animation effect
		system("cls"); // this clears the screen
	}
}
