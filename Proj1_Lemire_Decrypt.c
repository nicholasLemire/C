/*Nicholas Lemire
* CIS 205 – L1 
* Lab 0
*
* Decrypts your 4 integer passcode, please refer to Encrypt program *
*/

#include <stdio.h>

int main () {
	int num1, num2, num3, num4;

	printf ("Enter your four digit encrypted passcode for decrypted values: ");
	scanf ("%1d%1d%1d%1d", &num1, &num2, &num3, &num4);

	num1 = (num1 + 3) % 10;
	num2 = (num2 + 3) % 10;
  num3 = (num3 + 3) % 10;
	num4 = (num4 + 3) % 10;

	printf ("%1d %1d %1d %1d \n", num3, num4, num1, num2);

return 0;
}

