# Trash Vector / Dynamic Array / Variable Array

```
A dynamic array implementation in C
```

## Assessment

Arrays are a method for allocating memory for several elements of the same size in the form of a **contiguous** block of memory.
Arrays are useful because of their **simplicity** and **speed of indexing**, however their fixed size is an issue. Therefore we present **dynamic arrays**.

**Dynamic arrays** provide a method for resizing arrays. By allocating a new array of an increased size and moving all elements to it. The new size is determined by a resize factor. 
A frequently used resize factor value is 1.5.

## Assembly

Dynamic array struct
```
struct dynArray {
    size_t capacity; // Maximum number of elements the array can hold
    size_t ptr;      // Current number of elements in the array
    void **data;     // Pointer to the array of void pointers
};
```
header holds maximum capacity and a ptr to the last element
data itself is stored as an array of void pointers, has to be cast to needed type when used.

### API:

```
dynArray* create_Array(size_t capacity)
```
returns a dynArray struct with initial size `capacity`


```
int append(struct dynArray **varray, void *element);
```
add an element pointer to the end of array, resizes array by 1.5x if necessary

```
struct dynArray *resize_Array(struct dynArray *p_varray);
```
creates a new array of size 1.5x

```
void *get(struct dynArray *varray, size_t index);
```
returns pointer of element at specific index

```
void delete_at(struct dynArray *varray, size_t index);
```
deletes an element at a specific index, first swaps said element with last element at `ptr` 

```
void destroy_Array(struct dynArray *varray);

```
frees variable array memory

---

