#include <stdio.h>

main()
{
    float kilometer, mile;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    kilometer = lower;

    while (kilometer <= upper)
    {
        mile = kilometer * 0.621;

        printf("%3.2f :  %6.2f\n", kilometer, mile);
        kilometer = kilometer + step;
    }
}