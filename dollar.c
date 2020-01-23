/*dollar.c", My first program
Name: Nhien Nguyen
Date: 2020/01/21
Description: currency convertor
*/
#include <stdio.h>
	

int main(void) {
	double US, BP, JPY;
	printf("please input the total amount of US dollars\n");
	
	scanf("%lf", &US);
BP = (US*.90) * 0.5 * 0.6;
JPY = (US*.90) * 0.5 * 76.8;
	printf("you get %lf Bristish Pounds and %lf Japanese JPY.\n", BP, JPY);
	return 0;
}
