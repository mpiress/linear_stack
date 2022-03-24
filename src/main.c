#include "pilha.h"

int main()
{
	Pilha p;
	Item aux;

	FPVazia(&p);
	
	aux.val = 10;
	PUSH(&p, aux);
	aux.val = 20;
	PUSH(&p, aux);
	aux.val = 30;
	PUSH(&p, aux);

	PImprime(&p);

	aux.val = 20;
	PRemove(&p, aux);
	aux.val = 30;
	PRemove(&p, aux);
	
	PImprime(&p);

	return 0;
}
