#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,delta;
printf("podaj wspolczynnik a: ");
scanf("%f",&a);
printf("podaj wspolczynnik b: ");
scanf("%f",&b);
printf("podaj wspolczynnik c: ");
scanf("%f",&c);
delta =(b*b)-(4*a*c);
if
        (a==0)
        {
        printf("to nie rownanie kwadratowe\n");
        }
else
        {

        if
                (delta>0)
                {
                printf("pierwsze rozwiazanie x: %2f\n",(-b-sqrt(delta))/(2*a));
                printf("drugie rozwiazanie x: %2f\n",(-b+sqrt(delta))/(2*a));
                }
        else
        {

                if
                        (delta == 0)
                        {
                        printf("jedno rozwiazanie x: %2f\n",-b/(2*a));
                        }
                else
                        {
                        if
                        (delta < 0)
                        {
                        printf("brak rozwiazan\n");
                        }
                }
        }
}

return 0;
}
