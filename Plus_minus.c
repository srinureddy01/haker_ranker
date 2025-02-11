#include<stdio.h>
int cal(int arry[] , int n)
{
    int po=0,ne=0,ze=0;
    
    for(int i =0 ; i<n ; i++)
    {
        if(arry[i] < 0)
        {
            ne+=1;
        }
        if(arry[i] > 0)
        {
            po+=1;
        }
        if(arry[i]==0)
        {
            ze+=1;
        }
        
    }
    printf("%.6f\n",(float)po/n);
    printf("%.6f\n",(float)ne/n);
    printf("%.6f\n",(float)ze/n);
    
    return 0;
}
int  main()
{
    int  n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    cal(arr , n);
    
    return 0;
    
}
