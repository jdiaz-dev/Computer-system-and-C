
//juego game over

#include <stdio.h>

int main(void)
{
    int gameOver = 1;
    char jugadorAmover = 'O';

    if(gameOver == 1)
        if(jugadorAmover == 'Y')
            printf("Te mueves tu");
    else//este else pertenece al ultimo if, no al primero, si queremos que pertenesca al primero debemos usar llaves
        printf("Game Over");
    
}