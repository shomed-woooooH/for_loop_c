#include <stdio.h>
#include <math.h>
int main(){
    int n = 111;
    // scanf("%d",&n);
    int deci = 0 ;
    int power = 0;
    for (int i = n; i!=0; i/=10)
    {
        deci += i%10  * pow(2,power);

        power++;
    }
    printf("%d",deci);


    return 0;
}