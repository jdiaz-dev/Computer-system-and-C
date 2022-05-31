
// calculadora solucion encontrada en git-hub

//NO EJECUTA. Ver ejercicio4.2, ahi si ejecuta
/* #include <stdio.h>

int main(void){

    float number, acumulador;
    char operador;
    
    printf("Inicia el calculo:\n\n");
    scanf("%f %c", &number, &operador);
        
	acumulador = 0;
    while(operador != 'E'){  

        switch (operador){
        case '+':
            printf("R. parcial = %f\n\n", acumulador += number);
            printf("Entro\n");
            break;
		case '-':
			printf("R. parcial = %f\n", acumulador -= number);
			break;
		case '*':
			printf("R. parcial = %f\n", acumulador *= number);
			break;
		case '/':
			if((int) number == 0){
				printf("La division por cero no es posible\n\n");
			}else{
				printf("R. parcial= %f\n", acumulador /= number);
			}
			break;
        default:
            printf("feo\n\n");
            break;
        }
        
        scanf("%c %f", &operador, &number);
    }
	printf("R. final = %f\n\n", acumulador);
    return 0;
} */




//SOLUCION DE GIT - HUB

#include <stdio.h>

int main(void)
{
	float number, accumulator;
	char operator;

	printf("Begin Calculations\n\n");
	scanf("%f %c", &number, &operator);

	//if operator isn't equal to "E", then the calculator will continue
	accumulator = 0;
	while (operator != 'E') {

		//"switch" check the operation entered
		switch (operator) {
		case 'S':
			printf("= %f\n\n", accumulator = number);
			break;
		case '+':
			printf("= %f\n\n", accumulator += number);
			break;
		case '-':
			printf("= %f\n\n", accumulator -= number);
			break;
		case '*':
			printf("= %f\n\n", accumulator *= number);
			break;
		case '/':
			if (number == 0)
				printf("Division by zero\n\n");
			else
				printf("= %f\n\n", accumulator /= number);
			break;
		default:
			printf("Uknown operator\n\n");
			break;
		}
		scanf("%f %c", &number, &operator);
	}
	
	printf("= %f\n\n", accumulator);
	printf("End of Calculations\n\n");

	return 0;
}