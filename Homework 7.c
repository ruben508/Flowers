#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct fecha
{
    int dia;
    int mes;
    int anio;
};

typedef struct
{
    char nombreAsistencia[MAX];
    int creditos;
    float nota;
}registroAsistencia;

struct registroEmpleados {
    char dni[MAX];
    char nombre[MAX];
    char primerApellido[MAX];
    char segundoApellido[MAX];
    struct fecha fechaNacimiento;
    registroAsistencia *listaAsistencia;
    int numAsistencia;
} ;


struct registroEmpleados listaEmpleados[100];

int cargar_datos(struct registroEmpleados lista[], int i) {
    int  tamanio, j;
    printf("Nombre: ");
    scanf("%s", lista[i].nombre);
    getchar();
    printf("PrimerApellido: ");
    scanf("%s", lista[i].primerApellido);
    getchar();
    printf("SegundoApellido: ");
    scanf("%s", lista[i].segundoApellido);
    getchar();
    printf("Fecha: ");
    scanf("%d %d %d", &(lista[i].fechaNacimiento.dia),
          &(lista[i].fechaNacimiento.mes),
          &(lista[i].fechaNacimiento.anio));
    getchar();
    printf("Asistencia: ");
    scanf("%d", &tamanio);
    lista[i].numAsistencia = tamanio;
    lista[i].listaAsistencia = (registroAsistencia *)malloc(tamanio*sizeof(registroAsistencia));
    for (j = 0; j < tamanio; j++) {
        getchar();
        printf("Ingrese la hora de entrada %d\n", j);
        scanf("%s %d %f", lista[i].listaAsistencia[j].nombreAsistencia,
              &(lista[i].listaAsistencia[j].creditos),
              &(lista[i].listaAsistencia[j].nota));
    }

    return 0;
}

void imprimirDatos(struct registroEmpleados lista[], int numeroEmpleados) {
    int i, j, tamanio;
    for (i = 0; i < numeroEmpleados; i++) {
        printf("%s %s %s %02d/%02d/%d\n", lista[i].nombre,
               lista[i].primerApellido, lista[i].segundoApellido,
               lista[i].fechaNacimiento.dia,
               lista[i].fechaNacimiento.mes,
               lista[i].fechaNacimiento.anio);
        tamanio = lista[i].numAsistencia;
        for(j = 0; j < tamanio; j++){
            printf("%s %d %.2f\n",
                   listaEmpleados[i].listaAsistencia[j].creditos,
                   listaEmpleados[i].listaAsistencia[j].nota);
        }
    }
}


int main() {
    char seguir = 'Y';
    int i;
    while (i < 100) {
        cargar_datos(listaEmpleados, i);
        i++;
        printf("Continuar (S/N)?\n");
        getchar();
        scanf("%c", &seguir);
        if (seguir != 'Y' || seguir != 'y')
            break;
    }
    imprimirDatos(listaEmpleados, i);
    return 0;
}
