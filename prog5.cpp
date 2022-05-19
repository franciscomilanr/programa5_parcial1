/* Autor: Franciscomilan
	Escuela: Universidad uvm
	Profesor: Armando Cruz
	Materia: Programacion Estructurada
	Ciclo: 01/2022
	Realizado: 10/02/2022
	Descripcion: Quinto programa en C que simula ventas y aplica descuentos, 
	El programa simula para una tienda de Arduinos, en dicha tienda existe una promocion, si se 		llevan minimo 5 arduinos se hace el 20% de descuento, cada Arduino tiene un costo de 50.00
	El programa pedira la cantidad de arduinos y calculara el total a pagar para la materia de 		programacion estrucuturada
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Declaracion
	 int arduinos;
	 float total, descuento=0;

	//Entrada de datos
	 printf("Introduce la cantidad de arduinos: ");
	 scanf("%d",&arduinos);

	//Procedimiento
	 total=arduinos*350.0;
	 if (arduinos>=5) {
		descuento=total*0.2;
	}
	
	//Imprimir
	printf(" Subtotal:   $%10.2f\n",total);
	printf(" Descuento: -$%10.2f\n", descuento);
	printf("-----------------------------\n");
	printf(" Total:      $%10.2f", total-descuento);

	//Retorno
	return 0;
}