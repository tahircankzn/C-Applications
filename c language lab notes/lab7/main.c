#include <stdio.h>
#include <stdlib.h>
/*
int liste[10] = {1,5,6,7,4,9,6,4,5,3};
	int liste1[10];//sayı türü
	int liste2[10];//sayı adedi
	for(int i = 0;i<10;i++){
		for(int a = 0;a<10;a++){
			if()
		}
	}
*/
int main() {
	
	int liste[]={91,82,73,64,55};
	int liste2[5];
	int toplam=0;
	
	for(int i= 0; i<5;i++){
		int c = 0;
		for(int a= 0; a<i+1;a++){
			toplam = liste[a] + toplam;
			c++;
		}
		liste2[i]=toplam/(c);
		
}
	for(int i = 0;i<5;i++){
		printf("%d-",liste2[i]);
	}
	
}