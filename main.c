#include <stdio.h>
#include <string.h>

int test(char* str1,char* str2);

char* print();

int main(){
	
	printf("%d",test("Hello World!!", print()));

	return 0;
}


int test(char* str1,char* str2){
	int Case = 0;
	if (strcmp(str1,str2)) Case = 1;

	return Case;
	
}

char* print(){
	printf("Hello World!!");
}