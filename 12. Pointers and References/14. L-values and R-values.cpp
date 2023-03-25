/*
# l-values
* values that have names and are addressable        //location in memory,   left side of =
* modifiable if they are not constants

int x {100};        // x is an l-value
x = 1000; 
x = 1000 + 20;

string name;        //name is an l-value
name = "Frank";

100 = x;                //100 is not an l-value
(1000 + 20) = x;        //1000 + 20 is not an l-value

string name;
"Frank" = name;         //"Frank" is not an l-value


-----------------------------------------------------------------------------------------------------


# R-values
* r-value (non-addressable and non-assignable)
    * A value that's not a l-value
           *On the right-hand side of an assignment expression
           *A literal
           *A temporary which is intended to be non-modifiable


int x {100};                // 100 is a r-value
int y = x + 200;            //(x + 200) is a r-value

string name;
name = "Frank";             // "Frank" is a r-value

int max_num = max(20,30)    //max(20,30) is a r-value


r-value can be assigned l-value explicitly.
y = 100;        // r-value 100 assigned to l-value y 
x = x + y       // r-value (x+y) assigned to l-value x


*The references we've used are l-value references
    *Because we are referencing l-values

int &ref1 = x;              // ref1 is reference to l-value
ref1 = 1000;

int &ref2 = 100;            // Error 100 is an r-value
*/ 