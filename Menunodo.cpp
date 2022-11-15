#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int opcion=-1, num=0;

struct nodo{
	int dato;
	struct nodo *liga;
} *p1,*q,*t;

struct nodo* NuevoNodo(int info) {
  struct nodo *nodo1 = new(struct nodo);
  nodo1->dato = info;
  nodo1->liga = NULL;

  return(nodo1);
} 
void lista_por_final (struct nodo *p){
	int op=0;
	printf ("\n Quieres Ingresar otro nodo?");
	printf ("\n Si = 1 No = 0");
	printf ("\n -> ");
	scanf ("%d", &op);
	if ( op== 1 ){
		printf ("Nuevo Nodo -> ");
		scanf ("%d", &num);
		
		q = NuevoNodo(num);
		p->liga = q;
    	lista_por_final(q);
	}
}

main (){
	
	while (opcion != '\0'){
		printf ("\n--------------------------------------------");
		printf ("\n Crear Lista");
		printf ("\n  1 Insertar al inicio");
		printf ("\n  2 Insetar al final");
		printf ("\n Insetar");
		printf ("\n  3 Un nodo al inicio");
		printf ("\n  4 Un nodo despues de x");
		printf ("\n  5 Un nodo al final");
		printf ("\n 6 Buscar");
		printf ("\n 7 Modificar un dato");
		printf ("\n Eliminar");
		printf ("\n  8 Eliminar el primer dato");
		printf ("\n  9 Eliminar el nodo con el dato x");
		printf ("\n  10 Eliminar el ultimo nodo");
		printf ("\n Recorrer");
		printf ("\n  11 Recursivo");
		printf ("\n  12 Iterativo");
		printf ("\n 0 Salir");
		
		printf ("\n Ingrese una opcion:");
		scanf ("%d", &opcion);
		
		switch (opcion){
			case 1:{
				
				break;
			}
			case 2:{
				printf ("\n [/////////////////////////////////////       ] ");
				printf ("\n Creando lista:");
				scanf("%d", &num);
				p1=NuevoNodo(num);
				lista_por_final(p1);
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				
				break;
			}
			case 9:{
				
				break;
			}
			case 10:{
				
				break;
			}
			case 11:{
				
				break;
			}
			case 12:{
				 
				break;
			}
			
		}
	}
}
