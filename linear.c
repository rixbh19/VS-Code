#include<stdio.h>
void main()
{
    int i,n,a[20],item,found=0;
    printf("Enter size of array (<20) :");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter value to be found : ");
    scanf("%d",&item);
    for (i=0;i<n;i++)
    {
        if (a[i]==item)
        {
            found=1;
            printf("Value found at position %d ",i+1);
            break;
        }
    }
    if (found==0)
    {
        printf("Value not found.");
    }
}