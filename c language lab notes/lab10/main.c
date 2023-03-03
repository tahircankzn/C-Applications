#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct student{
	char name[20];
	int sinav1;
	int sinav2;
	int sinav3;
	
}s1,s2,s3,s4,s5;
enum anlikRenk  {
		hata,
		red,
		yellow,
		green
	};
	
	
void student(){
	struct student std[5];
	
	strcpy(std[0].name,"ali");
	strcpy(std[1].name,"can");
	strcpy(std[2].name,"tahir");
	strcpy(std[3].name,"kozan");
	strcpy(std[4].name,"ahmet");
	
	
	std[0].sinav1 = 20;
	std[0].sinav2 = 10;
	std[0].sinav3 = 30;
	
	
	std[1].sinav1 = 11;
	std[1].sinav2 = 20;
	std[1].sinav3 = 44;
	
	
	std[2].sinav1 = 54;
	std[2].sinav2 = 80;
	std[2].sinav3 = 45;
	
	
	std[3].sinav1 = 78;
	std[3].sinav2 = 73;
	std[3].sinav3 = 48;
	
	
	std[4].sinav1 = 20;
	std[4].sinav2 = 10;
	std[4].sinav3 = 20;
	
	for(int i = 0;i<5;i++){
		printf("\n%s:\nsinav 1 : %d\nsinav 2 : %d\nsinav 3 : %d\n",std[i].name,std[i].sinav1,std[i].sinav2,std[i].sinav3);
	}
	int top1=100,top2=100,top3=100;
	
	for(int i = 0;i<4;i++){
		
		if(std[i].sinav1 <= std[i+1].sinav1 ){
			top1 = std[i+1].sinav1;
			
		}
	}
	for(int i = 0;i<4;i++){
		
		if(std[i].sinav2 <= std[i+1].sinav2 ){
			top2 = std[i+1].sinav2;
			
		}
	}
	for(int i = 0;i<4;i++){
		
		if(std[i].sinav3 <= std[i+1].sinav3 ){
			top3 = std[i+1].sinav3;
			
		}
	}
	
	for(int i = 0;i<5;i++){
		if(std[i].sinav1 == top1){
			printf("\nsinav 1 en yuksek not alan ogrenci %s : %d\n",std[i].name,top1);
		}
	}
	for(int i = 0;i<5;i++){
		if(std[i].sinav2 == top2){
			printf("sinav 2 en yuksek not alan ogrenci %s : %d\n",std[i].name,top2);
		}
	}
	for(int i = 0;i<5;i++){
		if(std[i].sinav3 == top3){
			printf("sinav 3 en yuksek not alan ogrenci %s : %d\n",std[i].name,top3);
		}
	}
	int list[3];
	list[0] = top1;
	list[2] = top2;
	list[3] = top3;
	int best;
	for(int i = 0;i<3;i++){
		if(list[i] <= list[i+1] ){
			best = list[i+1];
			
		}
	}
	
	
		if(best == top1){
			for(int i = 0;i<5;i++){
				if(std[i].sinav1 == top1){
					printf("\nen yuksek not alan ogrenci %s ",std[i].name);
				}
	}
		}
		else if(best == top2){
			for(int i = 0;i<5;i++){
				if(std[i].sinav2 == top2){
					printf("\nen yuksek not alan ogrenci %s ",std[i].name);
				}
		}
	}
		else if(best == top3){
			for(int i = 0;i<5;i++){
				if(std[i].sinav3 == top3){
					printf("\nen yuksek not alan ogrenci %s ",std[i].name);
				}
		}
	
	}
	
}
	
void trafik(){
	
	enum anlikRenk renk;
	renk = red;
	for(int i = 0;i<10;i++){
			
			system("cls");
			if(renk == red){
				printf("Dur");
				renk = yellow;
			}
			else if(renk == yellow){
				printf("Bekle");
				renk = green;
			}
			else if(renk == green){
				printf("Gec");
				renk = red;
			}	
			Sleep(1000);
	}
	
	
}	
	
	
int main() {
	
	//trafik();
	student();
	
	
	
	
}