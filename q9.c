#include <stdio.h>

int main(){
	int booking[10] = {0,0,0,0,0,0,0,0,0,0};
	int seatnum;
	char choice;
	int i;
	int bookingcount;
	
	for (i = 0; i<5; i++){

	printf("enter seat number from 0 to 9 ");
	scanf("%d", &seatnum);

		if (booking[seatnum] == 0){
			printf("this seat is empty, would you like to book this? Y or N ");
			scanf(" %c", &choice);
			if (choice == 'y' || choice == 'Y'){
				booking[seatnum] = 1;
				bookingcount = bookingcount + 1;
			}
			else{
			}
			
		}
		else{
			printf("this seat is already booked ");
		}
}
	for (i = 0; i<10;i++){
		printf("%d ", booking[i]);
	}
}

	
