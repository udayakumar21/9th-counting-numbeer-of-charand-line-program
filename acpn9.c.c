#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 25
int *getdata(int *pary,int asize);
void select(int *pary,int *last);
void print(int *pary,int *last);
int *smallest(int *pary,int *smallest);
void exchange(int *current,int *smallest);
int main(void)
{
int ary[SIZE];
int *plast;
plast=getdata(ary,SIZE);
select(ary,plast);
print(ary,plast);
return(0);
}
int *getdata(int *pary,int asize)
{
int ioresult;
int readcnt=0;
int *pfill=pary;
do{
printf("please anter a number or<EOF>: ");
ioresult=scanf("%d",pfill);
if(ioresult==1)
{
pfill++;
readcnt++;
}
}while(ioresult==1&&readcnt);
return(--pfill);
}
void select(int *pary,int *plast)
{
int *pwalker;
int *psmallest;
for(pwalker=pary;pwalker<plast;pwalker++)
{
psmallest=smallest(pwalker,plast);
exchange(pwalker,psmallest);
}
return;
}
int *smallest(int *pary,int *plast)
{
int *plooker;
int *psmallest;
for(psmallest=pary,plooker=pary+1;plooker++<=plast;plooker++)
if(*plooker<*psmallest)
psmallest=plooker;
return psmallest;
}
void exchange(int *p1,int *p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
return;
}
void print(int *pary,int *plast)
{
int nmbrprt;
int *pprint;
printf("\n\n your data stored are:\n");
for(pprint=pary,nmbrprt=0;pprint<=plast;nmbrprt++,pprint++)
printf("\n#%02d,%4d",nmbrprt,*pprint);
printf("\n\nend of list");
return;
}

