/*
Add/Subtract integer from pointer:- 

    - If p is pointer of type T and n is an integer, p+n increses the value of 
    p by n*sizeof(T).
    - Similarly, p-n decreases p by n*sizeof(T).

    - Example

    T tab[100];
    T *p;
    p = tab;
    p = p + 5; // P contains the address of tab[5]. 
*/