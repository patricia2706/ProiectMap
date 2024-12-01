#include <stdio.h>
#include <stdlib.h>

typedef struct Nod
{
    int cheie;
    struct Nod *st;
    struct Nod *dr;
} Nod;

Nod *init(int cheia)
{
    Nod *nod = (Nod *)malloc(sizeof(Nod));
    nod->cheie = cheia;
    nod->st = NULL;
    nod->dr = NULL;
    return nod;
}

void insert(Nod *crtCopil, Nod *parinte, int cheia)
{
    if (crtCopil == NULL) // inserarea nodului
    {
        Nod *nod = init(cheia); // se creeaza un nod nou folosind cheia data
        if (cheia >= parinte->cheie)
        {
            parinte->dr = nod;
        }
        else
        {
            parinte->st = nod;
        }
        return;
    }

    if (cheia >= crtCopil->cheie) // controleaza directia recursiunii (parcurgerea arborelui)
    {
        insert(crtCopil->dr, crtCopil, cheia);
    }
    else
    {
        insert(crtCopil->st, crtCopil, cheia);
    }
}

void preorder(Nod *crtNod)
{
    if (crtNod == NULL)
    {
        return;
    }

    printf(" %d ", crtNod->cheie);
    preorder(crtNod->st);
    preorder(crtNod->dr);
}

int main()
{
    Nod *radacina = init(10);
    insert(radacina, radacina, 4);
    insert(radacina, radacina, 12);
    insert(radacina, radacina, 2);
    insert(radacina, radacina, 3);
    insert(radacina, radacina, 11);

    printf("---------------------------\n");
    printf("1.Traversare pre-ordine: \n");
    preorder(radacina);
    printf("\n--------------------------\n");

    return 0;
}