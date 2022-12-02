#include<stdio.h>
main(){
	int a[10]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int s = 0;
	int n = 0;
	float average;
	
	for(n=0; n<10; n++){	
		s = s + a[n];
	}
	average = (float)s / n;
	printf("Average :- %f",average);	
	}
