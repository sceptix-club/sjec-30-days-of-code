#include<stdio.h>
#include<math.h>
float compare1(float a,float b,float c,float d)
{
    if(a>b && a>c && a>d)
    printf("Circle \n");
    else if (b>a && b>c && b>d)
    printf("Square \n");
    else if(c>a && c>b && c>d)
    printf("Triangle \n");
    else
    printf("Rectangle \n");
}
float compare2(float a,float b,float c,float d)
{
    if((a>b && a>c && a<d) || (a>b && a<c && a>d) || (a<b && a>c && a>d) )
    printf("Circle \n");
    else if ((b>a && b>c && b<d) || (b>a && b<c && b>d) || (b<a && b>c && b>d) )
    printf("Square \n");
    else if((c>a && c>b && c<d) || (c>a && c<b && c>d) || (c<a && c>b && c>d) )
    printf("Triangle \n");
    else
    printf("Rectangle \n");
}
float compare3(float a,float b,float c,float d)
{
    if((a>b && a<c && a<d) || (a<b && a>c && a<d) || (a<b && a<c && a>d) )
    printf("Circle \n");
    else if ((b>a && b<c && b<d) || (b<a && b>c && b<d) || (b<a && b<c && b>d) )
    printf("Square \n");
    else if((c>a && c<b && c<d) || (c<a && c>b && c<d) || (c<a && c<b && c>d) )
    printf("Triangle \n");
    else
    printf("Rectangle \n");
}
float compare4(float a,float b,float c,float d)
{
    if(a<b && a<c && a<d)
    printf("Circle \n");
    else if (b<a && b<c && b<d)
    printf("Square \n");
    else if(c<a && c<b && c<d)
    printf("Triangle \n");
    else
    printf("Rectangle \n");
}
int main()
{
    float p,q,r,s,t,arC,arS,arT,arR,sem,x;
    printf("Enter the dimensions of the shapes:\n");

    printf("Circle :\n");
    scanf("%f",&p);

    printf("Square :\n");
    scanf("%f",&q);

    printf("Equilateral Triangle :\n");
    scanf("%f",&r);

    printf("Rectangle :\n");
    scanf("%f %f",&s,&t);

    sem= (r*3)/2;

    arC = 2 * 22/7 * p*p;
    arS = q*q;
    arT = sqrt(sem*(pow(sem-r,3)));
    arR = s *t; 
    
    compare1(arC,arS,arT,arR);
    compare2(arC,arS,arT,arR);
    compare3(arC,arS,arT,arR);
    compare4(arC,arS,arT,arR);
}