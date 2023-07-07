Without the explicit keyword, the user would be unable to use implicit initialization such as 
```
StrBlob myBlob = {"apple", "orange", "banana"};
```
Which makes the class less ergonomic to use. 

With the `explicit` keyword, we would be required to explicitly initialize the class. This makes the class less ambiguous to use.