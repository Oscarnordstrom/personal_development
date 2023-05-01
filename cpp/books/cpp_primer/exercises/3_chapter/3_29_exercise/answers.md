Arrays are statically sized, known at compile time. This makes them less dynamic than vectors. In cases where the size is unknown until runtime, arrays are trickier to work with.

Arrays cannot be assigned through copy.

Size of arrays must be calculated. (With c++17, through template can use function std::size)