#include<stdio.h>
#include <time.h>

void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
void bubsort(int a[],int n)
{
 int i,j;
 for(i=0;i<n-2;i++)
 {
  for(j=i+1;j<n-1;j++)
  {
   if(a[j]<a[i])
   swap(&a[j],&a[i]);
  }
 }
}
void display(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
}
int main()
{
 clock_t start_t, end_t, total_t;
 int n=5;
 int a[]={54,32,45,21,67};
 start_t = clock();
 bubsort(a,n);
 printf("sorted array : \n");
 display(a,n);
 end_t = clock();
 total_t = end_t - start_t;
 printf("Total time taken by CPU: %ld \n", total_t  );
 return 0;
} 
 
     
 
