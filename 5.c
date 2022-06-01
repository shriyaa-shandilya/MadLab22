#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void operate(char *ip, int subnet)
{
    int masks[4] = {0}, i;
    int iparr[4];
    char *ptr;
    for (i = 0; i < subnet / 8; i++)
    {
        masks[i] = 255;
    }
    masks[i] = (~(~0 << (subnet % 8))) << (8 - (subnet % 8));

    // converting string to integer
    ptr = strtok(ip, ".");

    i = 0;
    while (ptr)
    {
        iparr[i++] = atoi(ptr);
        ptr = strtok(NULL, ".");
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%d\n", masks[i], iparr[i]);
    }
    printf("first address is \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d.", masks[i] & iparr[i]);
    }
    printf("\nlast address is \n");
    for (int i = 0; i < 4; i++)
    {
        int pt = ((~masks[i] << subnet) >> subnet) ;
        if (masks[i] == 0)
        {
            pt = 255;
        }
        
        printf("%d.",pt | iparr[i]) ;
    }

    printf("\ntotal number of addresses alloted is %d",1<<(32-subnet));
}

int main()
{

    char ip1[] = "192.168.4.1";
    char ip2[] = "10.16.253.1";
    int subnet = 26;
    operate(ip2, subnet);
    return 0;
}