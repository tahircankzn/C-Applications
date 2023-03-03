#include <stdio.h>
#include <stdlib.h>
#include "library1.h"
//printf("%d",toplam(6));

// öz yinelemeli fonksiyon
int toplama(int a){
	
	if(a>0){
		
		return a+toplama(a-1);
		
	}
	
	else{
		return 0;
	}
	
	}




int main() {
	
	
	printf("%d",toplama(10));
	
	
}