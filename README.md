#T9

This is a simply realization of T9 input method.

There is a factor, it sets a class for each symbol of unsing alphabet. Every symbol of factor's class discribe it.

Factor have to be done before loading dictionary.

##Dictionary
It's use a dictionary (frequency dictionaty) for learning. 

Each word in dictionary have to be dicribed by two values:
```
WORD INTEGER_INDEX_OF_USAGE
```

Example:
```
a 100
the 200
go 150
```

##Instalation
The reuqirents is the ncurses library (for online input).

You may rewrite the `main.cpp` file and do not use this additional.

