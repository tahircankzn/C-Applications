#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int liste[4] = {-1,9,5,4};
	int *ptr2;
	ptr2 = liste;
	
	int buyuk = *ptr2;
	
	for (int i = 0;i<4;i++){
		
		if(*ptr2 < buyuk){
			buyuk = *ptr2;
		}
		
		ptr2++;
		
	}
	printf("en kucuk eleman : %d\n",buyuk);
	
	
	int *ptr3;
	ptr3 = liste;
	
	for (int i = 0;i<4;i++){
		
		if(*ptr3%2 != 0){
			printf("%d nin indexi : %d\n",*ptr3,i);
		}
		ptr3++;
}


	
}