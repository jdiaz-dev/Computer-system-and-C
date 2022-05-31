
//este programa analiza que operacion quieres hacer

#include <stdio.h>

int main(void)
{
    float num1, num2;
    char operacion;

    printf("Ingresa tu expresion: ");
    scanf("%f %c %f" , &num1, &operacion, &num2);

    if(operacion == '+'){
        printf("%.2f\n", num1 + num2);
    }else if(operacion == '-'){
        printf("%.2f\n", num1 - num2);
    }else if(operacion == '*'){
        printf("%.2f\n", num1 * num2);
    }else if(operacion == '/'){
        if(num2 == 0){
            printf("No esta permitido dividir por %i.", num2);
        }else{
            printf("%.2f\n", num1 / num2);
        }
        
    }else{  //captura cualquier caida
        printf("OPERADOR DESCONOCIDO.");
    }

    return 0;
    
}



