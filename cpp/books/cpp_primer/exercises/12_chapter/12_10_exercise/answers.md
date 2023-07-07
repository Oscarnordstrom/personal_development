The call is correct, due to the ptr being copied into the functin. This increments the internal counter, and finally decrements when the function goes out of scope.

```
void process(shared_ptr<int> ptr)
{
// useptr
} // ptr goes out of scope and is destroyed
```