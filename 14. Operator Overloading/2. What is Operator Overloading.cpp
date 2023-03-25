/*
What operators can be overloaded ?

* The majority of C++'s operators can be overloaded.

* List of operators that can not be overloaded
1) Scope Resolution Operator  (::)    

2) Ternary or Conditional Operator (?:)   

3) Member Access or Dot operator  (.)    

4) Pointer-to-member Operator (.*)  

5) Object size Operator (sizeof)


In C++, basic rules for operator overloading.
1) Only built-in operators can be overloaded. New operators can not be created.

2) Arity of the operators cannot be changed.

3) Precedence and associativity of the operators cannot be changed.

4) Overloaded operators cannot have default arguments except the function call operator () which can have default arguments.

5) Operators cannot be overloaded for built in types only. At least one operand must be used defined type.

6) Assignment (=), subscript ([]), function call (“()”), and member selection (->) operators must be defined as member functions

7) Except the operators specified in point 6, all other operators can be either member functions or a non member functions.

8 ) Some operators like (assignment)=, (address)& and comma (,) are by default overloaded

*/