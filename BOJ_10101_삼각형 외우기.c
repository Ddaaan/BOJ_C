#include <stdio.h>

int main(void)
{
	int angle1, angle2, angle3;
	scanf_s("%d %d %d", &angle1, &angle2, &angle3);

	if (angle1 + angle2 + angle3 == 180)
	{
		if (angle1 && angle2 && angle3 ==60)
			printf("Equilateral");

		else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
			printf("Isosceles");

		else
			printf("Scalene");
	}

	else
		printf("Error");

	return 0;
}