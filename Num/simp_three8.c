#include<stdio.h>
#include<math.h>

float func(float x)
{
    return 1/(x*x+1);
}



int main()
{
    float a,b,h,n,sum=0,x;
    printf("Enter the lower limit=>");
    scanf("%f", &a);
    printf("Enter the upper limit=>");
    scanf("%f", &b);
    printf("Enter no of sub interval=>");
    scanf("%f", &n);


    h=(b-a)/n;


    for(int i=1; i<n; i++)
    {
        x=a+i*h;
        // change
        if(i%3==0){
            sum=sum+2*func(x);
        }else{
            sum=sum+3*func(x);
        }
        
    }
    // change2
    sum=3*h/8*(func(a)+func(b)+sum);
    printf("\n Area is: %f\n\n",sum);

    return 0;
}