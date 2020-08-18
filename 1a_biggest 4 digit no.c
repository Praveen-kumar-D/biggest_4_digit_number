#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a=98189;
    int d[5],n,i=0,p,max=0,num,k,m,j;
    p=a;
    while(p!=0)
    {
       n=p%10;
       p=p/10;
       d[i]=n;
       i++;
    }
     for(j=0;j<i;j++)
     {
         k=0;
         num=0;
         for(m=0;m<i;m++)
         {
             if(!(m==j))
             {

                num=num+(d[m]*(pow(10,k)));
                k++;
                printf("each -%d::%d \n",k,num);
             }
         }printf("\n");
         if(num>max)
            max=num;
     }

   printf("max:%d",max);
    return 0;
}
