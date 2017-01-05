#include<stdio.h>

int main()
{
    int x;
    printf("Simbol  | Desimal   | Hex   | Binary\n");
    printf("------------------------------------\n");

    for (x=48;x<=122; x++)
    {
        printf("ASCII %c     | %d     | %x    | Binary\n",x,x,x);
    }

    return 0;
}
