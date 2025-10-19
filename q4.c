 #include <stdio.h>
 int main(){
 	int i;
 	int products[7];
 	int mostfrequent = products[0];
 	int frequent_index;
 	
 	for (i=0; i < 7; i++){
 		printf("enter sales of products [%d] ", i);
 		scanf("%d", &products[i]);
	}
	
	for (i =0; i<7; i++){
		if (mostfrequent < products[i]) {
			mostfrequent = products[i];
			frequent_index = i;
		}
	}
	printf("the most frequent sales belonged to index %d selling %d units", frequent_index, mostfrequent);
 }
