#include<stdio.h> 
main(){
	int a[5],b[5],c[5],i; 
	printf("first array\n");
    for(i=0;i<5;i++){
	 scanf("%i",&a[i]); 
	}
	    printf("second array\n");  
    for(i=0;i<5;i++){ 
 	    scanf("%i",&b[i]);
	}
	for(i=0;i<5;i++){
	c[i]=a[i]+b[i];  
	printf("sum two array [%i] %i\n",i,c[i]); 
	}  
 } 
