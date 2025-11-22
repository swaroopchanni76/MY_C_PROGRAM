#include<stdio.h>
enum year{
    January,
    February,
    march,
    april,
    may,
    june,
    july,
    august,
    September,
    october,
    November,
    December
};
int main(){
   enum year today;
  today=November;
  printf("%d",today);
}
