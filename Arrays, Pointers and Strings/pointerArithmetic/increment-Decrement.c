/*
Pointer Arithmetic - Increment/decrement :- 
    
    - If p is pointer of type T,
    - p++ increses the value of p by sizeof(T) (sizeof(T) is the amount of storage
    needed for an object of type T).
    - Similarly, p-- deceses p by sizeof(T);
    
    - Example:-

    T tab[N];
    T *p;
    int i = 4;
    p = &tab[i];
    p++; // p contains the address of tab[i + 1]

*/