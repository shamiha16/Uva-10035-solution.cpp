#include<stdio.h>
int main()
{
   unsigned long long int a,b;
    int carrycount,sum;
    while(scanf("%llu%llu",&a,&b)==2){
    if(a==0 && b==0)
       {
           break;}

   carrycount=0;
   sum=0;
   while (a>0 || b>0){
     sum=((a%10)+(b%10)+sum)/10;

     a/=10;
     b/=10;
    if (sum>0)
    {

     carrycount++;}

    }

     if (carrycount==0)
       {

        printf("No carry operation.\n");}
        else if
            (carrycount==1)
        {

         printf("1 carry operation.\n");}
     else
       {

        printf("%d carry operations.\n", carrycount);}
     }
     return 0;}




