#include <stdio.h>
#include <stdlib.h>

void karekok(){
	int sayi1;
	printf("kare kok\nbir sayi giriniz : ");
	scanf("%d",&sayi1);
	
	for(int i = 0;i<=sayi1;i++){
		
		if (i*i==sayi1){
			printf("%d",i);
			break;
		}
		
	}
	
	
}
int cikarma(int a,int b){
	
	
	return a-b;
}


int main() {
	//karekok();
	//printf("%d",cikarma(10,5));
}