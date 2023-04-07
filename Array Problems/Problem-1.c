//Entering the array number from user, taking target number from user and returning the output indices of the array elements
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int usrArray[3];
    int i,j, target;
    for(i=0; i<3; i++){
        printf("Enter a number: ");
        scanf("%d", &usrArray[i]);
    }
    printf("Enter a target number: ");
    scanf("%d", &target);
    for(j=0;j<2;j++){
        for(i=1;i<3;i++){
            if(target == usrArray[i]){
                printf("You didnt perform any function you bitch at element %d\n",i);
                return 0;
            }             
            else if(usrArray[i] + usrArray[j] == target){
                printf("You performed function using indices %d %d\n", j, i);
                continue;
            }
        }   
    }
    return 0;
}