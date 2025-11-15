#include <stdio.h>
int powerRaised(int a, int b){
    if(b==0) return 1;
    int result = a * powerRaised(a,b-1);
    return result;
}
int main(){
    int a,b;
    printf("Enter the base = ");
    scanf("%d",&a);

    printf("Enter the power = ");
    scanf("%d",&b);

    int result = powerRaised(a,b);
    printf("%d to the power %d = %d",a,b,result);
}