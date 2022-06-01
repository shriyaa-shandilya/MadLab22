#include <stdio.h>
void bitstuff(int arr[], int n)
{
    int count = 0, k = 0;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        //  1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1,0, 1, 1, 0, 1, 1, 1, 0, 1};
        ans[k++] = arr[i];
        if (count == 5 && arr[i + 1] == 0)
        {
            // ans[++k] = 0;
            i++;
            count = 0;
        }
    }
    for (int i = 0; i < k; i++)
    
    {
        printf("%d ", ans[i]);
    }
}

int main()
{
    int arr[] = {
        1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1};
    bitstuff(arr, 20);
    return 0;
}