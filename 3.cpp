#include <stdio.h>
#include <string.h>

int main ( ){
     char str[100] =  "Xin chao";
     
     printf("Chuoi ban dau la:%s",str);
     
     int length = strlen(str);
     
     printf("Chuoi dao nguoc la:\n");
     for(int i = length -1 ; i>=0 ; i--){
     	printf("%c",str[i]);
	 }
}