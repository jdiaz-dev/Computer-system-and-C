
#include <stdio.h>

int main(void){

    int number, numberHelp, potencia, restar;

    printf("======TRANSFORMAR NUMEROS A LETRAS======\n");
    printf("Ingresa un numero: ");
    scanf("%i", &number);

    if(number == 0){
        printf("zero ");
    }else{
        while(number > 0){
            numberHelp = number;
            potencia = 0;
            while(numberHelp > 10){ 
                numberHelp /= 10;
                potencia++;
            }

            //primer digito extraido
            restar = numberHelp;

            //iteracion segun la potencia
            for(int x = 1; x <= potencia; x++){
                restar *= 10;
            }

            //modificamos numero
            number -= restar;

            switch(numberHelp){
                case 1:
                    printf("one ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 7:
                    printf("seven ");
                    break;
                case 8:
                    printf("height ");
                    break;
                default:
                    printf("nine ");
            }
        }
    }
}

/* int main(void){

    int number, helpNumber, digitRight;

    printf("======TRANSFORMAR NUMEROS A LETRAS======\n");
    printf("Ingresa un numero: ");
    scanf("%i", &number);

    while(number != 0){
        digitRight = number % 10;
        number /= 10;

        switch(digitRight){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("height ");
                break;
            default:
                printf("nine ");

        }
       
    }
} */