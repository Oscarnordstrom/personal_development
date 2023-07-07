1. When you copy a TextQuery object, a shallow copy is made. The underlying data structure, which stores the lines of the input text, is not duplicated. Instead, the copied TextQuery object shares the same data structure with the original object.
This is because the TextQuery class uses a shared pointer to manage the data structure. The shared pointer keeps track of the reference count, ensuring that the data is not deleted as long as there is at least one active reference to it.
Assigning TextQuery objects:

2. Assigning one TextQuery object to another involves copying the shared pointer and updating the reference count.
The shared pointer assignment operator increments the reference count of the new TextQuery object and decrements the reference count of the old TextQuery object.
If the reference count of the old TextQuery object reaches zero, meaning there are no more active references to the underlying data structure, it will be automatically deleted.
Destroying TextQuery objects:

3. When a TextQuery object is destroyed, the destructor is called. It decrements the reference count of the shared pointer.
If the reference count reaches zero, indicating that there are no more active references, the destructor deletes the underlying data structure.
Copying QueryResult objects:

4. The QueryResult class contains a shared pointer to the TextQuery object and a set of line numbers that match a given query.
Copying a QueryResult object performs a shallow copy, meaning the shared pointer and the set of line numbers are shared between the original and the copied object. The reference count of the shared pointer is incremented.
Assigning QueryResult objects:

5. Assigning one QueryResult object to another performs a shallow copy, similar to copying.
The shared pointer and the set of line numbers are shared between the two objects, and the reference count of the shared pointer is updated accordingly.
Destroying QueryResult objects:

6. When a QueryResult object is destroyed, its destructor is called. It decrements the reference count of the shared pointer.
If the reference count reaches zero, indicating that there are no more active references, the destructor deletes the underlying TextQuery object. The deletion of the TextQuery object will also trigger the destruction of the shared pointer in the QueryResult object.