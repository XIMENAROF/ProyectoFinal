#include <stdio.h> //bibliotecas
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string.h>

using namespace std;

void menu(){//función para mostrar menú 
  printf("\t\t\t\t----------VENUS NAILS-------------\n\n\n\n");
  printf("\t\t\t\t--------------Menu---------------\n\n\n\n");
	printf("\tIngrese porfavor:\n\n\n");
   printf(" 1) Registro de cliente.\n\n");//
   printf(" 2) Esmaltado semipermanente de 20 dias........$130.\n\n");
   printf(" 3) Esmalte 20 dias+ calcio............$150\n\n");
    printf(" 4) Baño de acrilico............$180\n\n");
	printf(" 5) Extension con gel............$180\n\n");
	printf(" 6) Aplicacion de Acrilico en TIP......$200\n\n");
	printf(" 7) Aplicacion de Acrilico en Escultura......$250\n\n");
	printf(" 8) Manicure combinado........$80\n\n");
	printf(" 9) Exfoliacion.....$30\n\n");
    printf(" 10) Cristaleria....$1c/u\n\n");
	printf(" 11) Diseño mano Alzada.....$20c/u\n\n");
	printf(" 12) Diseño 3D........$20c/u\n\n");
	printf(" 13) Diseño con stickers.......$8c/u\n\n");
	printf(" 14) Efectos......$10c/u\n\n");
	printf(" 15) Retoque acrilico 2 semanas\n\n");
	printf(" 16) Retoque acrilico 3+semanas\n\n");
	printf(" 17) Retiro gel.......$50\n\n");
	printf(" 18) Retiro acrilico......$70\n\n");
}
	
	
  float insertaLista(int opcion){ 
  float costo;
  opcion = opcion - 2;
  char cadena; //[52]
  char menuArreglo [52] [52] = {"Esmaltado semipermanente de 20 dias","Baño de acrilico"};
  switch(opcion){
    case 0:  //Opción 2 en realidad, que es el primero de la lista
    costo = 130;
    break;
    case 1:
    costo = 150;
    break;
    case 2:
    costo = 180;
    break;
     case 3:
    costo = 180;
    break;
     case 4:
    costo = 220;
    break;
     case 5:
    costo = 260;
    break;
     case 6:
    costo = 80;
    break;
     case 7:
    costo = 30;
    break;
     case 8:
    costo = 1;
    break;
     case 9:
    costo = 20;
    break;
     case 10:
    costo = 20;
    break;
     case 11:
    costo = 8;
    break;
     case 12:
    costo = 10;
    break;
     case 13:
    costo = 200;
    break;
     case 14:
    costo = 230;
    break;
     case 15:
    costo = 50;
    break;
     case 16:
    costo = 80;
    break;
    default:
    printf("Lo sentimos, no se pudo agregar el objeto solicitado");
    break;
}
    
    return costo;
  }
   
   
 void funcUsuario () {
 	
   printf("\n*****Llene el pequeño registro porfavor***");
	 char nombre[30];
	 float cel;
	 printf("\nIngrese su nombre:  ");
	 scanf ("%s",&nombre);
	 printf("\nIngrese su numero de contacto porfavor");
	 scanf("%f",&cel);
  menu();
  int salida;
  int numArticulo;
  float total = 0;
  //char listaDeCompras = [];  
  while (salida != 0){
    printf("Inserte el numero del servicio que se le realizo:   ");
    scanf("%i",&numArticulo);
    total = total + insertaLista(numArticulo);
	printf("¿Desea comprar algún otro artículo? SÍ=[1] NO=[0]:  ");
    scanf("%i",&salida);
  }
  printf("\nGracias por su visita: %s ",nombre);
  printf("\nEl total de su compra es de:  %f pesos porfavor", total);
  


}

void funcEmpleado(){ //Poner lo que hace un empleado , registro de egresos
    
     printf("\n***Hola***\n\n");
     float gastos;
     printf("Ingrese todos los gastos que se relizaron :   \n\n");
     scanf("%f",&gastos);
     printf("\n\nLos gastos totales fueron de: %f\n\n",gastos);
 }

    int main(void) {
	system("COLOR 7D"); //cambiar el color 
    inicio:

  
  int op;
printf("\n \t\t\t\t\t\t\t\tRobledo Fuentes XIMENA\n Proyecto final.\n\n\n");
printf("\n\t**       **  *****  **    *  *   *  ****  ");
printf("\n\t**       **  *      * *   *  *   *  **** ");
printf("\n\t **      **  ****   *   * *  *   *     *  ");
printf("\n\t ***     **  *      *    **  *   *     *  ");
printf("\n\t  ******     *****  *    **  *****  ****  ");

printf("\n\t  **     * ******  ****** *     ****   ");
printf("\n\t  * *    * **   *    *    *     ****   ");
printf("\n\t  *  *   * ******    *    *        *   ");
printf("\n\t  *    * * **   *    *    *        *   ");
printf("\n\t  *     ** **   *  ****** ***** ****   ");


  printf("\n\n--Inserte 1 para ingresar como usuario\n--Inserte 2 para ingresar como empleado\n>>");
  scanf("%i",&op);
  int salir = 0;
   
  switch(op){
    case 1:
      funcUsuario();
      salir = 1;
    break;
    case 2:
      funcEmpleado();
      salir = 1;
    break;
    default:
      printf("Opción no válida, intente de nuevo");
  }  
  
  return 0 ;
}


