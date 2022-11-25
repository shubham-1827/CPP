the main is a function from where the execution of program starts.
A c++ program must contain only 1 main.
'return 0' is used to denote the exit of main with no errors. 

we use int main beacause in return 0 we are returning an integer data type.

main can be of two types:
1. int main() {
	//your code.

    return 0;
}

2. for creating command line applications.
 	int main (int argc, char *argv[]) {
        //your code

		return 0;
    }

important points:

1. main is not a keyword in c/c++.

2. main is not predefined, it is predeclared.
(predeclared mean c++ knows there is function called main)

3. your program is linked to a small runtime library which constitutes the true starting point of your program.
and main function is hardcoded in this library to do so.

4. your program runs because you provide your code inside main.