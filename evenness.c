#include<stdio.h>
int main()
{
    int n;
    printf("input any number :");
    scanf("%d",&n);;

    int i, arr[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    int even=0,odd=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }


    if(even<odd)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2 != 0)
            {
                printf("%d",i+1);
                break;
            }
        }

    }


    return 0;
}
