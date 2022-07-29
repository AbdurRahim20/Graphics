#include <stdio.h>

void drawCircle(int xc, int yc, int x, int y)
{
    printf("(%d, %d) \n",xc+x, yc+y);
    printf("(%d, %d) \n",xc-x, yc+y);
    printf("(%d, %d) \n",xc+x, yc-y);
    printf("(%d, %d) \n",xc-x, yc-y);
    printf("(%d, %d) \n",xc+y, yc+x);
    printf("(%d, %d) \n",xc-y, yc+x);
    printf("(%d, %d) \n",xc+y, yc-x);
    printf("(%d, %d) \n",xc-y, yc-x);

}

void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);

    while (y >= x)
    {
        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);

    }
}


int main()
{
    int x , y , r ;
    printf("Enter co-ordinates (X & Y): ");
    scanf("%d%d", &x, &y);
    printf("Enter Radius: ");
    scanf("%d", &r);
    circleBres(x, y, r);
    return 0;
}
