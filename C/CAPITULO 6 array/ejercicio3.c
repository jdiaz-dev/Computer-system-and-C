
//programa que en el que puedes calificar el raiting de programas de television
#include <stdio.h>

int main(void){
    int raitingCounters[11], response;

    for(int index = 1; index < 11; index++){
        raitingCounters[index] = 0;
    }

    int amountOfQualifications;
    printf("How many califications want to do: ");
    scanf("%i", &amountOfQualifications);

    for(int counter = 1; counter <= amountOfQualifications; counter++){
        printf("Your response is: ");
        scanf("%i", &response);
        if(response == 999){
            break;
        }else if( 1 < response || response <= 10 ){
            ++raitingCounters[response];
            
        }else{
            printf("Your response is bad\n");
        }
    }

    printf("Raiting     Number of responses\n");
    printf("-------     -------------------\n");

    for(int index = 1; index < 11; index++){
        printf("%2i          %2i\n", index, raitingCounters[index]);
    }

}