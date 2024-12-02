#include <stdio.h>
#include <stdlib.h>

typedef struct Nod
{
    int cheie;
    struct Nod *st;
    struct Nod *dr;
} Nod;

Nod *init(int cheia) // initializare arbore
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

void preorder(Nod *crtNod) // traversare in pre-ordine
{
    if (crtNod == NULL)
    {
        return;
    }

    printf(" %d ", crtNod->cheie);
    preorder(crtNod->st);
    preorder(crtNod->dr);
}

void inorder(Nod *crtNod) // traversare in in-ordine
{
    if (crtNod == NULL)
    {
        return;
    }

    inorder(crtNod->st);
    printf(" %d ", crtNod->cheie);
    inorder(crtNod->dr);
}

void postorder(Nod *crtNod) // traversare in post-ordine
{
    if (crtNod == NULL)
    {
        return;
    }

    postorder(crtNod->st);
    postorder(crtNod->dr);
    printf(" %d ", crtNod->cheie);
}

int adancime(Nod *crtNod) // calculare adancime arbore
{
    if (crtNod == NULL)
    {
        return 0;
    }

    int stanga = adancime(crtNod->st);
    int dreapta = adancime(crtNod->dr);

    if (stanga > dreapta)
    {
        return stanga + 1;
    }
    else
    {
        return dreapta + 1;
    }
}

void levelDisplay(Nod *crtNod, int level)// afisarea nodurilor unui nivel
{
    if (crtNod == NULL)
    {
        return;
    }

    if (level == 1)
    {
        printf("%d ", crtNod->cheie);
    }
    else if (level > 1)
    {
        levelDisplay(crtNod->st, level - 1);
        levelDisplay(crtNod->dr, level - 1);
    }
}

void levelOrder(Nod *radacina)
{
    int d = adancime(radacina);

    for (int i = 0; i <= d; i++)
    {
        levelDisplay(radacina,i);
    }
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

    printf("2.Traversare in-ordine: \n");
    inorder(radacina);
    printf("\n----------------------------\n");

    printf("3.Traversare post-ordine: \n");
    postorder(radacina);
    printf("\n----------------------------\n");

    printf("4.Traversare pe nivel.\n");
    levelOrder(radacina);
    printf("\n----------------------------\n");

    return 0;
}