#include <stdio.h>
#include <conio.h>
#include <string.h>

	// enter yapınca yazdırır getchar() verisini

	// enter yapmadan girilen getche() verisi yazdırır

	/*
	    getchar(): Girilen karakteri okuma işlemi için ENTER tuşuna basılması gerekir.

		getche(): Karakter girilir girilmez okuma işlemi gerçekleşir.

		getch(): getche() fonksiyonundan tek farkı girilen karakterin ekrana yazılmamasıdır.
	
	*/
////////////////////////////////////////////
void tkm2(){
	char name[20];
	int choise;
	printf("tas kagıt makas\n adınız : ");
	scanf("%s",&name);
	printf("tas > 1\nkagıt > 2\nmakas > 3\n");
	printf("             [%s]              [friday]\n",name);
	printf("-------------------yapim asamasında-----------\n");
	
	
	
	
	
}

////////////////////////////////////////////

void enigma(){
	
	
	int k = 1;
	
	char text[20];
	char key1[10];
	char key2[10];
	int len = -1;
	int lenkey = -1;
	printf("sifrelemek icin metin giriniz : ");
	scanf("%s",&text);
	printf("key1 i giriniz : ");
	scanf("%s",&key1);
	printf("key2 i giriniz : ");
	scanf("%s",&key2);
	
	for(int i = 0;text[i]!='\0';i++){
		len++;
	}
	for(int i = 0;key1[i]!='\0';i++){
		lenkey++;
	}
	int i_text = 0;
	int i_key = 0;
	int kontrol = 0;
	
	
	int key3[k];
	int key3kont = -1;
	
	
	for (int i = 0;i<=len;i++){
		for(int i = 0;i<=lenkey;i++){
			if(text[i_text]==key1[i_key]){
				printf("%c",key2[i_key]);
				i_key++;
				i_text++;
				kontrol++;
			
				key3[key3kont] = i_text-1;
				key3kont++;
				k++;
				
				
				
			}
			else if (text[i_text]!=key1[i_key]){
			     	
			     	if(kontrol>=len+1){
			     		break;
			     	}
			     	else{
			     	printf("%c",text[i_text]);
			     	i_text++;
			     	kontrol++;
			     	}
		      	}
			
		}
	}
	int inti=0;
	printf("\n");
	printf("%d\n",key3kont);
	for(int i = 0;i<key3kont;i++){
		printf("%d ",key3[inti]);
		inti++;
	}
	printf("\n");

	
}


////////////////////////////////////////////
void new_text(){
	char a[20];
	int boyut=-2;
	
	char b[50];
	printf("Text : ");
	fgets(a,sizeof(a),stdin);
	
	//printf("text is %s\n",a);
	
	puts(a);
	
	for(int i = 0;a[i] != '\0';i++){
		boyut++;
	}
	//printf("%d\n",boyut);
	
	int d = 0;
	for (int i = boyut;i >=0;i--){
		
		b[d] = a[i];
		d++;
	}
	printf("> %s\n",b);
	}
	
