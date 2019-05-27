#include "tipas.h"
/* Duomenų struktūra Vektorius.
   Norint į vektorių talpinti kitokio tipo duomenis,
   tipas.h faile reikia atitinkamai pakeisti:
   typedef double/float/char Tipas.
 */

typedef struct vector Vector;

/*
 * Sukuriamas tuščias vektorius.
  Funkcija gražina nuorodą Vector tipo objektą (struktura).
  Pvz:
  Vector *v = create_vector();
*/

Vector* create_vector();

/*  Funkcija pridedą elementą į vektorių.
    Funkcijai turi būti perduodamas jau sukurtas vektorius
    bei elementas, kurį norima pridėti.
    Pvz: Norint pridėti skaičių 5.
    add_element (v, 5);
    1 parametras - jau sukurtas vektorius;
    2 parametras - elementas.
*/
void add_element(Vector *vector, Tipas value);

/*  Funkcija gražinanti ar vektorius tuščias ar netuščias .
    Funkcijai turi būti perduodamas jau sukurtas vektorius.
    Funkcija gražiną 1, jei vektorius tuščias.
    Funkcija gražiną 0, jei vektorius netuščias.
    Pvz: isEmpty(v);
    1 parametras - jau sukurtas vektorius;
*/
int isEmpty (Vector *vector);

/*  Funkcija gražinanti vektoriaus elemento reikšmę tam tikroje vietoje.
    Pvz: element_at(v, 0); Tokiu atveju gražina vektoriaus pirmą elementą.
    1 parametras - jau sukurtas vektorius.
    2 parametras - indeksas, nurodantis kurioje vietoje yra elementas.
    Jei vieta yra už vektoriaus ribų, spausdiną pranešimą:
    "Pasirinktas elementas yra už vektoriaus ribų."
*/
Tipas element_at(Vector *vector, int index);

/*  Funkcija tam tikroje vektoriaus vietoje nustato elemento reikšmę.
    Pvz: set_element_at(v, 1, 100);
    1 parametras - jau sukurtas vektorius.
    2 parametras - indeksas, nurodantis kurioje vietoje yra elementas.
    3 parametras - elemento reikšmė.
    Jei nepavyksta gauti elemento, atspausdina: Indeksas yra už vektoriaus ribų.
*/
int set_element_at(Vector *vector, int index, Tipas value);

/*  Funkcija tam tikroje pašalinanti elementą.
    Pvz: removeElementAt(v, 1);
    1 parametras - jau sukurtas vektorius.
    2 parametras - indeksas, nurodantis kurioje vietoje yra elementas.
    Jei pavyksta ištrinti elementą, gražina 1, o jei nepavyksta, gražina 0.
*/
int removeElementAt(Vector *vector, int index);

/*  Funkcija gražintanti vektoriaus dydį.
    Pvz: vector_size(v);
    1 parametras - jau sukurtas vektorius.
*/
int vector_size(Vector *vector);

/*  Funkcija tam tikroje įterpianti elementą
    Pvz: insert_element_at(v, 1, 100);
    1 parametras - jau sukurtas vektorius.
    2 parametras - indeksas, nurodantis kurioje vietoje yra elementas.
    3 parametras - elemento reikšmė.
    Jei pavyksta ištrinti elementą, gražina 1, o jei nepavyksta, gražina 0.
*/
int insert_element_at(Vector *vector, int index, Tipas value);

/*  Funkcija ištrinanti visus elementus.
    Pvz: vector_size(v);
    1 parametras - jau sukurtas vektorius.
*/
void removeAllElements (Vector *vector);

/*  Funkcija atlasivinanti vektoriaus atmintį.
    Pvz: vector_size(v);
    1 parametras - jau sukurtas vektorius.
*/
void vector_free(Vector *vector);

/*  Funkcija sumažinanti vektoriaus atmintį dviem kartais
    Ji nėra naudojamo vartotojo (Private).
*/
void vector_lower_capacity(Vector *vector);

/*  Funkcija padidinanti vektoriaus atmintį dviem kartais
    Ji nėra naudojamo vartotojo (Private).
*/
void vector_increase_capacity (Vector *vector);
