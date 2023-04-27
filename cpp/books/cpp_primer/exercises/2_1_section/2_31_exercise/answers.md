(a) r1 = v2 - Legal. You are allowed to set the value of  a non-constant integer to a constant valued integer. 
(b) p1 = p2 - Illegal. p1 will think that the address is modifiable, while contains an address that is constant.
(c) p2 = p1 - Legal.
(d) p1 = p3 - Illegal. Same reason as (b)
(e) p2 = p3 - Legal.
