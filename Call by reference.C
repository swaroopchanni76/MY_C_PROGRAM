#include <stdio.h>
#include<string.h>
int main() {
    int x,y,temp,*p1,*p2;
    printf("Enter the value of x,y\n");
    scanf("%d%d",&x,&y);
    p1=&x;
    p2=&y;
    printf("Before swapping is %d and %d\n",x,y);
    temp=*p1;
    *p1=*p2;   //CALL BY REFERENCE
    *p2=temp;
    printf("The swap value is %d and %d",x,y);
}
