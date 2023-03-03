#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


	// enter yapınca yazdırır getchar() verisini

	// enter yapmadan girilen getche() verisi yazdırır

	/*
	    getchar(): Girilen karakteri okuma işlemi için ENTER tuşuna basılması gerekir.

		getche(): Karakter girilir girilmez okuma işlemi gerçekleşir.

		getch(): getche() fonksiyonundan tek farkı girilen karakterin ekrana yazılmamasıdır.
	
	*/
void mert(){
	
	printf("alan --> a\ncevre --> c\nexit --> e\n");
	
while (1){
	int alan,cevre;
	char a;
	alan = 5;
	cevre = 58;
	
	printf(">");
	scanf("%c",&a);
	if (a=='a'){
		printf("alan %d\n",alan);}
		
	else if(a=='c'){
		printf("cevre %d\n",cevre);}
		
	else if (a=='e'){
		break;	}
	}
}


void root(){
	int a,b,c;
	float x1,x2,delta;
	printf("ax^2 + bx + c\n");
	printf("a :");
	scanf("%d",&a);
	
	printf("b :");
	scanf("%d",&b);
	
	printf("c :");
	scanf("%d",&c);
	
	delta = (b*b) - (4*a*c);
	printf("Delta : %f\n",delta);
	if (delta >=0){
	x1 = (-b + sqrt(delta)) / (2*a);
	
	x2 = (-b - sqrt(delta)) / (2*a);
	
	printf("1.kok = %.2f\n2.kol = %.2f\n",x1,x2);
	}
	else{
		printf("reel kok yok\n");
	}
	
	
	
}
void matris(){
	int sayi;
	int list[3][3];
	
	
	for(int i = 0;i<=2;i++){
		for(int a = 0;a<=2;a++){
			printf("> ");
			scanf("%d",&sayi);
			list[i][a]=sayi;
			
		}
		
	}
	
	for(int i = 0;i<=2;i++){
		for(int a = 0;a<=2;a++){
			
			printf("%d",list[i][a]);
			
			
		}
		printf("\n");
		
	}
	
	printf("\n");
	
}
void kok3(){
	int sayi;
	printf("kup koku alinacak sayi gir : ");
	scanf("%d",&sayi);
	
	for(int i=0;i<=sayi;i++){
		if(i*i*i==sayi){
			printf("%d\n",i);
		}
	}
	
	
}
void kok(){
	int sayi;
	printf("kare koku alinacak sayi gir : ");
	scanf("%d",&sayi);
	
	for(int i=0;i<=sayi;i++){
		if(i*i==sayi){
			printf("%d\n",i);
		}
	}

	}
/////////////////////////////////////////////
void fibonacci(){
	int sayi ;
	int result = 0;
	printf("sayi giriniz : ");
	scanf("%d",&sayi);
	int a = 1;
	int b = 1;
	printf("1\n1\n");
	for(int fake = 1;fake<=sayi;fake++){
		result = a+b;
		printf("%d\n",result);
		a = b;
		b = result;
	}
}

////////////////////////////////////////////
////// TKM
void win(){
	printf("                       X\n");
}

void lost(){
	printf("                                             X\n");
}
void wl(){
	printf("kimse kazanamadi\n");
}
void tkm2(){
	char name[20];
	int choise;
	int friday;
	int player_winner = 0;
	int friday_winner = 0;
	int scor;
	
	printf("tas kagit makas\nadiniz : ");
	scanf("%s",&name);
	printf("en yuksek scoru seciniz : ");
	scanf("%d",&scor);
	printf("tas > 1\nkagit > 2\nmakas > 3\n");
	printf("                      [%s]              [friday]\n",name);
	
	while(1){
	if (player_winner==scor || friday_winner==scor){
		if(player_winner==scor){
			printf("kazanan %s\n",name);
			break;}
		else if(friday_winner==scor){
			printf("kazanan friday\n");
			break;}
	}
	printf(">");
	scanf("%d",&choise);
	friday = rand() %3 +1;// 1 den 3 e kadar sayıları rasgele seçiyor
	
	////// oyuncu taş seçerse
	if(choise == 1){
		if (friday == 1){
	        wl();}
	    else if(friday == 2){
	    	friday_winner++;
	    	lost();}
	    else if(friday == 3){
	    	player_winner++;
	    	win();}	
	    	}
	else if(choise == 2){
	    if (friday == 2){
	        wl();}
	    else if(friday == 3){
	    	friday_winner++;
	    	lost();}
	    else if(friday == 1){
	    	player_winner++;
	    	win();}	
	    }
	else if(choise == 3){
	    if (friday == 3){
	        wl();}
	    else if(friday == 1){
	    	friday_winner++;
	    	lost();}
	    else if(friday == 2){
	    	player_winner++;
	    	win();}	
	    }
	}
}

////////////////////////////////////////////

