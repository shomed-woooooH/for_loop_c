#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x,y;
        if(i%2==0){
            x = 0;
            y = 1;
        }else{
            x = 1;
            y = 0;

        }

        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 1 )
            {
                printf("%d",x);
            }
            else
            {
                printf("%d",y);
            }
        }

        printf("\n");
    }

    return 0;
}
