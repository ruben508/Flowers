#include <stdio.h>
#include <conio.h>

main (){
    int num, x, cont=0;
    for(num=2;num<=30;num++){ //comienza un conteo hasta el 30 y se incrementara los numeros de uno en uno
        for(x=2;x<=num;x++) //generara los numeros del 2 hasta la variable num
            if(num%x==0) //si el valor de la variable num dividido entre x =0 entonces el contador aumentara
            cont++;
        if(cont==1)     //si el contador vale 1 entonces se va a imprimir el numero primo
            printf("%d-",num); //se imprime
        cont=0; // se reinicia el analisis y vuleve a empezar

    }
    getch(); //solo detiene el programa
}
