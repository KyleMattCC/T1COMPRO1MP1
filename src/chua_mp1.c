/*	COMPRO1 MACHINE PROBLEM PART I						*/
/*	CHUA, KYLE MATTHEW C.							*/
/*	S19A									*/
/*	Convert degrees to radians, cosine, and sine and 
	output -180 degrees to 180 degrees and its corresponding conversions	*/

#include <stdio.h>

#define PI 3.141592653589
#define NUMBER_OF_TERMS 10

int main()
{
  double degree, radian, cosine_numerator, factorial_cos, cosine, sin_numerator, factorial_sin, sine;
  int ctr, cosine_denominator, cosine_denominator2, sin_denominator, sin_denominator2;

  printf("11426012\n\n");

  for(degree = (-180.0) ; degree <= 180 ; degree += 5.0){
	printf("%.2lf\t\t", degree);
	
	radian = degree * PI / 180;
	printf("%.12lf\t\t", radian);
	
	cosine_numerator = 1;
	cosine_denominator = 0;
	factorial_cos = 1;
	cosine = 1;
	sin_numerator = radian;
	sin_denominator = 1;
	factorial_sin = 1;
	sine = radian;
	
	for(ctr=1 ; ctr<NUMBER_OF_TERMS ; ctr++){	//For Cosine
		cosine_numerator *= radian*radian*(-1);
		cosine_denominator += 2;
		cosine_denominator2 = cosine_denominator - 1;
		factorial_cos *= cosine_denominator*cosine_denominator2;
		cosine += (cosine_numerator/factorial_cos);
		}
	printf("%.12lf\t  ", cosine);
	
	for(ctr=1 ; ctr<NUMBER_OF_TERMS ; ctr++){	//For Sine
		sin_numerator *= radian*radian*(-1);
		sin_denominator += 2;
		sin_denominator2 = sin_denominator - 1;
		factorial_sin *= sin_denominator*sin_denominator2;
		sine += (sin_numerator/factorial_sin);
		}
	printf("%.12lf\n", sine);
	}

  return 0;
}

