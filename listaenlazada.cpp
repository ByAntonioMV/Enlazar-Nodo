#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int opcion=-1, num=0, nodoE=0, buscar=0, modificar=0,eliminar=0;

struct nodo{
	int dato;
	struct nodo *liga;
} *p1,*p,*q,*t;

struct nodo* NuevoNodo(int info) {
  struct nodo *nodo1 = new(struct nodo);
  nodo1->dato = info;
  nodo1->liga = NULL;

  return(nodo1);
} 
void lista_por_final (struct nodo *p){
	int op_final=0;
	printf ("\n Quieres Ingresar otro nodo?");
	printf ("\n Si = 1 No = 0");
	printf ("\n -> ");
	scanf ("%d", &op_final);
	if ( op_final== 1 ){
		printf ("Nuevo Nodo al final -> ");
		scanf ("%d", &num);
		
		q = NuevoNodo(num);
		p->liga = q;
    	lista_por_final(q);
	}
}
void lista_por_inicio(struct nodo *p){
	int op_inicio=0;
		printf ("\n Quieres Ingresar otro nodo?");
		printf ("\n Si = 1 No = 0");
		printf ("\n -> ");
		scanf ("%d", &op_inicio);
		if ( op_inicio== 1 ){
			printf ("Nuevo Nodo al inicio -> ");
			scanf ("%d", &num);
		
			q = NuevoNodo(num);
			q->liga = p;
			p1=q;
    		lista_por_inicio(p1);
    	}
}
void insertar_inicio (struct nodo *p){
	
	printf ("Nuevo Nodo al inicio -> ");
	scanf ("%d", &num);
		
	q = NuevoNodo(num);
	q->liga = p;
	p1=q;
    //insertar_inicio(p1);
}
void despues_de_x (struct nodo *p){
	
	printf ("\n Despues de que nodo quieres insertar ->");
	scanf ("%d", &nodoE);
	
	
	while(p != NULL){
		if (p->dato==nodoE){
			
			t=p;
			printf ("\n Nuevo Nodo-> ");
			scanf ("%d", &num);
		
			q = NuevoNodo(num);
			
			q->liga=t->liga;
			t->liga=q;
			
		}
		p=p->liga;
	}
}
void insertar_final (struct nodo *p){
	while(p != NULL){
		if (p->liga==NULL){
			t=p;
			printf ("\n Nuevo Nodo al final -> ");
			scanf ("%d", &num);
		
			q = NuevoNodo(num);
		}
			
		
		p=p->liga;
	}
	t->liga=q;
}
void Buscar (struct nodo *p){
	printf ("\n Ingrese el nodo a buscar->");
	scanf ("%d", &buscar);
	
	while(p != NULL){
		
		if (p->dato == buscar){
			printf ("\n El dato si se encuentra :)");
		}
		
		p=p->liga;
	}
}
void Modificar_un_dato (struct nodo *p){
	printf ("\n Ingrese el nodo a modificar->");
	scanf ("%d", &modificar);
	
	while(p != NULL){
		if (p->dato == modificar){
			t=p;
			printf ("\n Nuevo dato->");
			scanf ("%d", &modificar);
			t->dato=modificar;
			
		}
		p=p->liga;
	}
	
}
void Eliminar_el_primer_dato(struct nodo *p){
	printf ("\n Se a eliminado");
	t=p;
	p=p->liga;
	
	printf ("\n t->%d", t->dato);//////////////////////////////////
	printf ("\n p->%d", p->dato);
	delete (t);
}
void eliminar_x(struct nodo *p){
	printf ("\n Ingrese el nodo a eiminar->");
	scanf ("%d", &eliminar);
	t=p;
	while(p != NULL){
		if (p->dato==eliminar){
			q=p;
			while (t!=NULL){
				
				if (t->liga==q){
					t->liga=q->liga;	
				}
				t=t->liga;
			}
		}
		p=p->liga;
	}
}
void recorrer_recursivo(struct nodo *p){
	
	if (p1==NULL){
		printf ("\n No hay nada en la lista");
	}
	if (p != NULL){
		printf ("[%d]", p->dato);
		recorrer_recursivo(p->liga);
	}
}
void recorrer_iterativo(struct nodo *p){
	
	while(p != NULL){
		printf ("[%d]", p->dato);
		p=p->liga;
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
				p1=NULL;
				//ingresar por inicio
				printf ("\n Creando lista por inicio");
				printf ("\n [/////////////////////////////////////       ] ");
				printf ("\n Ingresa el primer dato ->");
				scanf("%d", &num);
				p1=NuevoNodo(num);
				lista_por_inicio(p1);
				break;
			}
			case 2:{
				printf ("\n Creando lista por final");
				printf ("\n [/////////////////////////////////////       ] ");
				printf ("\n Ingresa el primer dato ->");
				scanf("%d", &num);
				p1=NuevoNodo(num);
				lista_por_final(p1);
				break;
			}
			case 3:{
				//insertar inicio 
				insertar_inicio (p1);
				break;
			}
			case 4:{
				//insertar despues de x
				 
				
				despues_de_x (p1);
				break;
			}
			case 5:{
				//INSERTAR al final 
				insertar_final(p1);
				break;
			}
			case 6:{
				Buscar(p1);
				break;
			}
			case 7:{
				Modificar_un_dato (p1);
				break;
			}
			case 8:{
				Eliminar_el_primer_dato(p1);
				break;
			}
			case 9:{
				eliminar_x(p1);
				break;
			}
			case 10:{
				
				break;
			}
			case 11:{
				//recursivo 
				printf ("\n*******************************************\n ");
				recorrer_recursivo(p1);
				break;
			}
			case 12:{
				//iterativo
				printf ("\n*******************************************\n ");
				recorrer_iterativo(p1);
				break;
			}
			
		}
	}
}
