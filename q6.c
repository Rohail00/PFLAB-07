#include <stdio.h>

int main(){
	int productid[10] = {1,2,3,4,5,6,7,8,9,10};
	int delete_index;
	int i;
	
	
	printf("which element would you like to remove: ");
	scanf("%d", &delete_index);
	
	for (i = 0; i <10; i++){
		if (productid[i] == productid[delete_index]){
			productid[delete_index] = 0;
		}
		else{
			
		}
	}
	for (i = 0; i<10; i++){
		printf("%d ", productid[i]);
	}
	
}
