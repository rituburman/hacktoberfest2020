A stack is an Abstract Data Type (ADT), commonly used in most programming languages. It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile of plates, etc.

Stack operations may involve initializing the stack, using it and then de-initializing it. Apart from these basic stuffs, a stack is used for the following two primary operations −



 1)push() − Pushing (storing) an element on the stack.

  A simple algorithm for Push operation can be derived as follows −

begin procedure push: stack, data

   if stack is full
      return null
   endif
   
   top ← top + 1
   stack[top] ← data

end procedure




 2)pop() − Removing (accessing) an element from the stack.
A simple algorithm for Pop operation can be derived as follows −

begin procedure pop: stack

   if stack is empty
      return null
   endif
   
   data ← stack[top]
   top ← top - 1
   return data

end procedure



When data is PUSHed onto stack.

To use a stack efficiently, we need to check the status of stack as well. For the same purpose, the following functionality is added to stacks −




 3)peek() − get the top data element of the stack, without removing it.

 Algorithm of peek() function −

begin procedure peek
   return stack[top]
end procedure



 4)isFull() − check if stack is full.

  Algorithm of isfull() function −

begin procedure isfull

   if top equals to MAXSIZE
      return true
   else
      return false
   endif
   
end procedure



 5)isEmpty() − check if stack is empty.

  Algorithm of isempty() function −

begin procedure isempty

   if top less than 1
      return true
   else
      return false
   endif
   
end procedure
