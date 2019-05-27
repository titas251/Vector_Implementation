#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#define VECTOR_CAPACITY 10;

 struct vector {
  int size;      // dabartinis vektoriaus dydis
  int capacity;  // vektoriaus dydis atmintyje
  Tipas *data;   // masyvas laikantis elementus
};


Vector* create_vector() {
  Vector* vector = malloc(sizeof(Vector));
  vector->size = 0;
  vector->capacity = VECTOR_CAPACITY;
  vector->data = malloc(sizeof(Tipas) * vector->capacity);
  return vector;
}

int isEmpty (Vector *vector){
  if (vector->size == 0){
    return 1;
  }
  return 0;
}

void add_element(Vector *vector, Tipas value) {
  vector_increase_capacity(vector);
  vector->data[vector->size] = value;
  vector->size++;
}

Tipas element_at(Vector *vector, int index) {
if (index < vector->size && index >= 0){
    return vector->data[index];
  }
  printf("Indeksas yra už vektoriaus ribų.\n");
  exit(0);
}

int insert_element_at(Vector *vector, int index, Tipas value) {
  if (index >= 0 && index < vector->size){
    vector->size++;
    vector_increase_capacity(vector);
    for (int i = vector->size-1; i > index; i--) {
    vector->data[i] = vector->data[i-1];
    }
    vector->data[index] = value;
    return 1;
  } else return 0;
}

int set_element_at(Vector *vector, int index, Tipas value) {
  if (index >= 0 && index < vector->size){
    vector->data[index] = value;
    return 1;
  } else return 0;
}

int removeElementAt(Vector *vector, int index) {
  if (index >= 0 && index < vector->size){
  for (int i = index; i < vector->size-1; i++) {
       vector->data[i] = vector->data[i+1];
  }
  vector->size--;
  vector_lower_capacity(vector);
  return 1;
  } else return 0;
}

void vector_lower_capacity(Vector *vector) {
  if (vector->size > 0 && vector->size == vector->capacity / sizeof(Tipas)){
    vector->capacity /= 2;
    vector->data = realloc(vector->data, sizeof(Tipas) * vector->capacity);
  }
}

int vector_size (Vector *vector){
  return vector->size;
}

void vector_increase_capacity (Vector *vector) {
  if (vector->size >= vector->capacity) {
    vector->capacity *= 2;
    vector->data = realloc(vector->data, sizeof(Tipas) * vector->capacity);
  }
}

void removeAllElements (Vector *vector){
  free(vector->data);
  vector->capacity = VECTOR_CAPACITY;
  vector->size = 0;
}

void vector_free(Vector *vector) {
  free(vector->data);
}
