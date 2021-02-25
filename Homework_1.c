#include <stdio.h>

int main(){

    int x;
    int state = 0;
    int y;
    int z = 0;
    char strong[7]={"strong"};

    while((x = getchar()) != EOF){    //seguira el ciclo mientras se cumpla la funcion hasta que se termine
        if(x == '<'){
            state == 0;
                for(y = 0; (x = getchar()) == strong[y]; y++)  //ponemos el ciclo for para crear un bucle
                if (y != 6){
                while( (x = getchar()) != '>' )       //seguira el ciclo mientras se cumpla la funcion y parara hasra que detecte >
            }
            else {                                //se ponen las condiciones
                while( x != '>' )                  // en caso de que se encunetre > parara y mandara 0
                ++ z;
            if( (x = getchar()) == '<'){
                state == 1;
                while( (x = getchar()) != '>' )
                z++;
            }
        }
        if(x != '<' && x!= '>'){
            z = 0;
        }
           if(state == 0 && z == 0 && y != 6){
            putchar(x);
            z = 0;
           }
           if(y == 6){
                if(x == ' '){
                    printf("_");                //aqui intente poner en los espacios el simbolo "_" pero no me salio
                    x = getchar();
                }
            putchar(x);
           }
        if ( x == '>' && y == 6){
            y=0;
        }
    }
}
