#include <stdio.h>

int my_strlen(const char* str){
	if(*str == '\0'){
		return 0;
	}
	return 1 + my_strlen(str+1);

}


int main(){
	char str[] = "Hello";

    printf("Length = %d\n", my_strlen(str));

	return 0;
}
