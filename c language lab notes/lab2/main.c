#include <stdio.h>
#include <stdlib.h>

void veri_alma(){
	int sayi1,sayi2;
	printf("birinci sayi giriniz : ");
	scanf("%d",&sayi1);	
	printf("ikinci sayi giriniz : ");
	scanf("%d",&sayi2);
	printf("--------------------------\n");
	printf("girilen birinci sayi : %d\ngirilen  ikinci sayi : %d",sayi1,sayi2);
	
}
////////////////////////////////////////////////////////////////////////////////////
void kosul_ifadeleri(){
	char islem;
	int sayi1,sayi2;
	int sonuc;
	
	printf("islemi giriniz : ");
	scanf("%c",&islem);
	
	
	printf("birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	
	if(islem == '+'){
		sonuc = sayi1 + sayi2;
		printf("sonuc : %d\n",sonuc);
	}
	else if(islem == '-'){
		sonuc = sayi1 - sayi2;
		printf("sonuc : %d\n",sonuc);
	}
	else if(islem == '*'){
		sonuc = sayi1 * sayi2;
		printf("sonuc : %d\n",sonuc);
	}
	else if(islem == '/'){
		sonuc = sayi1 / sayi2;
		printf("sonuc : %d\n",sonuc);
	}
	
	
}
///////////////////////////////////////////////////////////////////////////
int main() {

	kosul_ifadeleri();
	return 0;

}