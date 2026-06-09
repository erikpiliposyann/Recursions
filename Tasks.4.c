#include <stdio.h>

void print0_to_n(int n){
	if(n == 0){
		printf("0,");
		return;
	}	

	print0_to_n(n-1);
	printf("%d,", n);
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	print0_to_n(n);
	printf("\n");

	return 0;
} 
