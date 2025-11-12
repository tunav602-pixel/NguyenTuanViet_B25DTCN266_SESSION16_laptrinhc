#include <stdio.h>
#include <string.h>

int main( ){
	char string[100];
	fgets(string, sizeof(string), stdin);
	
	printf("Chuoi cua ban da nhap la:%s\n",string);
}