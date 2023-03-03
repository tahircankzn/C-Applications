#include <stdio.h>
#include <stdlib.h>

void mission1(){
	int star = 1;
	int layer = 10;
	
	
	
	
	
	for (int v = 1;v<=2;v++){
	
	
		for (int i = 0;i<layer;i++){
		
			for (int b=0;b<star;b++){
				printf("*");
			}
			printf("\n");
			star++;
			
}
	
		star = 1;
		layer = 10;
}
}
void mission2(){
	
	int star = 0;
	int layer = 10;
	
	
	for (int i = 0;i<layer;i++){
		
			for (int b=0;b<star;b++){
				printf("*");
			}
			printf("\n");
			star++;
			
}
	star = 10;
	layer = 10;
	for (int i = 0;i<layer;i++){
		
			for (int b=0;b<star;b++){
				printf("*");
			}
			printf("\n");
			star--;
			
}
	
	
	
	
}
int main() {
	
	mission1();
	mission2();
	
}
