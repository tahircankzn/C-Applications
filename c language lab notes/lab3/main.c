#include <stdio.h>
#include <stdlib.h>

void rakam(){
	int sayi;
	printf("rakam testi icin sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi<10&&sayi>=0){
		printf("girilen sayi bir rakam");}
	
}
void not_hesabi(){
	int note;
	printf("notunuzu giriniz :");
	scanf("%d",&note);
	
	if (note>100 || note<0){
		printf("not gecersizdir");
	}
	else if(note<=100 && note>=90){
		printf("A");
	}
	else if(note>=80 && note<90){
		printf("B");
	}
	else if(note >=70 && note<80){
		printf("C");
	}
	else if(note >=60 && note<70){
		printf("D");
	}
	else{
		printf("F");
	}
}
void hesap(){
	float sayi1,sayi2,result;
	char islem;
	printf("toplama --> +\ncikarma --> -\nbolme --> /\ncarpma --> *\n");
	MeF
	printf("islem : ");
	scanf("%c",&islem);
	
	
	printf("1. sayi : ");
	scanf("%f",&sayi1);
	
	
	
	printf("2. sayi : ");
	scanf("%f",&sayi2);
	// double = lf   large float
	switch(islem){
		
		case '+':
			result = sayi1+sayi2;
			printf("%.1f + %.1f = %.1f",sayi1,sayi2,result);
			break;
		
		case '-':
			result = sayi1-sayi2;
			printf("%.1f - %.1f = %.1f",sayi1,sayi2,result);
			break;
		
		case '*':
			result = sayi1*sayi2;
			printf("%.1f * %.1f = %.1f",sayi1,sayi2,result);
			break;
		case '/':
			result = sayi1/sayi2;
			printf("%.1f / %.1f = %.1f",sayi1,sayi2,result);
			break;
			

	}
	
	
	
	
}

int main() {
	//rakam();
	//not_hesabi();
	hesap();
}