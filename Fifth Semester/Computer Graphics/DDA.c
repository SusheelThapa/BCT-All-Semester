#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, dx, dy, stepsize, i;
	float xinc, yinc, x, y;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	printf("%s\n", "line drawing using DDA");
	printf("Enter values of x1,y1,x2,y2: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	dx = x2 - x1;
	dy = y2 - y1;
	x = x1;
	y = y1;

	if (abs(dy) > abs(dx))
	{
		stepsize = dy;
	}
	else
	{
		stepsize = dx;
	}

	xinc = dx / (float)stepsize;
	yinc = dy / (float)stepsize;

	putpixel(x, y, WHITE);

	for (i = 0; i < stepsize; i++)
	{
		x += xinc;
		y += yinc;
		putpixel((int)x, (int)y, WHITE);
	}

	getch();
	closegraph();

	return 0;
}