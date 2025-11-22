#include<stdio.h>
enum level{
    low=10,
    medium=50,
    high=100
};
int main(){
   enum level l;
   l=medium;
   printf("%d",l);
}