/*
////////////////////////////////////////////
void market(){
	printf("------------------------------------------------------------");
	char kullanici[50];
	char kullanici2[50];
	printf("-------------------------CIA MARKET-------------------------\n");
	printf("Kullanıcı adiniz : ");
	scanf("%s",&kullanici);
	printf("Sifreniz : ");
	scanf("%s",&kullanici2);
	
	int secenek;
	printf("-------------------CIA Markete Hosgeldiniz------------------\n[%s]\nBakiye sorgulaması icin --> 1\nUrunleri gormek icin --> 2\nVIP Market için --> 3\nCikis yapmak icin --> 4\n",kullanici);
	printf("------------------------------------------------------------");
	
	int para = 9999999;
	int stop = 1;
	int roket_miktari=7;
	int s400=24;
	int ibrahim=0;
	while (stop == 1){
		printf("Seciminizi giriniz : ");
    	scanf("%d",&secenek);
		switch (secenek){
	       
	       	case 1:
	       		printf("------------------------------------------------------------");
	       		printf("Bakiyeniz : %d €\n",para);					printf("------------------------------------------------------------\n");
	       		
	       		
	       		break;
	       	case 2:
	       		char chose1[6];
	       		int kod;
	       		printf("------------------------------------------------------------");
	       		printf("                    [stokda]         [ucret]\n");
	       		printf("1- Roket atar         [%d]            24688 €\n2- S400              [%d]            789998€\n",roket_miktari,s400);
	       		printf("------------------------------------------------------------\n");
	       		printf("urun satın almak istermisiniz [y]  yada [n] : ");
	       		scanf("%s",&chose1);
	       		
	       		
	       		
	       		
	       		if (chose1[0]=='n'){
	       			break;
	       		}
	       		else if(chose1[0]=='y'){
	       			printf("urun kodunu giriniz : ");
	       			scanf("%d",&kod);
	       			if (kod==1){
	       				if(roket_miktari == 0){
	       					
	       					printf("stokda yok\n");
	       					
	       				}
	       				else{
	       					printf("urun hazırlanıyor\n");
	       					roket_miktari--;
	       					para = para  - 24688;
	       					
	       				}
	       				
	       			}
	       			else if(kod==2){
	       				if(s400==0){
	       					printf("stokda yok\n");
	       					
	       				}
	       				else{
	       					printf("® S400 Starship ile konumunuza dogru yola cıktı\n");
	       					s400--;
	       					para = para - 789998;
	       					
	       				}
	       				
	       			}
	       			
	       		}
	       		
	       		printf("-------------------CIA Markete Hosgeldiniz------------------\n[%s]\nBakiye sorgulaması icin --> 1\nUrunleri gormek icin --> 2\nVIP Market için --> 3\nCikis yapmak icin --> 4\n",kullanici);
	printf("------------------------------------------------------------");
	       		break;
	       		
	       		
	       	case 3:
	       		int vip,chose;
	       		char adres[60];
	       		printf("------------------------------------------------------------");
	       		printf("1 - Joe Biden [Henüz kacirilmadi]\n2 - Elon Musk [Mevcut] [3097 €]\n");
	       		printf("Satin almak icin --> 1\nCikis yapmak icin --> 2\nSeciminiz : ");
	       		scanf("%d",&vip);
	       		if (vip==1){
	       			printf("Almak istegniz urunun numarasini giriniz : \n");
	       			scanf("%d",&chose);
	       			printf("adres bilgisini giriniz : ");
	       			scanf("%s",adres);
	       			if (chose==2){ 
	       			para-=3097;
	       			
	       			}
	       			printf("siparisiniz hazirlaniyor\n");
	       		}
	       		else if (vip == 2){
	       			break;
	       		}
	       		
	       		printf("------------------------------------------------------------\n");
	       		break;
	       	case 4:	
	       		printf("------------------------------------------------------------\n");
	       		printf("Cikis Yapildi\n");
	       		printf("------------------------------------------------------------\n");
	       		printf("> Calculator --> 1\n> Faktoriyel --> 2\n> DNA --> 3\n> CIA Market --> 4\n> Metin Ters Cevirme --> 5\n> Enigma --> 6\n> tkm2 --> 7\n");
	       		stop++;
				}
	}
	
}
*/
////////////////////////////////////////////
void dna(){
	char chain[20];
	int chain_lenght = -1;
	printf("please enter the chain of dna : \n");
	
	scanf("%29s",&chain);
	
	
	
	for(int i = 0;chain[i]!='\0';i++){
		chain_lenght++;
	}
	//printf("%d\n",chain_lenght);
	
	int a1 = 0;
	for (int a = 0; a<=chain_lenght;a++){
		if (chain[a1]=='A'){
			printf("T");}
		else if (chain[a1]=='T'){
			printf("A");}
		else if (chain[a1]=='G'){
			printf("C");}
		else if (chain[a1]=='C'){
			printf("G");}
		a1++;
		
	}
	printf("\n");
	
}

////////////////////////////////////////////

void friday()
{
	int i = 5;
	char a[20];
	
	while(i==5){
		gets(a);
		if(strcmp(a,"friday")==0){i++;}
	}
	char emir[20];
	int number1, number2;

	printf("Welcome back Tahir Can Kozan\n");
	printf("╔══╗░░░░╔╗░░╔╗░░░░░░░░\n║══╣╔╦═╗╠╣╔═╝║╔══╗╔╗╔╗\n║╔═╝║╔═╝║║║╔╗║║╔╗║║╚╝║\n╚╝░░╚╝░░╚╝╚══╝╚═╩╝╚═╗║\n░░░░░░░░░░░░░░░░░░░░╚╝\n");
	printf("> Exit --> 0\n> Calculator --> 1\n> Faktoriyel --> 2\n> DNA --> 3\n> CIA Market --> 4\n> Metin Ters Cevirme --> 5\n> Enigma --> 6\n> tkm2 --> 7\n");

	printf("What do you want -->");
	while(true){
	printf("> ");
	
	gets(emir);

	if (strcmp(emir,"1")==0)
	{
		char islem;

		printf("> Toplama --> +\n> Cıkarma --> -\n> Carpma --> *\n> Bolme --> /\n");

		printf("> ");

		scanf("%d", &number1);
		
		scanf("%c", &islem);
		
		scanf("%d", &number2);

		if (islem == '+')
		{
			int result = number1 + number2;

			printf("sonuc = %d\n", result);
		}

		else if (islem == '-')
		{
			int result = number1 - number2;

			printf("sonuc %d\n", result);
		}
		else if (islem == '*')
		{
			int result = number1 * number2;
			printf("sonuc %d\n", result);
		}
		else if (islem == '/')
		{
			int result = number1 / number2;
			printf("sonuc %d\n", result);
		}
	}
	else if (strcmp(emir,"2")==0){               	  	   
		int number;
		int result = 1;
		int a = 0;
		int len = 0;
		printf("bir sayı giriniz : ");	
		scanf("%d",&number);		
		for(int i =number;i > 0;i--){
			result = result * number;
			number--;
		}
		printf("%d\n",result);
	}
	else if (strcmp(emir,"3") == 0){
		dna();  }
	else if (strcmp(emir,"0")==0){
		break;}
	else if (strcmp(emir,"naber")==0 || strcmp(emir,"nasılsın")==0){
		printf("[Friday] : Selam patron\n");}
	else if (strcmp(emir,"4")==0){
		//market();
		}
	else if (strcmp(emir,"5")== 0){
		new_text();}
	else if(strcmp(emir,"6")==0){
		enigma();}
	else if(strcmp(emir,"7")==0){
		tkm2();}
	
	}
	
	}


////////////////////////////////////////////
int main()
{
	friday();

}
