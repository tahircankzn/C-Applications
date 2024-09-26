#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265   // global olarak pi degerini tanımladım

// fonksiyon tanimlama kısmı
float kosinus(int sayi1);
float sinus(int sayi1);
float tanjant(int sayi1);
float usAlma(int sayi1,int sayi2);
int coklu_carpma(int sayi1);
int coklu_toplama(int sayi1);
int kalan(int sayi1,int sayi2);
int topla(int sayi1,int sayi2);
int cikarma(int sayi1,int sayi2); 
int bol(int sayi1,int sayi2);
int carpma(int sayi1,int sayi2);
int mutlakDeger(int sayi1);
int maksimum(int sayi1,int sayi2);
int minimum(int sayi1,int sayi2);
void menu();


/////////////////////////////////////////// MAİN FONKSİYONU ////////////////////////////////////

int main() {
	
	int choice,sayi1,sayi2; // ugulamada kullanılacak 3 temel değişken  - seçenek - 1. sayi - 2.sayi -
	int menu_counter = 0; // ilk açılıştan sonra kullanıcıya menuyu tekrar ekrana yazdırabilmesi için bilgilendirme vermesini sağladım
	int durdurucu = 1;      // döngüyü çalıştırmak için True değerine eşit olan bir değer tanımlandı 
							// eğer döngü içinde bu değer "0" ' a eşitlenirse döngü durur
	
	menu();  // uygulama arayüzünü bir fonksiyon kullanarak cağırdım
	
	do{
		if (menu_counter != 0)
		{
			// ilk açılışta menu_counter 0 olduğu için bu kısım çalışmayacak , kullanıcı işlem yaptıktan sonra bu değişken 1 olucak ve menüyü tekrar erkana getirebilmesi için bilgilendirme mesajı ekrana yazılacak
			printf("Menu'yu acmak icin 15 girin\n");
		}
		printf("\nislem numarasini giriniz : \n");
		printf("> ");
		scanf("%d",&choice);
		switch (choice){
			
			// TOPLAMA İŞLEMİ
			case 1 :
				{
					printf("toplanicak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",topla(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// ÇIKARMA İŞLEMİ
			case 2 :
				{
					printf("cikarilacak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",cikarma(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// ÇARPMA İŞLEMİ
			case 3 :
				{
					printf("carpilacak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2.sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",carpma(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// BÖLME İŞLEMİ 
			case 4 :
				{
					printf("bolunen sayi : ");
					scanf("%d",&sayi1);
					printf("bolen sayi : ");
					scanf("%d",&sayi2);
					if(sayi2==0)
					{
						printf("tanimsiz durum\n");
						break;
					}
					else
					{
						printf("sonuc : %d\n",bol(sayi1,sayi2));
						printf("\n");
						break;
					}
					
				}
					
			// MUTLAK DEĞER HESABI
			case 5 :
				{
					printf("mutlak degerini bulmak istediginiz sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %d",mutlakDeger(sayi1));
					printf("\n");
					break;
				}
				
			// MAKSİMUM DEĞERİ BULMA
			case 6 :
				{
					printf("Maksimum deger bulma\n");
					printf("1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",maksimum(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// MİNİMUM DEĞERİ BULMA
			case 7 :
				{	
					printf("Minimum deger bulma\n");
					printf("1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",minimum(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// KALAN BULMA
			case 8 : 
				{
					printf("bolunen sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("bolen sayiyi giriniz : ");
					scanf("%d",&sayi2);
					
					if(sayi2 != 0)
					{
						printf("sonuc : %d\n",kalan(sayi1,sayi2));
						break;
					}
					
					else
					{
						printf("tanimsiz durum\n");
						break;
					}
				}
					
			// ÜSLÜ SAYİ HESABI
			case 9 : 
				{
					printf("ussu alinacak sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("ussu giriniz : ");
					scanf("%d",&sayi2);
					printf("sonuc : %.2f\n",usAlma(sayi1,sayi2));  // float değerin karakter sayısı kısıtlandı ".2f" ile
					break;
				}
				
			// ÇOKLU TOPLAMA İŞLEMİ
			case 10 : 
				{
					printf("coklu toplama icin veri sayinizi giriniz : ");
					scanf("%d",&sayi1); // sayi1 değişkeni veri sayısı için kullanıldı
					printf("sonuc : %d\n",coklu_toplama(sayi1));
					break;
				}
				
			// ÇOKLU ÇARPMA İŞLEMİ
			case 11 : 
				{
					printf("coklu carpma icin veri sayinizi giriniz : ");
					scanf("%d",&sayi2); // sayi1 değişkeni veri sayısı için kullanıldı
					printf("sonuc : %d\n",coklu_carpma(sayi2));
					break;
				}
				
			// TANJANT BULMA
			case 12 : 
				{
					printf("tanjant hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					if(sayi1 % 90 != 0) // KOSİNUS FOKSİYONU KULLANILARAK DEĞERİN 0 OLMA DURUMU İNCELENDİ 
					{						   // ÇÜNKÜ KOSİNUS 0 İSE TANJANT TANIMSIZDIR 
					
											   
						printf("sonuc : %.2f\n",tanjant(sayi1));
						break;
					}
					
					else
					{
						printf("tanimsiz durum\n");
						break;
					}
					
				}
				
			// SİNUS BULMA
			case 13 : 
				{
					printf("sinus hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %.2f\n",sinus(sayi1));
					break;
				}
				
			// KOSİNUS BULMA	
			case 14 : 
				{
					printf("kosinus hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %.2f\n",kosinus(sayi1));
					break;
				}
			case 15 :
				{
					menu();
					break;
				}
			// UYGULAMADAN ÇIKIŞ
			case 0 :
				{
					printf("Uygulama Kapatiliyor....\n");
					durdurucu = 0;
					break;
				}
				
			// UYGULAM İŞLEMLERİ HARİCİNDE BİR İŞLEM GİRİLİRSE UYARI MESAJI
			default:
				{
					printf("islem gecersiz\n");
					break;
				}
			
		}
		menu_counter = 1;
	
	}while(durdurucu);

}

//////////////////////////////////////////// FONKSİYON OLUŞTURMA KISMI ///////////////////////////////////////

// KOSİNUS FONKSİYONU
float kosinus(int sayi1)  // sonuç float değer çıkabileceği düşünülerek bu şekilde tanımlandı
{

	float sayi = (PI/180)*sayi1;	
	return cos(sayi);
	
}

// SİNUS FONKSİYONU
float sinus(int sayi1)   // sonuç float değer çıkabileceği düşünülerek bu şekilde tanımlandı
{
	
	float sayi = (PI/180)*sayi1;	
	return sin(sayi);
}

// TANJANT FONKSİYONU
float tanjant(int sayi1) // sonuç float değer çıkabileceği düşünülerek bu şekilde tanımlandı
{
	
	float sayi = (PI/180)*sayi1;
	return tan(sayi);
}

// ÇOKLU TOPLAMA FONKSİYONU
int coklu_carpma(int tur) // tur değişkeni tur sayısını yani kullanıcının kaç veri ile işlem yaptığını belirtir 
{
	
	int sayi1;
	
	int result = 1;
	
	for (int i = 0;i<tur;i++){
		printf("%d. sayi : ",i+1);
		scanf("%d",&sayi1);
		result = result * sayi1;
	}
	
	return result;
}

// ÇOKLU ÇARPMA FONKSİYONU
int coklu_toplama(int tur)
{
	
	int sayi;
	int result = 0;
	
	for (int i = 0;i<tur;i++){
		printf("%d. sayi : ",i+1);
		scanf("%d",&sayi);
		result = result + sayi;
	}
	return result;
}

// ÜS ALMA FONKSİYONU
float usAlma(int taban,int us){
	
	if (us < 0)    // us negatif ise sonuç 1/x şeklinde olmalı
		{
			float result = 1;
			us = -1 * us;        // us değerei pozitif yapıldı
			for(int i = 1;i<=us;i++)
			{
				result = result * taban;
			}
			return 1/result;	// us değeri negatif olduğu için 1/x şeklinde bir çıktı döndürülmesi sağlandı
		}
	
	else if(us == 0)   // us sıfıra eşit ise sonuç "1" olmalı
		{
			return 1;	
		}
	
	else      // us değeri pozitif ise normal işlem yapılır
		{
			float result = 1;
		
			for(int i = 1;i<=us;i++)
				{
					result = result * taban;
				}
	
			return result;	
		}
	
	
}

// KALAN BULMA FONKSİYONU
int kalan(int sayi1,int sayi2){ 
	
	return sayi1%sayi2;
}

// TOPLAMA FONKSİYONU
int topla(int sayi1,int sayi2){
	
	return sayi1+sayi2;
}

// ÇIKARMA FONKSİYONU
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}

// BÖLME FONKSİYONU
int bol(int sayi1,int sayi2)
{
			return sayi1/sayi2;
		
}

// ÇARPMA FONKSİYONU
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}

// MUTLAK DEĞER HESAPLAMA FONKSİYONU
int mutlakDeger(int sayi1){
	if (sayi1<0)
	{
		sayi1 = -1 * sayi1;
		return sayi1;
	}
	else
	{
		return sayi1;
	}
}

// MAKSİMUM DEĞER BULMA FONKSİYONU
int maksimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0)
	{
		return sayi2;
	}
	else
	{
		return sayi1;
	}
}

// MİNİMUM DEĞER BULMA FONKSİYONU
int minimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0)
		{
			return sayi1;
		}
	else
		{
			return sayi2;
		}
}


// MENÜ DAHA GÜZEL GÖZÜKMESİ İÇİN GÖRSELLEŞTİRİLDİ
void menu(){
	
	printf("      __        0 - Cikis\n");
	printf("     |  |        1 - Toplama islemi\n");
	printf(" ____|  |____     2 - Cikarma islemi\n");
	printf("|____    ____|     3 - Carpma islemi\n");
	printf("     |  |           4 - Bolme islemi\n");
	printf("     |__|            5 - Mutlak deger hesabi\n");
	printf("                      6 - Maksimum deger bulma\n");
	printf("- HESAP MAKINESI -     7 - Minimum deger bulma\n");
	printf("      __              8 - Kalan Bulma\n");
	printf("     |__|            9 - Us alma\n");
	printf(" ____________       10 - Coklu toplama\n");
	printf("|____________|     11 - Coklu carpma\n");
	printf("      __          12 - Tanjant hesabi\n");
	printf("     |__|        13 - Sinus Hesabi\n");
	printf("                14 - Konsinus hesabi\n\n");

}	
