#include <stdio.h>

main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celcius = fahr + 273;
        printf("%d :  %d\n", fahr, celcius);
        fahr = fahr + step;
    }
}