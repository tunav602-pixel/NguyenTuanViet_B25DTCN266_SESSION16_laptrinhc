#include <stdio.h>
#include <string.h>
//strcat =  noi chuoi
//strlen = do dai cua mang
//strcpy = sao chep chuoi va gan vao chuoi moi
//strcmp = so sanh hai chuoi => true = 0 false != 0 
//strchr = tim kiem ky tu trong chuoi


int main ( ){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str) ,stdin);
	
	char ch = 'a';
	int count = 0;
	char *ptr = str;
	
	while ((ptr = strchr(ptr,ch))!=NULL){
		count++;
		ptr++;
	}
	printf("Ki tu '%c' xuat hien %d lan trong chuoi.\n",ch,count);
}