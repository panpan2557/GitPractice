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

int avg( int a, int b, int c ){
    return (a+b+c)/3;
}

int main() {
	printf("calculator");

	printf("This test is run by Momo : \n9 - 2 = %d\n", subtract(9,2) );

    	printf(mul(1,2));

    	printf(add(2,1));

	printf("div : 5 / 5 = %d\n", div(5,5));
    
    printf("average of 1,2,3 = %d\n", avg( 1,2,3 ));
    printf("momo");
    printf("why you");
    printf("are so");
    printf("SHORT!!!");
}

