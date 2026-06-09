#include <stdio.h>

void print_arr_elem(int *arr,int n){
	if(n == 0){
		return;
	}
	printf("%d ", *arr);

	print_arr_elem(++arr,n-1);
}

int main(){
	int arr[5] = {1,2,3,4,5};
	print_arr_elem(arr,5);
	printf("\n");
	return 0;
}
