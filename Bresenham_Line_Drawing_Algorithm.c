#include <stdio.h>

float x,y,x1,y1,m,i,j,p;
int dx=0,dy=0;

int main()
{

    printf("Enter First Point: ");
    scanf("%f %f",&x,&y);
    printf("Enter Second Point: ");
    scanf("%f %f",&x1,&y1);
    dx=x1-x;
    dy=y1-y;
    p=(2*dy)-dx;
    for(i=x,j=y;i<=x1,j<=y1; ){
        if(p>=0){
            i=i+1;
            j=j+1;
            if((i>x1)||(j>y1)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);

            p=p+(2*dy)-(2*dx);
            }
            else if(p<0){
            i=i+1;
            if((i>x1)||(j>y1)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);

            p=p+(2*dy);
            }
        }

}