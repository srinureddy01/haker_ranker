#include<stdio.h>
int validate(int ar[],int n)
{
   int unique_element = 0;
    for (int i = 0; i < n; i++) {
        unique_element ^= ar[i];
    }
    printf("%d",unique_element);
    return 0;   
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    validate(arr,n);
    return 0;
}
