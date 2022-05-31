#include <stdio.h>

int main(void)
{
    /* --------------------todos los numeros son constantes */
    float num1 = 125.8;     //125.800003 es mostrado en pantalla, esto es devido a la inexactitud, por como es                              representado los numeros dentro de la computadora
                            //Por lo tanto los numeros de tipo punto flotante no pueden ser expresados de forma exacta en la memoria de la computadora
                            //un punto flotante o un double simempre mostrara 6 decimales redondeados



    float num2 = -.0001;    // C permite omitir los numeros antes del punto

    float num3 = 12.7e4;     //tambien se puede expresar un numero punto flotante con notacion cientifica
                            //el valor antes de la e es llamado "mantissa", mientras el valor que le sigue es el exponente
                            //la e separa a la mantissa del exponente, esta mantissa puede ser escrita en mayuscula y minuscula

    float num4 = 0x0.3p-10;   //Numero HEXADECIMAL flotante
                            //este numero consiste en 0x seguido de 1 o mas digitos hexadecimales, seguido por un signo binario exponente

    printf("Primer numero de punto flotante = %f\n", num1);

    printf("Segundo numero de punto flotante = %f\n", num2);

    //flotante con notacion cientifica
    printf("Numero punto flotante con notacion cientifica = %f\n", num3);

    //mostrara el numero con el exponente
    printf("Numero punto flotante con el exponente MOSTRANDO la notacion cientifica = %e\n", num3);

    //con %g decidira si mostrara el punto flotante normal o en punto flotante con notacion cientifica, esta desicion es basada en el valor del exponente, si es menor que -4 o mayor que 5 usara %e, encaso contrario usara %f
    //la resultado mas estetico es %g(maquina decide)
    printf("Numero punto flotante con notacion cientifica(ella decide) = %g\n", num3);

    //numero HEXADECIMAL flotante
    printf("Numero HEXADECIMAL flotante con notacion cientifica = %g\n", num4);

    return 0;

}