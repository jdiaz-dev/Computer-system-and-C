
function invertirNumero(num){

    let resultado = [], digitRight

    while(num != 0){

        /* if(num < 0 && primera == 0){

        } */
        digitRight = num % 10
        resultado.push(digitRight)
        num = Math.floor(num / 10)
    }

    return resultado
}
/* console.log(invertirNumero(-123456)) */

num = -112344
for(let x = -20; x < 0; x++){
    console.log(Math.floor(num /= 10))
}