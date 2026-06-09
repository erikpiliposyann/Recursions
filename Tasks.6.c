#include <stdio.h>

void print_arr_elem(int *arr,int n){
	if(n == 0){
		return;
	}
	print_arr_elem(arr+1,n-1);
printf("%d ", *arr);
}

int main(){
	int arr[5] = {1,2,3,4,5};
	print_arr_elem(arr,5);
	printf("\n");
	return 0;
}
