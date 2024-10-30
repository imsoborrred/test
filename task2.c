#include <stdio.h>


int main(){

	int num = 1;
	int *ptr = &num;

	char *ptr1 =(char*) &num ;

	if(*ptr1 == 1){
	  printf("little endian  \n");

    	}else {
	  printf("big endian  \n");
	}

	if(sizeof(*ptr) =='4'){
	  printf("32-bit\n");
	   }else{
	  printf("64-bit\n");
		}


	return 0;
	}


