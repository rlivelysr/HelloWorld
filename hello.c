#include <stdio.h>
int main() {
	int value;
	printf("HELLO, World!\n");
	int x=4;
	int y=3;
	printf("Var \t Val \n x \t %d \n y \t %d \n",x,y);
	printf("x / y = %f\n", (float)(x/y));
	printf("x mod y = %f\n", (float)(x%y));
	printf("4.0 / 3 = %f\n", (float)(4.0/3));
	if (3>2){
		printf("Statement is true\n");
	} else {
		printf("Statement is false\n");
	}
	if (3<2){
                printf("Statement is true\n");
        } else {
                printf("Statement is false\n");
        }
	if (3-(2+1)){
                printf("Statement is true\n");
        } else {
                printf("Statement is false\n");
        }
	if ('d'){
                printf("Statement is true\n");
        } else {
                printf("Statement is false\n");
        }
	if (9%3){
                printf("Statement is true\n");
        } else {
                printf("Statement is false\n");
        }
	if ((3>2)-1){
                printf("Statement is true\n");
        } else {
                printf("Statement is false\n");
        }
				for(value = 0; value < 10; value++) {
					printf("Value = %d\n",value+1);
				}


return 0;
 }
