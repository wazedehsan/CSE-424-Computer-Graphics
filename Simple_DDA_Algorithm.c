#include<stdio.h>

float x,y,x1,y1,m,i,j;
float dx,dy;

int main()
{

    printf("Enter value of X :");
    scanf("%f",&x);
    printf("Enter value of Y :");
    scanf("%f",&y);
    printf("Enter value of X1 :");
    scanf("%f",&x1);
    printf("Enter value of Y1 :");
    scanf("%f",&y1);
    dx=x1-x;
    dy=y1-y;
    m=dy/dx;

if(m>0 && m<=1)
{
while(x<=x1 && y<=y1)
{
    x=x+1;
    y=y+m;
   
   printf("%f %f \n",x,y);
}
}
else if(m>1)
{
    while(x<=x1 && y<=y1)
{
    x=x+(1/m);
    y=y+1;
   
   printf("%f %f\n",x,y);
}
}
else if(m>-1 && m<=0)
{
    while(x>=x1 && y>=y1)
{
    x=x-1;
    y=y-m;
 
   printf("%f %f\n",x,y);
}
}
else if(m<-1)

  {

    while(x>=x1 && y>=y1)
{
    x=x-(1/m);
    y=y-1;
    
    printf("%f %f\n",x,y);
}
  }