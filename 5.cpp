#include <stdio.h>
#include <string.h>

int main ( ){
	char str[100];
	int count = 0;
	int i;
	printf("Nhap chuoi:");
	fgets(str,sizeof(str),stdin);
	
	//strcspn = xoa ki tu
	str[strcspn(str,"\n")] = '\0';
	
	for (int i = 0 ; i<strlen(str); i++){
		if(i==0 && str[i] != ' '){
		count++;
	}else if(str[i] !=' ' && str[i-1] == ' '){
		count++;
	}
	}
	printf("So tu trong chuoi la:%d",count);
	
	
}