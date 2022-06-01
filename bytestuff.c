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
        if (strcmp(arr[i], ESC) == 0 || strcmp(arr[i], FLAG) == 0)
        {
            strcpy(ans[k], ESC);
            k++;
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
        "h",
        "i",
        "ESC",
        "i",
        "l",
        "y",
        "FLAG",
        "w",
        "i",
        "ESC",
        "ESC",
        "l",
        "l",
        "ESC",
        "FLAG",
        "u",
        "ESC",
        "b",
        "FLAG",
        "e",
        "ESC",
        "ESC",
        "m",
        "y",
        "g",
        "f"};
    bytestuffing(arr, 26);
}