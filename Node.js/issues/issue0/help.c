#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//erorr: Segmentation fault (core dumped) -> https://stackoverflow.com/questions/19641597/what-is-segmentation-fault-core-dumped
//to run this code -> https://stackoverflow.com/questions/10409032/why-am-i-getting-undefined-reference-to-sqrt-error-even-though-i-include-math
int main(char *argv[]){
    float k;
    printf("this is consumer\n");
    k=(float) sqrt(atoi(argv[1]));
    // printf("%s\n",k);
    return 0;
}