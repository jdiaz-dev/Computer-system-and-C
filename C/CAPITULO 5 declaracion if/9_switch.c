
//programa que evalua la expresion  valor operador valor

#include <stdio.h>

int main(void){
    
    float value1, value2;
    char operador;

    printf("Ingresa tu expresion: ");
    scanf("%f %c %f", &value1, &operador, &value2);

    switch (operador){
        case '+':
            printf("%.2f", value1 + value2);
            break;
        case '-':
            printf("%.2f", value1 - value2);
            break;

        //puede soportar multiples casos
        case 'x':
        case '*':
            printf("%.2f", value1 * value2);
            break;
        case '/':
            switch ( (int) value2){
                case 0:
                    printf("No esta permitido dividir por cero");
                    break;
                default:
                    printf("%.2f", value1 / value2);
                    break;
            }
            break;
        default:
            printf("operador desconocido: %c", operador);
            
    }
}