# include <stdio.h>

int x,y,r;
int main() {
	printf( "Enter the Center Co-ordinates: ");
	scanf("%d %d",&x,&y);
	printf( "Enter the Radius: ");
	scanf("%d",&r);
    int x=0;
	int y = r;
	float d = 3 - (2*r);
	while (y > x)
	{
		if (d <= 0)
		{
			d = d + (4 * x) + 6;
		}
		else
		{
			d= d+ (4 * x) - (4 * y) + 10;
			y = y - 1;
		}
		x++;
		printf("%d %d\n",x, y);
	}
}