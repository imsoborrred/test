#include <stdio.h>

 int addinteger(int a, int b) ;
 int addfloat(float a, float b) ;
 int circlearea(float a);
 int rectanglearea(int a, int b);
 int factorial(int a);
 int main(){
	int a = 10;
	int b = 10;

	float c = 12.90;
	float d = 12.90;

	float radious = 3.5;

        int add = addinteger(a, b);
	float floating =addfloat(c, d);
	float area = circlearea(radious);
	int rec =rectanglearea(a, b);
	int fact=factorial(a);

	printf("Add int : %d \n",add);
	printf("Add float : %.2f \n",floating);
	printf("Calculate Circle Area : %.2f \n",area);
	printf("Calculate Rectangle Area : %d \n", rec);
	printf("Calcualate Factorial : %d\n",fact);

        return 0;
        }

 int addinteger(int a, int b){

        return a+b ;


   }
 int addfloat(float a, float b){

        return a+b ;


    }
int circlearea(float a){

        return 3.14159 * a * a ;


    }
int rectanglearea(int a, int b){

        return a*b ;


    }
int factorial(int a){
	if(a <= 1){
	return 1;
	}
        return a*factorial(a-1) ;

    }



