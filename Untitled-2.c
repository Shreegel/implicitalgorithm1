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
    int a=5,m=7;
    printf("Modular inverse of %d mod %d is %d mod %d",a,m,modInv(a,m),m);
    return 0;
}
