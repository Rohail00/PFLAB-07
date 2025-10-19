#include <stdio.h>

int main(){
	int seca[5] = {1,2,3,4,5};
	int secb[5] = {6,7,8,9,10};
    int merged[10];
    int i,j,k;
    
    
    for (i=0; i<5; i++){
    	merged[i] = seca[i];
	}
	for (j=0; j<5;j++){
		merged[j+i] = secb[j];
	}
	for (k=0;k<10;k++){
		printf("%d\n", merged[k]);
	}
}
