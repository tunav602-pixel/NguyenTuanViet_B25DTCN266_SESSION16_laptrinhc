#include <stdio.h>
#include <string.h>

int main( ){
	char str[100];
	int count = 0;
	int i;
	printf("Nhap chuoi ki tu: ");
	fgets(str, sizeof(str),stdin);
	
	str[strcspn(str,"\n")] = '\0';
	
	for (int i = 0 ; str[i] != '\0';i++){
		count++;
	}
	printf("So ki tu trong chuoi la: %d",count);
	
	
} 