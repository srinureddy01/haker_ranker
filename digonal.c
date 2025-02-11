#include<stdio.h>
int size;
int cal(int mat[size][size])
{
    //from left to right
    int cal1=0,cal2=0;
    for(int i=0;i<size;i++)
    {
        cal1=cal1+mat[i][i];
    }
    for(int i=0;i<size;i++)
    {
        cal2=cal2+mat[i][size-1-i];
    }
    printf("%d",abs(cal1-cal2));
    return 0;
    
}
int main()
{
     
    scanf("%d",&size);
    int mat[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    cal(mat);
}
