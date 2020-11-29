/*
* Nicholas Lemire
* CIS 205 – L1 
* Lab 1
*
* BMI calculator *
*/

#include <stdio.h>

int main()
{

	float weightPounds;
	float heightInches;
	float bmi;

printf ("Hello there, if you would like to know your Body Mass Index I can calculate that for you.\n");
		
		printf ("Please enter your current weight in pounds: ");
		scanf ("%f", &weightPounds);
		
		printf ("Please enter your current height in Inches\n if you need help with this multiply your height in feet by 12 and add any extra inches: ");
		scanf ("%f", &heightInches);

			bmi = (weightPounds * 703) / (heightInches * heightInches);

if (bmi < 18.5){
			printf ("You are underweight, you may want to add more carbs or healthy fat to your diet.Your BMI is %.2f\n", bmi);
}
if (bmi >= 18.5 && bmi <= 24.9){ 
			printf ("You are in a normal weight.Your BMI is %.2f\n", bmi);
}
if (bmi >= 25 && bmi <= 29.9){
			printf ("You are overweight, you may want to look into diet plans.Your BMI is %.2f\n", bmi);	
}
if (bmi >= 30){
				printf ("You are obese, if you are struggling with diets you may think of seeing a doctor about your condition.Your BMI is %.2f\n", bmi);
}
}
