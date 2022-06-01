#include <stdio.h>
// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void ipcheck(char *ip)
{
    int i, num, dots = 0;
    char *ptr;
    ptr = strtok(ip, ".");

    num = atoi(ptr);
    if (num >= 0 && num <= 127)
    {
        printf("class A\n");
    }
    if (num >= 128 && num <= 191)
    {
        printf("class B\n");
    }
    if (num >= 192 && num <= 223)
    {
        printf("class C\n");
    }
    if (num >= 224 && num <= 239)
    {
        printf("class D\n");
    }
    if (num >= 240 && num <= 255)
    {
        printf("class E\n");
    }

}

int main()
{
    char ip1[] = "192.168.4.1";
    char ip2[] = "10.16.253.1";
    ipcheck(ip2);
    return 0;
}