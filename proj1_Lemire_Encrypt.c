/*
* Nicholas Lemire
* CIS 205 – L1 
* Lab 1
*
* Encrypts a 4 digit passcode *
*/

#include <stdio.h>

int main () {
	int num1, num2, num3, num4;

	printf ("Enter four digit integer passcode: ");
	scanf ("%1d%1d%1d%1d", &num1, &num2, &num3, &num4);
	
	num1 = (num1 + 7)%10;
	num2 = (num2 + 7)%10;
	num3 = (num3 + 7)%10;
	num4 = (num4 + 7)%10;

	printf ("%1d %1d %1d %1d \n", num3, num4, num1, num2);

return 0;
}
