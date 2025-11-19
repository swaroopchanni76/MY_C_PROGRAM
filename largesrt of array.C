#include<stdio.h>
int main(){
    int n[6]={1,3,4,7,5,6,};
    int max=n[0];
    for( int i=1;i<6;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    printf("%d",max);
}
