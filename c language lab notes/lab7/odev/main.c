#include <stdio.h>
#include <stdlib.h>


void liste_testi1(int liste1[5],int liste2[5]){//ayrıklık testi
	
	int ayni =0;
	
	for (int i = 0;i<5;i++){
		for (int a = 0;a<5;a++){
			if(liste1[i]==liste2[a]){
				ayni++;
			}
		}
	}
	if(ayni!=0){
		printf("listeler ayrik degil\n");
	}
	else{
		printf("listeler ayrik\n");
	}
}

void liste_testi2(int liste1[5],int liste2[5]){ // aynı olanların sayısını bulma
	
	
	int ayni =0;
	
	for (int i = 0;i<5;i++){
		for (int a = 0;a<5;a++){
			if(liste1[i]==liste2[a]){
				ayni++;
			}
		}
	}
	if (ayni == 0){
		printf("ayni olan sayilarin sayisi : %d\nfarkli olanlarin sayisi 0\n",ayni);
	}
	else{
		printf("ayni olan sayilarin sayisi : %d\nfarkli olanlarin sayisi %d\n",ayni,5-ayni);
	}
	
	
	
}


int main() {
	int liste1[5]={1,2,3,4,5};
	int liste2[5]={1,2,3,4,5};
	
	liste_testi1(liste1,liste2);
	liste_testi2(liste1,liste2);
	
}
	