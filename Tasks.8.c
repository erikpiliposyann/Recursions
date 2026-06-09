#include <stdio.h>

void binary_of_elem(int n){
	if(n == 0){
		printf("0");
		return;
	}
	if(n == 1){
		printf("1");
		return;
	}
	binary_of_elem(n/2);
	printf("%d",n % 2);
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	binary_of_elem(n);
	return 0;
}
