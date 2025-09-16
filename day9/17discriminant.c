//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
 int main(){
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    int r1,r2,d;
    d=sqrt((b*b)-(4*a*c));
    if(d>0)
  {
    r1= (-b+d)/(2*a);
    r2= (-b-d)/(2*a);
    printf("Roots are real and different: %d %d",r1,r2);
  }
if(d==0)
{
    r1= (-b)/(2*a);
    r2= (-b)/(2*a);
    printf("Roots are real and same: %d %d",r1,r2);
}
if(d<0)
{
    printf("roots are imaginary and does not exist!!");
}
return 0;




 }