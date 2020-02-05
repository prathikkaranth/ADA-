#include<stdio.h>


int gcd(int m,int n)
{
 if(m==0)
 return n;
 if(n==0)
 return m;
 if(m==n)
 return m;
 if(m>n)
 return gcd(m-n,n);
 else
 return gcd(n-m,m);
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
    
