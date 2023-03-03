#include <stdio.h>
#include <stdlib.h>



int main() {
	int sayi1,sayi2,sayi3;
	int toplam;
	
	printf("birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	printf("ucuncu sayiyi giriniz : ");
	scanf("%d",&sayi3);
	
	toplam = sayi1 + sayi2 + sayi3;
	
	printf("%d , %d ve %d sayilarinin toplami %d\n",sayi1,sayi2,sayi3,toplam);
	
	if (toplam > 0){
		printf("sonuc pozitif");
	}
	else if (toplam < 0){
		printf("sonuc negatif");
	}
	else if (toplam == 0){
		printf("sonuc negatif veya pozitif degil");
	}
	
	
	
	
	
	return 0;
}