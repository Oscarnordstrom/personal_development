(a) - case for `a` and `e` need breaks.

(b) - `ix` in the default case is not properly initialized. Better do it before the switch statement.

(c) - Each number needs its own case. Better to do `switch (digit % 2) {case 1: ; case 0: ;}`

(d) - Switch case labels need to be constant expressions, compile time known.