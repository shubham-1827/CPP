/*
when the function is called the memory is alloted to the variables for the function 
inside the stack , this is called static memory allocation.
and, these variable storage is deleted by the compiler as the function call ends.

but, we can also allocate memory on the heap.
this memory is allocated dynammically during the runtime , this process is called 
dynamic memory allocation.
unlike, static memory once a memory is created on heap it can only be deleated by the user, compiler can't delete this memory.

this memory has no name but we can access this memory using a pointer.
*/
#include <iostream>
using namespace std;

int main() {
    //creating memory on heap
    int *num_ptr = new int;

    *num_ptr = 10;

    cout << num_ptr << endl;
    cout << *num_ptr << endl;

    //deleting this memory.
    delete num_ptr;
	
    //you can still acess and change the values at the deleted location,
    //but, dont do it, it may cause errors.
    cout << num_ptr << endl;
    cout << *num_ptr << endl;
    *num_ptr = 20;
    cout << *num_ptr << endl;
	
    return 0;
}

