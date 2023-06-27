#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	float h, k, r, x0, y0, p0;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	printf("Enter the value of center and radius: ");
	scanf("%f%f%f", &h, &k, &r);

	x0 = 0;
	y0 = r;
	p0 = 5 / 4 - r;

	while (x0 <= y0)
	{
		putpixel(h + x0, k + y0, 5);
		putpixel(h - x0, k + y0, 5);
		putpixel(h + x0, k - y0, 5);
		putpixel(h - x0, k - y0, 5);

		putpixel(h + y0, k + x0, 5);
		putpixel(h - y0, k + x0, 5);
		putpixel(h + y0, k - x0, 5);
		putpixel(h - y0, k - x0, 5);

		if (p0 <= 0)
		{
			x0 = x0 + 1;
			y0 = y0;
			p0 = p0 + 2 * x0 + 1;
		}
		else
		{
			x0 = x0 + 1;
			y0 = y0 - 1;
			p0 = p0 + 2 * x0 - 2 * y0 + 1;
		}
	}
	getch();
	return 0;
}