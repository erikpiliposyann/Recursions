#include <stdio.h>

int sum_of_digits(int n){
	int digit = 0;
	if(n == 0){
		return 0;
	}
	digit = n % 10;
	n = n / 10;
	return digit + sum_of_digits(n);
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	printf("Sum of digits %d", sum_of_digits(n));
	return 0;
}
