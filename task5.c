#include <stdio.h>
int compute(int vector[3], int matrix[3][3], int mult[3]);

int main() {
	int vector[3];
    	int matrix[3][3];
    	int mult[3];

    	printf("Enter data for the vector:\n");
    		for (int i=0; i<3; i++) {
        printf("Enter element for vector[%d]: ", i);
        	scanf("%d", &vector[i]);
    			}

    	printf("Enter data for the matrix:\n");
    		for (int i=0; i<3; i++) {
     		   for (int j=0; j<3; j++) {
            printf("Enter element for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    compute(vector, matrix, mult);
    	printf("Resulting vector after multiplication:\n");
	    for (int i=0; i<3; i++) {
       		 printf("mult[%d]: %d\n", i, mult[i]);
    }

    		return 0;
		}
int compute(int vector[3], int matrix[3][3], int mult[3]) {
    	for (int i=0; i<3; i++) {
        mult[i] = 0;
        for (int j=0; j<3; j++) {
            mult[i] += vector[j] * matrix[j][i];
        }
    }
}

