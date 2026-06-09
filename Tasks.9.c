#include <stdio.h>

int min_element(int *arr, int n){
    if(n == 1){
        return arr[0];
    }

    min_element(arr + 1, n - 1);

    if(arr[0] > arr[1]){
        arr[0] = arr[1];
    }

    return arr[0];
}

int main(){
	int arr[5] = {2,3,0,9,5};
	printf("%d\n",min_element(arr,5));
	return 0;
}
