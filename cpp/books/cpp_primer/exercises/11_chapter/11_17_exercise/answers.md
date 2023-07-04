copy(v.begin(), v.end(), inserter(c, c.end())); OK

copy(v.begin(), v.end(), back_inserter(c)); Error, no `push_back` function.

copy(c.begin(), c.end(), inserter(v, v.end())); Ok

copy(c.begin(), c.end(), back_inserter(v)); Ok