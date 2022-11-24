#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int nbuscar;

struct nodo
    { int dato;
      struct nodo *liga;
    };

struct nodo *p1,*q,*t;

struct nodo* NuevoNodo(int info) {
  struct nodo *nodo1 = new(struct nodo);
  nodo1->dato = info;
  nodo1->liga = NULL;

  return(nodo1);
}

void crearListaFinal(struct nodo *p) {
  int num;
  char resp;

  printf("\nOtro nodo? ");
  scanf("%s", &resp);
  if(resp == 's' || resp == 'S')
  {  printf("\nNodo -> INFO = ");
     scanf("%d", &num);
     q = NuevoNodo(num);
     p->liga = q;
     crearListaFinal(q);
  }
  printf("\nSaliendo p = %d", p->dato);
}


void recorrer(struct nodo* p)
{   if(p != NULL)
    {   printf(" %d ", p->dato);
        recorrer(p->liga);
    }
}

void recorrer2(struct nodo* p)
{   while(p != NULL)
    {   printf(" %d ", p->dato);
        p=p->liga;
    }
}


int main()
{   int num;
printf("\n\nCrear la Lista\n");
    printf("\nroot -> INFO = ");
    scanf("%d", &num);

    p1 = NuevoNodo(num);

    crearListaFinal(p1);

    printf("\n\n<< Se termino de crear la lista >>\n\n");
    

    printf("\n\nRecorrido\n");
    recorrer(p1);
    printf("\n\nRecorrido iterativo\n");
    recorrer2(p1);
    getch();

    return 0;
}


