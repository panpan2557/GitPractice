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
    printf(add(2,1));
	// printf("The legendary of Momomomomomo");
 	// printf("naneenyjung is so cute");
	// printf("PP narak jung");
	// printf("Martin");
	// printf("The legendary of Momomomomomo");
 	// printf("naneenyjung is so cute");
	// printf("PP narak jung");
	// printf("Martin");
	// printf("My name is ChaoChao");

	printf("div : 5 / 5 = %d\n", div(5,5));

}

