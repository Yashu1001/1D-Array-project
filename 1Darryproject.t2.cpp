#include <stdio.h>
main(){
	int h;
	int y;
	int hy[] = {10, 20, 30, 40, 50};

  	h = sizeof(hy);
  	y = sizeof(int);

  	int l = h/y;

  	printf("Length= %d \n", l);
  
}
