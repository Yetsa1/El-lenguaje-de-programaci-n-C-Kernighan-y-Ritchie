#include <stdio.h>

int main()
{
    float celsius, fahr;

    for(celsius = 300; celsius >= 0; celsius = celsius - 20)
    {
        fahr = ((9.0/5.0) *(celsius + 32.0f));
        printf("%3.0f\t%6.1f\n", celsius, fahr);
    }
    return (0);
}