/*
* Nicholas Lemire
* CIS 205 – L1 
* Lab 1
*
* Binary to Decimal conversion calculator *
*/

#include <stdio.h>

int main ()
{

/*
* Declares integer variables *
*/
int num1, num2, num3, num4, num5;
int binum;
  
  printf ( "Please enter up to 5 binary integers of 1s and 0s and I will convert to the decimal equivalent: "  );
  scanf ( "%d", &binum );

/*
* Assigns each integer to places of 10 *
*/
  num1 = binum % 10;
  num2 = binum / 10 % 10;
  num3 = binum / 100 % 10;
  num4 = binum / 1000 % 10;
  num5 = binum / 10000;


/*
* Repeats process of looking whether 1 or 0 is entered and making proper calculation *
*/
  if ( num5 == 1 ) {
    num5 = 16;
	printf ( "%d ", num5 );
    } else {  
	  printf ( "%d ", num5 );
  }

  if ( num4 == 1 ) {
	num4 = 8;
	printf ( "%d ", num4 );
    } else {
	  printf ( "%d ", num4 );
  }

  if ( num3 == 1 ) {
	num3 = 4;
	printf ( "%d ", num3 );
    } else {
	  printf ( "%d ", num3 );
  }

  if ( num2 == 1 ) {
	num2 = 2;
	printf ( "%d ", num2 );
	} else {
	  printf ( "%d ", num2 );
  }

  if ( num1 == 1 ) {
	num1 = num1 * 1;
	printf ( "%d ", num1 );
	} else {
	  printf ( "%d ", num1 );
  }

/*
* Adds all binary place holder values depending on 1’s entered assigned to variable binum *
*/
  binum = num1 + num2 + num3 + num4 + num5;

  printf ( "\n" );
  printf ( "Converted number is:  %d \n" , binum );

return 0;
}
