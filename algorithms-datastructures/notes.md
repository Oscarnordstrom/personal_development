# Algorithms

## Insertion sort
- Best case: $O(n)$
- Worst case: $O(n^2)$
- Split array into two subarrays, left subarray starting with size 2 containing the two left-most elements. 
- Utilises loop invariant that left subarray is always sorted.
- Each iteration, increase the left subarray size by one and move new element into sorted position.

## Loop invariant
Property of an algorithm.
- Initialization: It is true prior to the first iteration of the loop.
- Maintenance: If it is true before an iteration of the loop, it remains true before the next iteration.
- Termination: The loop terminates, and when it terminates, the invariant, along with the reason that the loop terminated - gives us a useful property that helps us show that the algorithm is correct.

## RAM-model (Random access machine)
- Computer model to easily analyse algorithms
- Instructions are sequential
- Each instruction takes same amount of time

