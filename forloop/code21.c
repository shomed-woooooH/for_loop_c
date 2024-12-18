#include <stdio.h>
int main(){
    int sum = 0;
    int total = 0;
    int n ;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (i!=0)
        {
            /* code */
            printf(" + ");
        }
        


        sum= (sum*10 + 9);
        printf("%d",sum);
        total += sum;
    }
    
    printf(" = %d",total);
    return 0;
}

