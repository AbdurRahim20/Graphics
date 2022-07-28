
#include<stdio.h>
#include<math.h>

int abs (int n)
{
	return ((n>0) ? n : (n*(-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{

	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X0;
	float Y = Y0;
	printf("X     ,  Y\n");
	for (int i=0;i<=steps;i++)
	{
	    printf("%.2f  , %.2f,\n", X, Y);

		X += Xinc;
		Y += Yinc;


	}
}

int main()
{
    int x0,y0,x1,y1;
    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x0, &y0);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x1, &y1);
    //printf("Pk, Xk+1, Yk+1 \n");
    DDA(x0, y0, x1, y1);
	//int X0 = 2, Y0 = 0, X1 = 7, Y1 = 4;
	//DDA(2, 0, 7, 4);
	return 0;
}
