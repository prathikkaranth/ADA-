#include<stdio.h>


int gcd(int m,int n)
{
 while(m!=n)
 {
  if(m>n)
  m=m-n;
  else
  n=n-m;
 }
 return m;
}
void main()
{
 int m,n,r;
 printf("Enter two numbers");
 scanf("%d",&m);
 scanf("%d",&n);
 r=gcd(m,n);
 printf("%d",r);
} 
    
