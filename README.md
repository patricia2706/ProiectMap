## Traversarea arborilor binari ordonati
### **Descriere generală**
Programul implementează un arbore binar în limbajul C, utilizând structuri de date și funcții specifice pentru inițializare, inserarea nodurilor și traversările: pre-ordine, in-ordine, post-ordine și pe nivel. Acest arbore binar organizează nodurile astfel încât valorile mai mici decât cheia unui nod să fie plasate în subarborele stâng, iar valorile mai mari sau egale să fie în subarborele drept.

### **Platforma software utilizată**

 -   **Limbaj**: C
 -   **Compilator**: GCC
 -   **Mediu de dezvoltare**: Visual Studio Code
 -   **Biblioteci utilizate**:
    -   `<stdio.h>` pentru operațiuni de intrare-ieșire.
    -   `<stdlib.h>` pentru alocare dinamică de memorie.

 -   **Structura de bază**
  Reprezintă un nod al arborelui binar, care conține o valoare (`cheie`) și două pointere către subarborele stâng și drept.
```c
     typedef struct Nod {
           int cheie;
           struct Nod *st;
           struct Nod *dr;
       } Nod;
```
    
-   **Funcționalități implementate**
    
    -   **`Nod* init(int cheia)`**  
        Inițializează un nod cu cheia specificată, setând pointerii `st` și `dr` la `NULL`.
        
    -   **`void insert(Nod* crtCopil, Nod* parinte, int cheia)`**  
        Inserează un nou nod în arbore conform regulilor arborelui binar de căutare.
        
    -   **Traversări**:
        
        -   `preorder(Nod* crtNod)` - Traversare în pre-ordine (Rădăcină, Stânga, Dreapta).
        -   `inorder(Nod* crtNod)` - Traversare în in-ordine (Stânga, Rădăcină, Dreapta).
        -   `postorder(Nod* crtNod)` - Traversare în post-ordine (Stânga, Dreapta, Rădăcină).
    -   **`int adancime(Nod* crtNod)`**  
        Calculează adâncimea (înălțimea) arborelui.
        
    -   **Traversare pe niveluri**:
        -   `levelDisplay(Nod* crtNod, int level)` - Afișează toate nodurile de pe un anumit nivel.
        -   `levelOrder(Nod* radacina)` - Afișează nodurile din arbore nivel cu nivel.

	Sigur, iată o documentație structurată pentru programul dat:

----------

### **Documentație pentru programul de gestionare a unui arbore binar**

----------

### **Descriere generală**

Programul implementează un arbore binar în limbajul C, utilizând structuri de date și funcții specifice pentru operațiuni precum inițializarea, inserarea nodurilor și diferite tipuri de traversări (pre-ordine, in-ordine, post-ordine și pe niveluri). Acest arbore binar organizează nodurile astfel încât valorile mai mici decât cheia unui nod să fie plasate în subarborele stâng, iar valorile mai mari sau egale să fie în subarborele drept.

----------

### **Platforma software utilizată**

-   **Limbaj**: C
-   **Compilator**: Orice compilator compatibil cu limbajul C (de exemplu, GCC, Clang, MinGW).
-   **Mediu de dezvoltare**: Codul poate fi scris și rulat într-un IDE (de exemplu, Code::Blocks, Visual Studio Code) sau într-un terminal care suportă compilare C.
-   **Biblioteci utilizate**:
    -   `<stdio.h>` pentru operațiuni de intrare-ieșire.
    -   `<stdlib.h>` pentru alocare dinamică de memorie.

----------

### **Structura programului**

1.  **Structura de bază**
    
    c
    
    Copiază codul
    
    `typedef struct Nod {
        int cheie;
        struct Nod *st;
        struct Nod *dr;
    } Nod;` 
    
    Reprezintă un nod al arborelui binar, care conține o valoare (`cheie`) și două pointere către subarborele stâng și drept.
    
2.  **Funcționalități implementate**
    
    -   **`Nod* init(int cheia)`**  
        Inițializează un nod cu cheia specificată, setând pointerii `st` și `dr` la `NULL`.
        
    -   **`void insert(Nod* crtCopil, Nod* parinte, int cheia)`**  
        Inserează un nou nod în arbore conform regulilor arborelui binar de căutare.
        
    -   **Traversări**:
        
        -   `preorder(Nod* crtNod)` - Traversare în pre-ordine (Rădăcină, Stânga, Dreapta).
        -   `inorder(Nod* crtNod)` - Traversare în in-ordine (Stânga, Rădăcină, Dreapta).
        -   `postorder(Nod* crtNod)` - Traversare în post-ordine (Stânga, Dreapta, Rădăcină).
    -   **`int adancime(Nod* crtNod)`**  
        Calculează adâncimea (înălțimea) arborelui.
        
    -   **Traversare pe niveluri**:
        
        -   `levelDisplay(Nod* crtNod, int level)` - Afișează toate nodurile de pe un anumit nivel.
        -   `levelOrder(Nod* radacina)` - Afișează nodurile din arbore nivel cu nivel.

----------

### **Modalitate de rulare**

1.  **Compilarea programului**: Folosiți un compilator C pentru a compila fișierul sursă. De exemplu:

    `gcc arbore_binar.c -o arbore_binar` 
    
2.  **Executarea programului**: După compilare, rulați programul executabil:
    
    `./arbore_binar` 
    
3.  **Rezultate așteptate**: Programul va afișa pe ecran:
    
    - Arborele inainte de traversari
    - Exemplu:
    
    ![arboreInainte](https://github.com/user-attachments/assets/b5c34c2b-3867-49d8-970d-f97d4956cb57)
    -   Traversările în pre-ordine, in-ordine și post-ordine.
    -  Exemplu: 
    
    ![traversari](https://github.com/user-attachments/assets/8ab5e739-799f-4b85-86ed-2a04d8e6bde2)