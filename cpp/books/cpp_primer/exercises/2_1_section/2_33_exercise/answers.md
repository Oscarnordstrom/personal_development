Illegal. Pointer addresses can be assigned to the constant 0, which is not the value of the variable `null`, which is an integer. It depends on what the end goal is, if it were to point the pointer to `null`, or to create a null pointer.

`int null = 0, *p = &null;`

or

`int null = 0, *p = nullptr`
