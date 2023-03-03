#include <stdio.h>

#include <stdlib.h>

int usAlma3(int taban,int us){
	
	int result = 1;
	
	for(int i = 1;i<=us;i++){
		result = result * taban;
	}
	
	return result;
	
}