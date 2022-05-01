#include<stdio.h>
int main(void)
{
	int T, floor, room, people;
	
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &floor, &room, &people);
		if (people % floor == 0)
			printf("%d%02d\n", floor, people / floor);
		else
			printf("%d%02d\n", people % floor, people / floor + 1);
	}
	return 0;
}