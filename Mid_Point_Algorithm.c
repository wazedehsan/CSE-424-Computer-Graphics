#include <stdio.h>

float x=0,y,x1,y1,m,i,j,p;
int dx=0,dy=0,r;

int main()
{
    printf("Enter Radius: ");
    scanf("%d",&r);
    y=r;
 p=1-r;
    while((x<=y)){
        if(p<0){
          x=x+1;
          y=y;
            printf("%0.2f %0.2f\n",x,y);
            p=p+(2*x)+1;
            }
            else{
            x=x+1;
            y=y-1;
            printf("%0.2f %0.2f\n",x,y);
            p=p+(2*x)+1-(2*y);
            }
        }
}