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

int main() {
	printf("calculator");    
    printf(mul(1,2));
	printf("div : 5 / 5 = %d\n", div(5,5));
}

