#include<stdio.h>
int main()
{

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j || j==(5-i-1))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
