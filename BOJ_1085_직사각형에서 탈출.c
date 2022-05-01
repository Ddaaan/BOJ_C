#include <stdio.h>
int main(void)
{
	int x, y, w, h;
	int dis[4];
	int min = 1000;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	
	dis[0] = x;
	dis[1] = y;
	dis[2] = w - x;
	dis[3] = h - y;

	for (int i = 0; i < 4; i++)
	{
		if (dis[i] < min)
			min = dis[i];
	}
	printf("%d", min);

	return 0;
}