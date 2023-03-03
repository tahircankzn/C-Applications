#include <stdio.h>
#include <stdlib.h>


int topla(int sayi1,int sayi2){
	
	return sayi1+sayi2;
}
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}
int bol(int sayi1,int sayi2){
	if (sayi2 == 0){
		printf("tanimsiz durum");
	}
	else{
		return sayi1/sayi2;
	}
}
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}
int mutlakDeger(int sayi1){
	if (sayi1<0){
		sayi1 = -1 * sayi1;
		return sayi1;
	}
	else{
		return sayi1;
	}
}
int maksimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0){
		return sayi2;
	}
	else{
		return sayi1;
	}
}
int minimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0){
		return sayi1;
	}
	else{
		return sayi2;
	}
}



int main() {
	int dur = 1;
	int choice;
	
	int sayi1,sayi2;
	printf("1 - toplama\n2 - cikarma\n3 - carpma\n4 - bolme\n5 - mutlak deger\n6 - maksimum\n7 - minimum\n8 - cikis\n");
	do{
		printf("islem numarasini giriniz : \n");
		printf("> ");
		scanf("%d",&choice);
		if (choice == 1){
			printf("toplanicak degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",topla(sayi1,sayi2));
			printf("\n");
		}
		else if (choice == 2){
			printf("cikarilacak degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",cikarma(sayi1,sayi2));
			printf("\n");
		}
		else if (choice == 3){
			printf("carpilacak degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",carpma(sayi1,sayi2));
			printf("\n");
		}
		else if (choice == 4){
			printf("bolunecek degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",bol(sayi1,sayi2));
			printf("\n");
		}
		
		else if (choice == 5){
			printf("mutlak deger icin giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			
			printf("%d",mutlakDeger(sayi1));
			
			printf("\n");
		}
		else if (choice == 6){
			printf("maksimum degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",maksimum(sayi1,sayi2));
			printf("\n");
		}
		else if (choice == 7){
			printf("minimum degerleri giriniz : \nsayi1 : ");
			scanf("%d",&sayi1);
			printf("sayi2 : ");
			scanf("%d",&sayi2);
			printf("%d\n",minimum(sayi1,sayi2));
			printf("\n");
		}
		else if(choice == 8){
			break;
			printf("\n");
		}
		else if(choice>0 || choice<9){
			
			printf("islem gecersiz\n");
		}
		
		
		
		
	}while(dur != 8);
	
	
	
	
	
}