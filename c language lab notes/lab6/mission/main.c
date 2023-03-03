#include <stdio.h>
#include <stdlib.h>
#include "usAlma3.h"

int usAlma1(int taban,int us){
	
	int result = 1;
	
	for(int i = 1;i<=us;i++){
		result = result * taban;
	}
	
	return result;
	
}

int recursive(int taban,int us){
	
	int result = 1; 
	if (us>=1){
		result = result  *  taban  * recursive(taban,us - 1);
		
	}
	
	else{
		return 1;
	}
	
	
}


int main() {
	int us;
	int taban;
	printf("taban : ");
	scanf("%d",&us);
	printf("taban : ");
	scanf("%d",&taban);
	
	
	//printf("%d",usAlma1(taban,us));
	
	/*
	int result = 1;
	int us = 3;
	int taban = 2;
	for(int i = 1;i<=us;i++){
		result = result * taban;
	}
	printf("%d",result);
	*/
	
	
	//printf("%d",usAlma3(2,4));
	printf("%d",recursive(2,4));
}