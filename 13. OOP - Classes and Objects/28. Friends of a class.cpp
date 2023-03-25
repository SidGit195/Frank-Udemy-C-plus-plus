/*
#Friends of a class
*A function or class that has access to private class member
*And, that function of or class is NOT a member of the class it is accessing

#Function
*Can be regular non-member functions
*Can be member methods of another class

#Class
*Another class can have access to private class members

------------------------------------------------------------------------------------

#Friendship must be granted NOT taken
*Declared explicitly in the class that is granting friendship
*Declared in the function prototype with the keyword friend

#Friendship is not symmetric
    #Must be explicitly granted
    *If A is friend a of B
    *B is not a friend of A                 //Doesn't mean

#Friendship is not transitive
    #Must be explicitly granted
    *If A is friend a of B AND
    *B is a friend of C
    *then A is NOT a friend of C            //Unless specific granted

*/