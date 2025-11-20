#include<stdio.h>
#include<string.h>
   int main(){
     char abd[18];
     printf("enter your string\n");
     scanf("%s",&abd );
     printf("before concat %s\n", abd);
     strcat(abd, " alien");
     printf("after concat %s\n", abd);
}
