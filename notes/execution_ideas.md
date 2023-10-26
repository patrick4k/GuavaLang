
## CraneLift
CraneLift is a compiler backend for rust that can abstractly compiler machine code and execute on demand (JIT). 
For guavalang, we can compile native code into machine code for fast execution. 
This will require a strong system for defining custom types that are defined with only other native types or primitives (int, float, char). 
The result of this compilation will be a function pointer that can be executed immediately. 
Rather than relying on CraneLift for the entire machine code, we "JIT" many function pointers for blocks in the guava code that do not rely on interop types. 
The function pointer will be stored in an abstract "GuavaInstruction" and appended to the scripts "InstructionList". 
Another type of Instruction we can append is the interop instructions. 
This is way we do not have to worry about converting a users custom type, defined in C++ or Rust, into the CraneLift binary code.  
These blocks of code that rely on interop types and not only native types will run slower. 
This should be obvious since interoping always requires a lot of casting and can hardly be optimized. 
To improve the speed of these executions, a conversion from a users custom type to a guava type should be streamlined. 
This way the interop code is minimized to function calls or, when applicable, these function calls can be transmuted into the CraneLift JIT. 


Before any progress can be made on this, the following needs to be completed:
1) Rust implementation of CraneLift
2) Primitive types in Guava (int, float, char)
3) Native types in Guava (custom types defined only from other native or primitive types)
4) Refine interop definitions
5) Design how data can be translated from the CraneLift machine code to the dynamically linked interop code
