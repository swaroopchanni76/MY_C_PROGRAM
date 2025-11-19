#include<stdio.h>
int main(){
    int swaroop[9];
    int sum=0;
    printf("enter a elements\n");
    scanf("%d",& swaroop);
    for( int i=0;i<7;i++){
        scanf("%d",& swaroop[i]);
        sum+=swaroop[i];
        
    }
    printf("%d",sum);
}
