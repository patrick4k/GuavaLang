
## Fn
Simple functions with return types that are executed on runtime using jumps.

ex:
```
fn foobar(a: int, b: int): int {
    return a + b
}
```

## Macro
Compile time functions. Gives access to identifiers, function declaration, class declarations, expressions, and other compile time components.
For C/C++ macros, everything is text based and problems are hard to debug and follow. In rust, macros are done a lot better but lack readability
for those who are not familiar. Guava Macros should aim to read like regular code which allows for self documenting and effective compile time optimizations.

Example 1: Prints the expression and prints result
```
macro DEBUG_EXPRESSION(expr: Expression) -> Statement {
    return cout << expr.to_string() << ' = ' << expr.eval() << endl
}

main {
    DEBUG_EXPRESSION(2 + 5)
}
```
Output:
```
2 + 5 = 7
```


Example 2: Overloading dot operator for a hashmap implementation. Note overloading the dot operator should throw a warning unless annotated as unsafe.
```
unsafe override macro 
self.(child: Identifier) -> Expression<Self::ContainedType> {
    return self[child.to_string()].unwrap()
}

main {
    let map: HashMap<String, String>
    map['foobar'] = 'barraz'
    DEBUG_EXPRESSION(map.foobar)
}
```
Output:
```
map.foobar = barraz
```
