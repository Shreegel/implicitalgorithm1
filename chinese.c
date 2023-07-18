// wap to solve chinese remainder theorem
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int GCD(int x,int y,int *a,int *b)
{
    int modInv(int a,int m)
    {
        int x,y,g;
        g=GCD(a,m,&x,&y);
        if (g!=1)
        {
            printf("Inverse doesnt exist");
            exit(1);
        }
        else
            return ((x%m+m)%m);
    }
    int g,t1,t2;
    if(x%y==0)
    {
        *a=0;
        *b=1;
        return y;

    }
    else{
        g=GCD(y,x%y,&t1,&t2);
        *a=t2;
        
        *b=t1-t2*floor(x/y);
return g;
}
}

int modInv(int a,int m)
{
    int x,y,g;
    g=GCD(a,m,&x,&y);
    if(g!=1)
    {
    printf("Inverse doesnot exist");
    exit(1);
    }
}
else{
    return((x%m+m)%m);
}
}

int main()
{
   int a[10],m[10],M[10],X[10],x,n,mtot=1,sum=0,i;
   printf("Enter n:");
   scanf("%d",&n);
   printf("Start entering values..\n");
   for (i=1;i<=n;i++)
   {
       printf("Enter a_%d and m_%d:",i,i);
       scanf("%d%d",&a[i],&m[i]);
       mtot=m[i]*mtot;
       
   }
   for(i=1;i<=n;i++)
   {
       M[i]=mtot/m[i];
       X[i]=modInv(M[i],m[i]);
       sum=sum+M[i]*X[i]*a[i];
       
   }
   printf("Values of x=%d",sum%mtot);
   return 0;
}
