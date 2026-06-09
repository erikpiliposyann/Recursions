#include <stdio.h>

char first_big_let(const char* str){
	if(*str == '\0'){
		return 0;	
	}
	if(*str >= 65 && *str <= 90){
		return *str;
	}
	return first_big_let(str+1);
}

int main(){
	char str[100];

    printf("Input string: ");
    scanf("%s", str);

    char result = first_big_let(str);

    if(result == 0){
        printf("There is no uppercase letter\n");
    } else {
        printf("First uppercase letter: %c\n", result);
    }



	return 0;
}
