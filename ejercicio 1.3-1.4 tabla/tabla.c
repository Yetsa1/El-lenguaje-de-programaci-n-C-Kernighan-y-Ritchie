#include <stdio.h>
/*ºC = (5/9) (ºF-32)*/
int main()
{
    float   celsius, fahr; /*he declarado una variable float para acercarme a la precición de la temp de fahr ya que contiene número fraccionales/decimales*/
    int lower, upper, step;

    lower = 0; /*límite inferior de la tabla de temp*/
    upper = 300; /*límite superior de la tabla de temp*/
    step = 20; /*tamaño del incremento*/
    fahr = lower;

    printf("Mi Tabla de Temperaturas\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.0f\n", fahr, celsius);
        fahr = fahr + step;
    }
}