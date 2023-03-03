#include <stdio.h>
#include <stdlib.h>

/*yorum satırı */

// yorum satırı

void age(){
	int age = 20;
	int sonuc = age*2+3;
	printf("%d",sonuc);
}
void name(){
	
	printf("      *********    *******       *   *\n");
	printf("          *        *             *  *   \n");
	printf("          *        *             * *     \n");
	printf("          *        *             *  *    \n");
	printf("          *        *             *   *\n");
	printf("          *        *******       *    *\n");
	
}
void alan_hesabi(){
	
	float en = 535,boy = 1749,sonuc;
	
	sonuc = (en*boy)/1000;
	float sonuc1 = en + boy;
	
	printf("boy = %f , en = %f\nalan = %f metre kare\ncevre = %f cm",boy,en,sonuc,sonuc1);
	
	
}
int main(){

	
	
	age();


}