
## Conversions
A conversion function can be implmented into a class for explicit or implicit conversion.

ex:
```
class Map<Key, Value> {
    
    Vec<Tuple<Key, Value>>(self) {
        let v: _ReturnType
        for let key = self.keys().first; key++; key != self.keys().last {
            v << (key, self[key])
        }
        return v
    }
    
    implicit
    Self(v: Vec<Tuple<Key, Value>>) {
        let m: _ReturnType
        for let item in v {
            m[item.1] = item.2
        }
    }
}

main {
    let m: Map<String, String> = (
        ('Foo', 'Bar')
        'Raz', 'Fizz'; 'Barraz', 'Doe'
    )
}
```

The conversion definition is not annotated with 'fn' since a function can have a name that is the same as a typename. 
This means we cannot annotate a conversion with 'macro' either, thus all conversions are executed on runtime unless in a constexpr context.
