#include<stdio.h>

void midPoint(int x_c, int y_c, int r)
{
    int x = r, y = 0;

    printf("(%d, %d) ", x + x_c, y + y_c);

    if (r > 0)
    {
        printf("(%d, %d) ", x + x_c, -y + y_c);
        printf("(%d, %d) ", y + x_c, x + y_c);
        printf("(%d, %d)\n", -y + x_c, x + y_c);
    }

    int P = 1 - r;
    while (x > y)
    {
        y++;

        if (P <= 0)
            P = P + 2*y + 1;

        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }

        if (x < y)
            break;

        printf("(%d, %d) ", x + x_c, y + y_c);
        printf("(%d, %d) ", -x + x_c, y + y_c);
        printf("(%d, %d) ", x + x_c, -y + y_c);
        printf("(%d, %d)\n", -x + x_c, -y + y_c);


        if (x != y)
        {
            printf("(%d, %d) ", y + x_c, x + y_c);
            printf("(%d, %d) ", -y + x_c, x + y_c);
            printf("(%d, %d) ", y + x_c, -x + y_c);
            printf("(%d, %d)\n", -y + x_c, -x + y_c);
        }
    }
}

int main()
{
    int x , y , r ;
    printf("Enter co-ordinates (X & Y): ");
    scanf("%d%d", &x, &y);
    printf("Enter Radius: ");
    scanf("%d", &r);

    midPoint(x, y, r);
    return 0;
}
