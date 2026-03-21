# Arrays
Continuous block of memory <br>
If an array has an index s, & <br>
     memory starts at index a, & <br>
     each element occupies b bytes, then <br>
     i'th element starts at a + b(i - s) & <br>
     ends at a + b(i - s + 1) - 1; <br>

# Matrices
Typically represented as multi-dimensional arrays. <br>
Most common ways to store: <br>
    1. Row-major order: {{1, 2, 3}, {3, 4, 5}} <br>
    2. Column-major order: {{1, 3}, {2, 4}, {3, 5}} <br>
They can also be stored in a single dimensional array as follows <br>
    1. {1, 2, 3, 4, 5, 6}; <br>
    2. {1, 4, 2, 5, 3, 6}; <br>
