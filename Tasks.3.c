#include <stdio.h>

void print0_to_n(int n){
	if(n == 0){
		printf("0");
		return;
	}	
	printf("%d,", n);
	print0_to_n(n-1);
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	print0_to_n(n);
	printf("\n");

	return 0;
}
