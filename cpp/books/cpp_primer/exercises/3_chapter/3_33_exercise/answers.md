Inside a function, this would be undefined behaviour and those values could potentially be the value of the memory address before the array was allocated in that memory range. 

Outside a function, the values would be 0.