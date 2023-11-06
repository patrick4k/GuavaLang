## Custom Operators

Instead of solving order of operations on parse time we can collect a list of operations.
An operator declaration can be defined as any combination of one or more operator characters. 
For this to work a value for precedence needs to be supplied. 
Once these declarations are resolved the compiler can use the Pratt operator method to parse the expression.

ex:
```
class complex {
    fn lhs: Self + rhs: Self -> Self {
        return Self {
            real: lhs.real + rhs.real
            img: lhs.img + rhs.img
        }
    }
    
    fn self + self -> Self {
        return Self {
            real: self.1.real + self.2.real
            img: self.1.img + self.2.img
        }
    }
    
    fn lhs: Self + rhs: int -> Self {
        return lhs + Self(rhs, rhs)
    }
    
    fn lhs: Self <=> rhs: Self -> Vec<Self> {
        return Iter(lhs, fn(prev) prev + 1, rhs).to_vec()
    }
}
```

I don't like the idea of an arbitrary value for precedence. This should be revised later.

Issues might arise in parsing as the precedence can be set differently for the same operator for different parameters. 
Maybe in a project file we can declare the operators we can overload and their precedence.
Defaults can be set as well so it is not necessary.