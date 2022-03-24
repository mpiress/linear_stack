#ifndef PILHA_H 
#define PILHA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 10

typedef struct Item{
	int val;
}Item;

typedef struct Pilha{
	Item vet[MAXTAM];
	int top;
	int base;
}Pilha;

void FPVazia(Pilha *p);
void PUSH(Pilha *p, Item d);
void POP(Pilha *p, Item *d);
void PRemove(Pilha *p, Item d);
void PImprime(Pilha *p);

#endif