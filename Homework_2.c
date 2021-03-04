#include <stdio.h>

int main (void)
{
    int x, y, z, a[10];
    z=7;    //Si quieres probar con algun numero cambia este valor por algun numero del 1 al 10
    
    while(z>0)
            {
                a[x]=z%2;
                z/=2;
                ++x;
            }
    for(y=x-1; y>=0; --y)
    printf("%d", a[y]);
    printf("/z");
    return 0;
}