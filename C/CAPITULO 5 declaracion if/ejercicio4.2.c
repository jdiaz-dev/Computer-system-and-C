
//algoritmo de mi calculadora

#include <stdio.h>

int main(void){
    float number, acumulador = 0;
    char operacion;

    printf("Bienvenido a mi calculadora.\n\n");
    scanf("%f %c", &number, &operacion);    //primero numero luego operador 

    while(operacion != 'E'){
        
        switch(operacion){
            case '+':
                printf("R. parcial = %f\n\n", acumulador += number);
                break;
            case '-':
                printf("R. parcial = %f\n\n", acumulador -= number);
                break;
            case '*':
                printf("R. parcial = %f\n\n", acumulador *= number);
                break;
            case '/':
                switch ( (int)number){
                    case 0:
                        printf("No se puede dividir por cero.\n\n");
                        break;
                    default:
                        printf("R. parcial = %f\n\n", acumulador /= number);
                        break;
                }
                break;
            default:
                printf("Operador desconocido.\n\n");
                break;
        }
        scanf("%f %c", &number, &operacion);
        //para salir del bucle el bucle el numero debe de estar separado de la E (Ejm. 4 E)
    }

    printf("R. final = %f", acumulador);
}

