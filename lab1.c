#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkNum(){
	char *input = malloc(sizeof(char)*10);
	printf("1 : Name  //  2 : Introduce  //  q : Quit  ==>  ");
	scanf("%s", input);
	int num = 0;
	if (strcmp(input,"1") == 0){
		printf("My name is Jinah Sung\n");
	
	} else {
		num = 1;
		printf("\nInput is not correct! Please do it again...\n\n");
	}
	free(input);
	return num;
}

int main(){
	while(1){
		if (checkNum() == 0) break;
	}
	return 0;
}