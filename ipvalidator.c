#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isnumber(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int ipcheck(char *ip)
{
    int i, num, dots = 0;
    char *ptr;
    if (ip == NULL)
    {
        return 0;
    }
    ptr = strtok(ip, ".");
    if (ptr == NULL)
    {
        return 0;
    }
    while (ptr)
    {
        if (!isnumber(ptr))
        {
            return 0;
        }
        num = atoi(ptr);
        if (num >= 0 && num <= 255)
        {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
            {
                dots++;
            }
        }
        else
        {
            return 0;
        }
    }
    if (dots != 3)
    {
        return 0;
    }
    return 1;
}

int main()
{
    char ip1[] = "192.168.4.1";
    char ip2[] = "172.16.253.1";
    char ip3[] = "192.800.100.1";
    char ip4[] = "125.512.100.abc";
    if (ipcheck(ip4))
    {
        printf("valid ip");
    }
    else
    {
        printf("invalid ip");
    }
}