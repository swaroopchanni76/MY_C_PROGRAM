#include<stdio.h>
int main(){
    int p,t,r,si;
    printf("enter the value of principle\n");
    scanf("%d\n",&p);
    printf("enter a value of time\n");
    scanf("%d\n",&t);
    printf("enter a rate of intrest\n");
    scanf("%d\n",&r);
    si=(p*t*r)/100;
    printf("simple intrest=%d\n",si);
}
