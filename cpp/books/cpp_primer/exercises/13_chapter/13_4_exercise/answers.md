1. Point local = arg; - This line invokes the copy constructor to create a new Point object local and initialize it with the arg object.

2. *heap = local; - Here, the copy assignment operator is used rather than the copy constructor. It assigns the values of the local object to the *heap object. If you want to use the copy constructor explicitly, it would be *heap = Point(local);.

3. Point pa[4] = { local, *heap }; - This line utilizes the copy constructor twice. It creates an array pa of Point objects and initializes the first two elements with local and *heap. The copy constructor is called for each element being initialized.