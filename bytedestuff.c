#include <stdio.h>
#include <string.h>
void bytestuffing(char arr[][10], int n)
{
    char ans[2 * n][10];
    char ESC[] = "ESC";
    char FLAG[] = "FLAG";
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (
            (
                strcmp(arr[i], ESC) == 0 &&
                strcmp(arr[i + 1], ESC) == 0) ||
            (strcmp(arr[i], ESC) == 0 &&
             strcmp(arr[i + 1], FLAG) == 0))
        {
            // strcpy(ans[k], ESC);
            // k++;
            i++;
        }
        strcpy(ans[k], arr[i]);
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%s  ", ans[i]);
    }
}

int main()
{
    char arr[][10] = {
        "h", "i", "ESC", "ESC", "i", "l", "y", "ESC", "FLAG", "w", "i", "ESC", "ESC", "ESC", "ESC", "l", "l", "ESC", "ESC", "ESC", "FLAG", "u", "ESC", "ESC", "b", "ESC", "FLAG", "e", "ESC", "ESC", "ESC", "ESC", "m", "y", "g", "f"};
    bytestuffing(arr, 36);
}