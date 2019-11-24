#include<stdio.h>
#include<stdbool.h>
int binsearch(int A[],int n,int x,bool searchFirst)
{
    
    int low=0;int high=n-1,result=-1;
    while(low<high)
    {
        
        int mid=(low+high)/2;
        
        if(A[mid]==x)
		{
            result=mid;
        
            if (searchFirst)
                high=mid-1;
            else
                low=mid+1;
        }
        else  if (x<A[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return result;
}
int main()
{
    
   int A[]={2,3,4,4,3,3,3,3,6,4,4};
   int x ;
   
    printf("enter an element");
    scanf("%d",&x);
    int  firstindex=binlsearch(A,12,x,true);
    if(firstindex=-1)
        printf("");
    int secondindex=binsearch(A,12,x,false);
    printf("count  of %d is %d",x,secondindex-firstindex+1);
    return 0;
}


