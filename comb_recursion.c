#include<stdio.h>
int comb(int,int);
void main()
{
    int n,r,c;
    printf("enter two number");
    scanf("%d %d",&n,&r);
    c=comb(n,r);
    printf("Combination is ------->  %d",c);
     
}

int comb(int n, int r)
{
    int k;
     if(n==r || r==0)
       return 1;
    k=comb(n-1,r)+comb(n-1,r-1);
    return k;
}