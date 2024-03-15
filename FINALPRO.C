#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
    int xmax, ymax;
    int x, y, xx, yy, x1, x2, y1, y2, xx1, xx2, yy1, yy2, i;
    int graphic_driver = DETECT, graphic_mode;
    initgraph(&graphic_driver, &graphic_mode, "C:/Turboc3/BGI");
    setcolor(getmaxcolor());
    xmax = getmaxx();
    ymax = getmaxy();
    yy = ymax / 2 + 10;
    xx1 = xmax / 2 - 10;
    xx2 = xmax / 2 + 10;
    xx = xmax / 2 - 10;
    yy1 = ymax / 2 - 10;
    yy2 = ymax / 2 + 10;
    y = ymax / 2 - 10;
    x1 = xmax / 2 - 10;
    x2 = xmax / 2 + 10;
    x = xmax / 2 + 10;
    y1 = ymax / 2 - 10;
    y2 = ymax / 2 + 10;
    for (i = 1; i <= 20; i++)
    {
	line(x1, y, x2, y);
	delay(300);
	line(x, y1, x, y2);
	delay(300);
	line(xx1, yy, xx2, yy);
	delay(300);
	line(xx, yy1, xx, yy2);
	delay(300);
	xx = xx - 10;
	yy1 = yy1 - 10;
	yy2 = yy2 + 10;
	x1 = x1 - 10;
	x2 = x2 + 10;
	y = y - 10;
	x = x + 10;
	y1 = y1 - 10;
	y2 = y2 + 10;
	yy = yy + 10;
	xx1 = xx1 - 10;
	xx2 = xx2 + 10;
    }
    getch();
    closegraph();
    return 0;
}
