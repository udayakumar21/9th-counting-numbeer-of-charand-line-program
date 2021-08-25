#include<stdio.h>
#define max 20
int binary(int list[],int *endptr,int key,int **locnptr);
int main()
{
int i,n;
int key;
int *locn;
int ary[max];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter %d elements into array in order \n",n);
for(i=0;i<n;i++)
{
printf("%d elements array[%d]= ",i+1,i);
scanf("%d",&ary[i]);
}
printf("entered input array:");
for(i=0;i<n;i++)
printf("%3d",ary[i]);
printf("\n\n enter a key element to search : ");
scanf("%d",&key);
do{
if(binary(ary,ary+n-1,key,&locn))
printf("%3d NOT found available at any locn!_ _ _\n",key);
printf("enter next key <-1> to quit:");
scanf("%d",&key);
}
while(key!=-1);
printf("end of search\n");
}
int binary(int list[],int *endptr,int key,int **locnptr)
{
int *firstptr;
int *midptr;
int *lastptr;
firstptr=list;
lastptr=endptr;
while(firstptr<=lastptr)
{
midptr=firstptr+(lastptr-firstptr)/2;
if(key>*midptr)
firstptr=midptr+1;
else if(key<*midptr)
lastptr=midptr-1;
else
firstptr=lastptr+1;
}
*locnptr=midptr;
return(key==*midptr);
}
