#include<stdio.h>
#include <stdlib.h>

typedef struct Nod{
    int cheie;
    struct Nod *st;
    struct Nod *dr;
}Nod;

Nod *init(int cheia){
    Nod *nod=(Nod*)malloc(sizeof(Nod));
    nod->cheie=cheia;
    nod->st=NULL;
    nod->dr=NULL;
    return nod;
}

int main(){

    return 0;
}