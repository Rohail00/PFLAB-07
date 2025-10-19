#include <stdio.h>

int main(){
	int i, j;
	int budget;
	int prices[5] = {10,20,30,40,50};
	
	printf("enter your budget ");
	scanf("%d", &budget);
	if (budget > 150 || budget <= 0){
		printf("invalid budget");
	}
	else{
		for (i = 0; i < 5; i++){
			for (j = i + 1; j < 5; j++){
				if (prices[i] + prices[j] == budget){
					printf("you can afford item %d and item %d\n", i,j);
				}
				else{
				}
			}
		}
	}
	
	
	
}
