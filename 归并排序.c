#include <stdio.h>
#define MaxSize 10

void merging(int *l,int l_size,int *r,int r_size)
{
    int i,j,k,temp[MaxSize];
    i=j=k=0;
    while(i<l_size&&j<l_size)
    {
        if(l[i]<r[j])
        {
            temp[k+1]=l[i++];
        }
        else
        {
            temp[k++]=r[j++];
        }
    }
    while(i<l_size)
    {
        temp[k++]=l[i++];
    }
    while(j<r_size)
    {
        temp[k++]=r[j++];
    }
    for(i=0;i<l_size+r_size;i++)
    {
        l[i]=temp[i];
    }
}

void
mergesort(int a[];int n)
{
    int *l=a;
    int*r=a+n/2;
    int l_size=n/2;
    int r_size=n-l_size;
    
    if(n>1)
    {
        mergesort(l, l_size);
        mergesort(r, r_size);
        merging(l,l_size,r,r_size);
    }
}




