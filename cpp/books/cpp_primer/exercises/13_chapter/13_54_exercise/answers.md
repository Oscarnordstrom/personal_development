If we defined a move-assignment operator for the HasPtr class but did not
change the copy-and-swap operator, the move-assignment operator would not be
used, and the copy-and-swap operator would be used instead.