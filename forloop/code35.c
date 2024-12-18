#include <stdio.h>
int main(){
    
    int n ;
    scanf("%d",&n);
    int prev = 0;
    int curr = 1;
    int next ;
    for (int i = 3; i <= n; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
        printf("%d ",curr);
    }
    


    return 0;
}