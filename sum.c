#include <stdlib.h>
#include <unistd.h>

int main ()
{
double *a,sum;
int n;

a=(double*)malloc(n*sizeof(double));
for(int i=0; i<n ; i++)
a[i]=i+1;
for(int i=0; i<n ;i++)
sum=sum+a [i];
free(a);
 }
