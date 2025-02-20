
#include "t-vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct test_struct {
  int id;
  char *name;
  size_t index;
};

int main() {

  struct dynArray *arr = create_Array(3);
  if (arr == NULL) {
    fprintf(stderr, "Failed to create array\n");
    return 1;
  }

  char *name = "name-test";
  struct test_struct a = {5, name, 0};
  struct test_struct b = {23, name, 0};
  struct test_struct c = {60, name, 0};

  append(&arr, &a);
  append(&arr, &b);
  append(&arr, &c);

  printf("Before deletion:\n");
  printf("index 0: %d\n", (*(struct test_struct *)get(arr, 0)).id);
  printf("index 1: %d\n", (*(struct test_struct *)get(arr, 1)).id);
  printf("index 2: %d\n", (*(struct test_struct *)get(arr, 2)).id);

  delete_at(arr, 1);

  printf("\nAfter deletion:\n");
  printf("index 0: %d\n", (*(struct test_struct *)get(arr, 0)).id);
  printf("index 1: %d\n", (*(struct test_struct *)get(arr, 1)).id);

  struct test_struct d = {66, name, 0};
  append(&arr, &d);

  printf("\nAfter appending new object:\n");
  printf("index 0: %d\n", (*(struct test_struct *)get(arr, 0)).id);
  printf("index 1: %d\n", (*(struct test_struct *)get(arr, 1)).id);
  printf("index 2: %d\n", (*(struct test_struct *)get(arr, 2)).id);

  struct test_struct *e = (struct test_struct *)get(arr, 5);
  if (e != NULL) {
    printf("index 5: %d\n", e->id);
  }

  destroy_Array(arr);

  return 0;
}
