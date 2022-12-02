#include<stdio.h>
main(){
    int a[5]; 
    int p = 1;
	int i = 0;
    for(i=0; i<5; i++){ 
        printf("Enter arrey %i : ",i); 
        scanf("%d",&a[i]); 
          p = p * a[i];
	} 
   	printf("Product :- %i\n",p);   
}
