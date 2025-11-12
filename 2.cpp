#include <stdio.h>

int main( ){
	char str[100] = "Xin chao";
	printf("Chuoi vua nhap la: %s\n",str);
	printf("Cac ki tu trong chuoi la: \n");
	
	for(int i = 0 ; str[i] !='\0'; i++){
		printf("%c",str[i]);
	}
	}