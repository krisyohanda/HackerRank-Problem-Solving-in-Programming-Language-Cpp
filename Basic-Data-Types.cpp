#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int bilangan_bulat; long panjang;char karakter;float bilangan_desimal;double ganda;
    //Input
    scanf("%d %ld %c %f %lf", &bilangan_bulat, &panjang, &karakter, &bilangan_desimal, &ganda);
    //Output
    printf("%d \n", bilangan_bulat);
    printf("%ld \n", panjang);
    printf("%c \n", karakter);
    printf("%f \n", bilangan_desimal);
    printf("%lf \n", ganda);
    return 0;
}