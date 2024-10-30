#include <stdio.h>

int main(){

	char arr1[4];
	int arr2[4];
	short arr3[4];
	double arr4[4];

	printf("Character\n");
	for(int i=0 ; i <4 ; i++){
		printf("%p\n", &arr1[i]);
	}
	printf("Integer\n");
	for(int i=0 ; i <4 ; i++){
                printf("%p\n", &arr2[i]);
        }

	printf("Short\n");
        for(int i=0 ; i <4 ; i++){
                printf("%p\n", &arr3[i]);
        }

	printf("Double\n");
        for(int i=0 ; i <4 ; i++){
                printf("%p\n", &arr4[i]);
        }

	return 0;
	}
