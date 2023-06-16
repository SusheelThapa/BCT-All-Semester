#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, lx, ly, dx, dy, pk, i;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	printf("Enter values of x1,y1,x2,y2: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	dx = abs(x2 - x1);
	dy = abs(y2 - y1);

	lx = x2 > x1 ? 1 : -1;
	ly = y2 > y1 ? 1 : -1;
	putpixel(x1, y1, WHITE);

	if (dx > dy)
	{
		pk = 2 * dy - dx;
		for (i = 0; i < dx; i++)
		{
			if (pk < 0)
			{
				x1 += lx;
				y1 = y1;
				pk += 2 * dy;
			}
			else
			{
				x1 += lx;
				y1 += ly;
				pk += 2 * dy - 2 * dx;
			}
			putpixel(x1, y1, WHITE);
		}
	}
	else
	{
		pk = 2 * dx - dy;

		for (i = 0; i < dy; i++)
		{
			if (pk < 0)
			{
				x1 = x1;
				y1 += ly;
				pk += 2 * dx;
			}
			else
			{
				x1 += lx;
				y1 += ly;
				pk += 2 * dx - 2 * dy;
			}
			putpixel(x1, y1, WHITE);
		}
	}

	getch();
	closegraph();

	return 0;
}