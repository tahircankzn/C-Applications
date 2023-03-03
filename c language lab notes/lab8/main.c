#include <stdio.h>
#include <stdlib.h>
//double = %f


int main() {
	int a = 5;
	int *ptr; // int *ptr = &a;
	ptr = &a;
	
	printf("degisken : %d\nadres : %p\n",*ptr,ptr); // %x = %p    %p de fazladan sıfır eklenir başa
	*ptr = 6;
	printf("degisken : %d\nadres : %x\n",*ptr,ptr); // %x = %p
	ptr++;
	printf("yeni adres : %x\n\n",ptr); // int 4 byte olduğu için 4 artırılmış halini göstericek
	// 16 sayı sistemi kullanılıyor adreslerde
	
	int liste[4] = {1,2,3,4};
	int *ptr2;
	ptr2 = liste;
	printf("liste elemanlari : \n");
	int buyuk;
	for (int i = 0;i<4;i++){
		printf("%d\n",*ptr2);
		
		ptr2++;
	}
	
	
	
	
	printf("%x\n",ptr2);  // adres
	printf("%x\n",&ptr2); // adresin adresi
	
	
	
	
	
	
}