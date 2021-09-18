#include<stdio.h>
#include<conio.h>
int main(){
	
int salary;
printf("enter the salay\n");
scanf("%d",&salary);
if(salary<=30000){printf("post is worker");
}	
else if(salary<=50000){printf("post is hr");
}	
else if(salary<=80000){printf("post is gm");
}	
else{printf("post is pm");
}	
	
	
}