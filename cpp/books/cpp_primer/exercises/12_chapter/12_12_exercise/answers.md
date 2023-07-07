```
void process(shared_ptr<int> ptr)
{
// useptr
} // ptr goes out of scope and is destroyed

auto p = new int();
auto sp = make_shared<int>(); 
```

- (a) process(sp); Legal, a copy of sp is created which increases the reference pointer.
- (b) process(new int()); Illegal, implicit conversions from raw pointers to shared are is not allowed.
- (c) process(p); Same as b
- (d) process(shared_ptr<int>(p)); same as a.