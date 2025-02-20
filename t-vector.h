
#ifndef DYNARRAY_H
#define DYNARRAY_H
#define RESIZE_CONSTANT 1.5


#include <stddef.h>

struct dynArray {
    size_t capacity; // Maximum number of elements the array can hold
    size_t ptr;      // Current number of elements in the array
    void **data;     // Pointer to the array of void pointers
};

// Function prototypes

struct dynArray *create_Array(size_t capacity);

struct dynArray *resize_Array(struct dynArray *p_varray);

int append(struct dynArray **varray, void *element);

void *get(struct dynArray *varray, size_t index);

void delete_at(struct dynArray *varray, size_t index);

void destroy_Array(struct dynArray *varray);

#endif // DYNARRAY_H
