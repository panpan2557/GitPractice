#include <stdio.h>

int mul( int x, int y ){
    return x*y;
}

int div(int x, int y) {
	return x/y;
}

int add(int x ,int y){
	return x + y;
}

int subtract(int num1,  num2) {
	return num1-num2;
}

int findMax() {
	printf("Searching for Max . . .\n");
	printf("Max(mi) found at room 201 with iNont\n");
	return 201;

}

int main() {
	printf("calculator");

	printf("This test is run by Momo : \n9 - 2 = %d\n", subtract(9,2) );

    	printf(mul(1,2));

    	printf(add(2,1));

	printf("div : 5 / 5 = %d\n", div(5,5));

	printf("\n\n Momo want to findMax, so he call findMax() method\n");
	printf("findMax() = %d\n", findMax());
	


}

