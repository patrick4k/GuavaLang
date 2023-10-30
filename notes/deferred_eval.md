
## Deferred Eval
std::IDeferredEval should be an interface that describes a class that can hold a unevaluated state until the evaluate function is called.
An example of a class that may inherit deferred eval would be a symbolic equation, the equation is given time to develop until it is evaluated so simplifications are made only once for performance purposes.
Another example of a class that may inherti deferred eval would be a matrix class. 
Matrix multiplication operates from right to left unlike other operations.
A deferred state can allow the matrix class to handle left to right evaluation until a valid sequence is inputted.

When designing, a majority of the work for deferred evaluation should be computed compile time. 
Possible implementations of std::IDeferredEval may take a template parameter std::IDeferredState<ParentClass> that holds data for the class while it is in its defeered state.
