#include <stdio.h>
#include <string.h>

int main( ){
	char str[100];
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str), stdin);
	
	str[strcspn(str,"\n")] = '\0';
	
	for(int i = 0 ; str[i] != '\0';i++ ){
	   if(str[i] !=' '){
	   	count++;
	   }else if(str[i] == ' '){
	   	count1++;
	   }else{
	   	count2++;
	   }
}
    printf("So chu cai:%d\n",count);
    printf("So khoang trang:%d\n",count1);
    printf("So ki tu dac biet:%d",count2);
}