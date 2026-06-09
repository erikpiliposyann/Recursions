#include <stdio.h>

int multiply_digits(int n){
	int digit = 0;
	if(n == 0){
		return 1;
	}
	digit = n % 10;
	n = n / 10; 
	return digit * multiply_digits(n);
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	if(n == 0){
		printf("0");
		return 0;
	}
	printf("Multiply of digits is: %i", multiply_digits(n));
	

	return 0;
}
