#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numbers[10];
    int i;
    int find;
    printf("enter the number you want to find ");
    scanf("%d", &find);
    
     srand(time(NULL));
     
    for (i = 0; i<10; i++){
    	 numbers[i] = rand() % 100;
	}
	for (i = 0; i < 10; i++){
		if (numbers[i] = find){
			printf("your number %d was found in index %d\n", find, i);
			break;
		}
		else{
			printf("your number could not be found\n");
		}
	}
	for (i=0; i<10;i++){
		printf("%d\n", numbers[i]);
	}
}
