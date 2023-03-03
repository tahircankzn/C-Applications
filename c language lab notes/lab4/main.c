#include <stdio.h>
#include <stdlib.h>

void star(){
	int layer = 5;
	int i = 0;
	
	int space = layer -1;
	int s = 0;
	
	int star = 1;
	int star_len = 0;
	
	for (;i<=layer;i++){
		for (;s<=space;s++){
			printf(" ");
		}
		for (;star_len<star;star_len++){
			printf("*");
		}
		star++;
		space--;
		printf("\n");
	}
	
}

void cift(){
	int i;
	int total = 0;
	for(i=1;i<=50;i++){
		if(i%2 == 0){
			total = total + i;
		}
	}
	printf("%d",total);
}

int main() {
	
	
	star();
	
	
	
	
	
}