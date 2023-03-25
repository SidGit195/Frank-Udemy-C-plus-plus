/*
#Constructors & Class initialization

*A Derived class inherits from its base class

*The Base part of the Derived class must be initialized before the Derived class is initialized

*When a Derived Class is initialized
    *Base class constructor is executes then
    *Derived class constructor executes

----------------------------------------------------------------------------------------------------

#Destructors

*Class Destructors invoked in the reverse order as constructors

*The Derived part of the Derived class MUST be destroyed BEFORE the Base class destructor is invoked

*When a Derived object is destroyed
    *Derived class Destructor executes then
    *Base class Destructor executes
    *Each Destructor should free resources allocated in it's own constructors

you can see example from balagurusawmy or geeksforgeeks

----------------------------------------------------------------------------------------------------

Constructors & Class initialization


*/