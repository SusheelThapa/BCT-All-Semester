#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>

void ellipse(int x, int y, int r0, int r1)
{

	int x0 = 0;
	int y0 = r1;

	int p10 = pow(r1, 2) - pow(r0, 2) * r1 + 1 / 4 * r0 * r0;

	while (1)
	{
		putpixel(x + x0, y + y0, 5);
		putpixel(x - x0, y + y0, 6);
		putpixel(x + x0, y - y0, 7);
		putpixel(x - x0, y - y0, 8);

		x0 += 1;
		if (p10 < 0)
		{
			y0 = y0;
			p10 += 2 * r1 * r1 * x0 + r1 * r1;
		}
		else
		{
			y0 -= 1;
			p10 += 2 * r1 * r1 * x0 - 2 * r0 * r0 * y0 + r1 * r1;
		}
		if (2 * r1 * r1 * x0 > 2 * r0 * r0 * y0)
		{
			break;
		}
	}

	int p20 = r0 * r0 - r0 * r1 * r1 + r1 * r1 / 4;

	x0 = r0;
	y0 = 0;
	while (1)
	{
		putpixel(x + x0, y + y0, 1);
		putpixel(x - x0, y + y0, 2);
		putpixel(x + x0, y - y0, 3);
		putpixel(x - x0, y - y0, 4);
		y0 += 1;
		if (p20 < 0)
		{
			x0 = x0;
			p20 += 2 * r0 * r0 * y0 + r0 * r0;
		}
		else
		{
			x0 -= 1;
			p20 += 2 * r0 * r0 * y0 - 2 * r1 * r1 * x0 + r0 * r0;
		}
		if (2 * r0 * r0 * y0 > 2 * r1 * r1 * x0)
		{
			break;
		}
	}
}
int main()
{
	int center_x, center_y, radius_one, radius_two;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	printf("Center X= ");
	scanf("%d", &center_x);

	printf("Center Y= ");
	scanf("%d", &center_y);

	printf("Radius One");
	scanf("%d", &radius_one);
	printf("Radius Two");
	scanf("%d", &radius_two);

	ellipse(center_x, center_y, radius_one, radius_two);

	getch();
	closegraph();

	return 0;
}