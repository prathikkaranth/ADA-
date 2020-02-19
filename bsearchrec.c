#include<stdio.h>
#include <time.h>

int bsearch(int a[],int first,int last,int ele)
{
 int mid;
 if(first>last)
 return -1;
 mid=(first+last)/2;
 if(a[mid]==ele)
 return mid;
 else if(ele<a[mid])
 bsearch(a,first,mid-1,ele);
 else
 bsearch(a,mid+1,last,ele);
}
int main()
{
 int a[]={24,46,54,48,71};
 int n=54;
 printf("%d is found at %d \n",n,bsearch(a,0,9,n));
 return 0;
}  
 
     
 
