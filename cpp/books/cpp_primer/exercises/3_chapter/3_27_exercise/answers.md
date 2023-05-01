(a) - Illegal. `buf_size` must be of type constexpr.

(b)  - Legal.

(c) - Illegal. txt_size() must be a constexpr type since arrays sizes are known at compile time.

(d) - Illegal. There is no room for an "end of sequence" escape character `\0`