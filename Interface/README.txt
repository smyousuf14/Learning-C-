Abstract classes are the way to achieve abstraction in C++. Abstraction in C++ is the process to hide the internal details and showing functionality only. 
Abstraction can be achieved by two ways:

1. Abstract class
2. Interface

In C++ class is made abstract by declaring at least one of its functions as pure virtual function.A pure virtual function is specified by placing "= 0" in its declaration. Its implementation must be provided by derived classes.

Let's see an example of abstract class in C++ which has one abstract method draw(). Its implementation is provided by derived classes: Rectangle and Circle. Both classes have different implementation.
[Look at the example c++ file.]
