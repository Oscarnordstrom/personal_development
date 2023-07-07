(a): Does not work, not a pointer in argument.

(b): Does not work, object is not allocated in dynamic memory.

(c): This does work, pointer to object in dynamic memory.

(d): Does not work, cannot build from reference. Also in stack allocated memory.

(e): This does work, uses pointer from dynamically allocated object.

(f): This does compile, but will result in bugs.