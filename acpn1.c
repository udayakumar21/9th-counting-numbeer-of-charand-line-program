#include<stdio.h>
#include<math.h>
void getdata(int *pa,int *pb,int *pc);
int quadratic(int a,int b,int c,double *proot1,double *proot2);
void printr(int numroots,int a,int b,int c,double root1,double root2);
int main(void )
{
int a,b,c;
double root1,root2;
int numroots;
char again='y';
printf("solve quadratic equations\n");
while(again=='y'||'Y')
{
getdata(&a,&b,&c);
numroots=quadratic(a,b,c,&root1,&root2);
printr(numroots,a,b,c,root1,root2);
printf("do you have another equation\n");
scanf("%c",&again);
return(0);
}}
void getdata(int *pa,int *pb,int *pc)
{
printf("enter coefficients a,b,c\n");
scanf("%d%d%d",pa,pb,pc);
return;
}
int quadratic(int a,int b,int c,double *proot1,double *proot2)
{
int result;
double disc;
double root;
if(a==0&&b==0)
result=-1;
if(a==0)
{
*proot1=-c/(double)b;
result=1;
}
else
{
disc=((b*b)-(4*a*c));
if(disc>=0)
{
root=sqrt(disc);
*proot1=(-b+root)/(2*a);
*proot2=(-b-root)/(2*a);
result=2;
}
else
result=0;
}
return result;
}
void printr(int numroots,int a,int b,int c,double root1,double root2)
{
printf("your equation is %dx**2+%dx+%d\n",a,b,c);
switch(numroots)
{
case 2:printf("roots are %f & %f\n",root1,root2);
       break;
case 1:printf("only one root:%f\n",root1);
       break;
case 0:printf("roots are imaginary\n");
       break;
default:printf("invalid co-efficients\n");
        break;
        }    
	}          

