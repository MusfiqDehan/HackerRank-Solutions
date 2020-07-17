#include <stdio.h>

int arr[1000], n, sum=0;

int main()
{
    scanf("%d", &n);
    //int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);
    
    return 0;
}