#include<stdio.h>
#include<math.h>
int main(){
    int id;
    int PAN_NUMBER=01;
    int AADHAR_NUMBER=02;
    int APAAR_ID=03;
    int DRIVING_LICENSE=04;
    int PASSPORT=05;
    printf("enter a unique id");
    scanf("%d",&id);
    switch(id){
        case 1:
        printf("PAN IS verified");
        break;
        case 2:
        printf("AADHAR is verified");
        break;
        case 3:
        printf("APPAR is verifed");
        break;
        case 4:
        printf("DRIVING LICENSE is verified");
        break;
        case 5:
        printf("PASSPORT is verified");
        break;
        default:
        printf("not verified");
    }
}
