#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int sum  = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i*i);
        sum+=i*i;
    }
    printf("\n%d",sum);
    
    


    return 0;
}