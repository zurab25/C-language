#include <stdio.h>
#include <stdlib.h>

float data[4]; // array

float total //sum of array
float average // average of array

int main()
{
	data[0] = 54.0;
	data[1] = 18.0;
	data[2] = 34.0;
	data[3] = 91.0;
	
	total = data[0] +data[1] + data[2] + data[3];
	average = total/4.0;
	
	printf("Total % Average %f \n", total,average);
	
	system("PAUSE");
	return	0;
}

