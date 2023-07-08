
The definition of sorted() as Foo Foo::sorted() const & { return Foo(*this).sorted(); } would result in an infinite recursion and eventual stack overflow error due to the recursive calls to sorted() without a termination condition.
