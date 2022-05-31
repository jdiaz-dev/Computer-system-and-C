/* 
    CHAPTER THREE: Variables, Data Types, and Arithmetic Expressions

        **Understanding Data Types and Constants
            --El lenguaje C ofrece cuatro tipos basicos de datos:
                int: numero entero
                float: almacena numeros de coma flotante(decimales)
                double: igual a "float" pero con dos veces mas precision
                char: almacena caracteres como: 'a', '6', ';'
                _bool:  0->true     1->false  conocido como opciones binarias

            --En C un numero, un solo caracter es conocido como una constante
            --Espresiones que contiene enteramente constantes son llamadas "expresiones constantes". Ejm: 128 + 7 - 17  , todos sus elemento son constantes

            --"Expresiones varialbes" : 128 + 7 – i  llamado  así porque su la variable i podria cambiar

        **The Integer Type int
        **Storage Sizes and Ranges
            --Cualquier tipo de dato tiene una cantidad de almacenamiento asignado para permitir almacenar un tipo de dato
            --En general la cantidad no esta definida en el lenguaje, esto tipicamente depende de tu computadora, <<<<<<<"llamado implementacion o dependiente de maquina">>>>>>, esto quiere decir que un entero puede estar almacenado en 32bits o quizas 64bits
            --Por lo tanto cuando escribas un programa no deberias asumir el tamaño de los tipos de datos
            --Pero se tiene la garantia de una minima cantidad para el almacenamiento de un dato.Por ejemplo está garantizado que un entero se almacenara en un minimo de 32bits, lo cual es el tamaño de una palabra en muchas computadoras

        **The Floating Number Type float

        **The Extended Precision Type double
            --Puede almacenar el doble de numeros significativos
            --Los mismos tipos de caracteres(%f, %,e, %g) pueden ser usados para mostrar un double

        **Type Specifiers: long, long long, short, unsigned, and signed
            --El objetivo de usar "short" es preservar el espacio de memoria
            --En algunas maquinas "short" toma la mitad del almacenameinto de un regular "int"
            --int es tratado como como un "unsigned int" por el compilador
            --"unsigned int" es tratado como "long int" por el compilador
            --"long int" es tratado como "unsigned long int" por el compilador

            --cuando usamos long, long long, short, unsigned
        
        **Working with Variables
        **Working with Arithmetic Expressions
            --Los operadores tienen prioridad
            --El resultado del tipado fuerte es que el programa se ejecuta mas rapido
            --La decision de usar float, double o long double depende de la precision que quieras en los numeros

        **The Modulus Operator
            --El operador modulus solamente trabaja con valores enteros
            --El operador modulus tiene la misma precedencia que la multiplicacion y la division

        **Integer and Floating-Point Conversions
            --En C cualquier operacion es realizada como punto flotante
            
        **The Type Cast Operator
        **Combining Operations with Assignment: The Assignment Operators
        **Types _Complex and _Imaginary




*/