void enigma(){
	
	
	int k = 1;
	
	char text[10];
	char key1[5];
	char key2[5];
	int len = -1;
	int lenkey = 0;
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
	
	int indexsize=0;
	int keysize=0;
	int textsize=0;
	for(int i = 0;text[i]!='\0';i++){
		for(int i = 0;key1[i]!='\0';i++){
			if(text[textsize]==key1[keysize]){
				printf("%c %c\n",text[textsize],key1[keysize]);
				indexsize++;
				keysize++;
			}
		textsize++;
     	}
	}
	printf("%d   index sayisi\n",indexsize);
	
	
	
	
	int i_text = 0;
	int i_key = 0;
	int kontrol = 0;
	
	
	int key3[20];
	int key3kont = 0;
	
	
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
	printf("%d\n",k);
	for(int i = 0;i<k;i++){
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
	

////////////////////////////////////////////
/*
void market(){
	printf("------------------------------------------------------------");
	char kullanici[50];
	char kullanici2[50];
	printf("-------------------------CIA MARKET-------------------------\n");
	printf("Kullanici adiniz : ");
	scanf("%s",&kullanici);
	printf("Sifreniz : ");
	scanf("%s",&kullanici2);

	int secenek;
	printf("-------------------CIA Markete Hosgeldiniz------------------\n[%s]\nBakiye sorgulamasi icin --> 1\nUrunleri gormek icin --> 2\nVIP Market için --> 3\nCikis yapmak icin --> 4\n",kullanici);
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
	       		printf("urun satin almak istermisiniz [y]  yada [n] : ");
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
	       					printf("urun hazirlaniyor\n");
	       					roket_miktari--;
	       					para = para  - 24688;
	       					
	       				}
	       				
	       			}
	       			else if(kod==2){
	       				if(s400==0){
	       					printf("stokda yok\n");
	       					
	       				}
	       				else{
	       					printf("® S400 Starship ile konumunuza dogru yola cikti\n");
	       					s400--;
	       					para = para - 789998;
	       					
	       				}
	       				
	       			}
	       			
	       		}
	       		
	       		printf("-------------------CIA Markete Hosgeldiniz------------------\n[%s]\nBakiye sorgulamasi icin --> 1\nUrunleri gormek icin --> 2\nVIP Market için --> 3\nCikis yapmak icin --> 4\n",kullanici);
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
	       		printf("> Calculator --> 1\n> Faktoriyel --> 2\n> DNA --> 3\n> CIA Market --> 4\n> Metin Ters Cevirme --> 5\n> Enigma --> 6\n> tkm2 --> 7\n> fibonacci --> 8\n> matris --> 9\n> kare kok --> 10\n> kup kok --> 11\n> kok bulma 2.dereceden deklem --> 12\n");
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
	/*
	while(i==5){
		gets(a);
		if(strcmp(a,"friday")==0){i++;}
	}
	*/
	char emir;
	int number1, number2;
	
	printf("Welcome back Tahir Can Kozan\n");
	//printf("╔══╗░░░░╔╗░░╔╗░░░░░░░░\n║══╣╔╦═╗╠╣╔═╝║╔══╗╔╗╔╗\n║╔═╝║╔═╝║║║╔╗║║╔╗║║╚╝║\n╚╝░░╚╝░░╚╝╚══╝╚═╩╝╚═╗║\n░░░░░░░░░░░░░░░░░░░░╚╝\n");
	
	
	printf("> Exit --> 0\n> Calculator --> 1\n> Faktoriyel --> 2\n> DNA --> 3\n> CIA Market --> 4\n> Metin Ters Cevirme --> 5\n> Enigma --> 6\n> tkm2 --> 7\n> fibonacci --> 8\n> matris --> 9\n> kare kok --> 10\n> kup kok --> 11\n> kok bulma 2.dereceden deklem --> 12\n");
	
	
	printf("What do you want -->");
	
	while(1){
	printf("> ");
	
	
	
	scanf("%d",&emir);
	

	if (emir == 1)
	{
		char islem;

		printf("> Toplama --> +\n> Cikarma --> -\n> Carpma --> *\n> Bolme --> /\n");

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
	else if (emir == 2){               	  
 	   int number;
		int result = 1;
		int a = 0;
		int len = 0;
		printf("bir sayi giriniz : ");	
		scanf("%d",&number);		
		for(int i =number;i > 0;i--){
			result = result * number;
			number--;
		}
		printf("%d\n",result);
	}
	else if (emir == 3){
		dna();  }
	else if (emir == 0){
		break;}
	else if (emir == 4){
		printf("kapali");}
	else if (emir ==5){
		new_text();}
	else if(emir == 6){
		enigma();}
	else if(emir == 7){
		tkm2();}
	else if(emir == 8){
		fibonacci();}
	else if(emir == 9){
		matris();}
	else if(emir == 10){
		kok();}
	else if(emir == 11){
		kok3();}
	else if(emir == 12){
		root();}
	
	}
	
	}


////////////////////////////////////////////
int main()
{
	//kok3();
	friday();
//	market();
//	enigma();
	//tkm2();
//	fibonacci();
//	matris();
	//root();
	//paralel();
	//mert();
}