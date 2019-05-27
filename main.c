#include <stdio.h>
#include "vector.h"

int main() {
  Vector *v = create_vector();

  if (isEmpty(v)){
    printf("Vektorius yra tuščias.\n");
  } else {
    printf("Vektorius yra netuščias.\n");
   }

  add_element (v, 50);
  add_element (v, 60);
  add_element (v, 70);
  set_element_at (v, 2, 100);

  for (int i = 0; i < vector_size(v); i++){
  printf("%d\n", element_at(v, i));
  }

  removeElementAt(v, 0);
  printf("%d\n", element_at(v, 0));

  insert_element_at (v, 0, 999);
  printf("%d\n", element_at(v, 0));

  removeAllElements(v);

  if (isEmpty(v)){
    printf("Vektorius yra tuščias.\n");
  } else {
    printf("Vektorius yra netuščias.\n");
  }
  vector_free (v);
}
