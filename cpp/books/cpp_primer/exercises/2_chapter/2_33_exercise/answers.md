auto a = r;
a = 42;

r is a reference to an integer i, so a will become the type int. 
Therefore i will take on the value 42. 

auto b = ci;

b = 42;

the top level const will be dropped, and b will copy the value of ci and become the type 42.

auto c = cr;

c = 42;

This will change the value of ci into 42.

auto d = &i;

d = 42;

d will become an integer pointer to i. Setting d into 42 will result in an error.

auto e = &ci;

e = 42;

Same error as d.

const auto f = ci;

f = 42;

Error. f will have the type const int. When we try to change into 42, a compiler error will be raised.

auto &g = ci;

Error. &g will become a reference to a const integer. When we try to change this variable value, an error will occur.
