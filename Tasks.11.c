#include <stdio.h>

int char_index(const char* str, char ch){
	if(*str == '\0'){
		return -1;
	}
	if(*str == ch){
		return 0; 
	}
	int index = char_index(str+1,ch);
	
	if(index == -1){
		return -1;
	}

	return index + 1;
}


int main(){
	char str[] = "Hello";
	char ch = 'l';
    printf("Char index is  %d\n", char_index(str,ch));

	return 0;
}     
