```
A dynamic array implementation in C
```

# Assessment

Arrays are a method for allocating memory for several elements of the same size in the form of a **contiguous** block of memory.
Arrays are useful because of their **simplicity** and **speed of indexing**, however their fixed size is an issue. Therefore we present **dynamic arrays**.

**Dynamic arrays** provide a method for resizing arrays. By allocating a new array of an increased size and moving all elements to it. The new size is determined by a resize factor. 
A frequently used resize factor value is 1.5.

# Assembly

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
