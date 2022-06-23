#include<stdio.h>
#include<conio.h>

int main(){
    int opcion = 0, contador = 1;
    float n1, n2, resultado;

    while (opcion!=5){
        printf("\nEjecucion de programa #: %i", contador);
        printf("\n\nQue operacion deseas realizar\n[1] Suma \n[2] Resta \n[3] Multiplicacion \n[4] Division\n[5] Salir \nDigite su opcion: ");
        scanf("%i", &opcion);
        contador++;
        switch (opcion){
            case 1:{
                printf("\nIngresa Primer Numero: ");
                scanf("%f", &n1);
                printf("\nIngresa Segundo Numero: ");
                scanf("%f", &n2);
                resultado = n1+n2;
                printf("\nEL RESULTADO DE LA SUMA ES: %.2f",resultado);
            }break;
            case 2:{
                printf("\nIngresa Primer Numero: ");
                scanf("%f", &n1);
                printf("\nIngresa Segundo Numero: ");
                scanf("%f", &n2);
                resultado = n1-n2;
                printf("\nEL RESULTADO DE LA RESTA ES: %.2f",resultado);
            }break;
            case 3:{
                printf("\nIngresa Primer Numero: ");
                scanf("%f", &n1);
                printf("\nIngresa Segundo Numero: ");
                scanf("%f", &n2);
                resultado = n1*n2;
                printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %.2f",resultado);
            }break;
            case 4:{
                printf("\nIngresa Primer Numero: ");
                scanf("%f", &n1);
                printf("\nIngresa Segundo Numero: ");
                scanf("%f", &n2);
                resultado = n1/n2;
                printf("\nEL RESULTADO DE LA DIVISION ES: %.2f",resultado);
            }break;
            case 5:{
                printf("\nSaliendo del programa");
                contador = 4;
            }break;
            default:{
                printf("\nCaracter u opcion no valida");
                opcion = 5;
            }
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
