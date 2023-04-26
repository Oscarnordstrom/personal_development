(a) - Legal. Non constant assignment to a constant integer. 
(b) - Illegal. Low level constant is not the same. First pointer has the type int while the other one has const int. The inverse would be legal.
(c) - Illegal. Same reason as previous question.
(d) - Legal. Low level references are the same type.
(e) - Illegal. Const pointer may not be changed.
(f) - Illegal. May not change the underlying value because it is declared as const.
