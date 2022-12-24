A program can have myriad functions but there is just one of those functions that the program absolutely cannot exist without. The answer is: The main( ) function.

Understanding the structure of a program is crucial in order to truly know what a main function does. 

Every program has an entry and an exit point. An entry point denotes the beginning of the program’s execution, the exit point is where the program would terminate.

The main( ) function is crucial for any program as it is the entry point of execution. Simply put, the main( ) function is the first function that  the interpreter executes, regardless of its position in a program.

Additionally, the main function also has several exceptional characteristics like:

i) It cannot be overloaded.
ii) It cannot be used recursively.
iii) It cannot be static

iv) Since main is a keyword, it cannot be used for another purpose.
 

int main( ), void main(), int main(void)  are nothing but function definitions of main().

 

What is int main()?
int main( ) is one of the function definitions in which a value of int or integer data type is returned to the main function post completion of the program. Though any number can be returned, we usually use 0 as a standard constant to denote the successful completion or execution of a program. The purpose of returning a value 0 to main is for the Operating System(OS) to understand that the program has been executed successfully. For the operating system, a return of 0 means successful execution, anything else indicates that is a problem that needs to be fixed for the proper execution of the code.

Let us take the ‘Hello world!’ program as an example to illustrate the working of int main( ) using both C and C++

 

#include<stdio.h> //headerfiles

int main()

{

printf(” Hello World!\n“);

return 0;  //returning 0 of data type int 

}

 

#include<iostream.h> //headerfile

int main()

{

cout<<” Hello World!\n“;

return 0;  //returning 0 of data type int 

}

 

Output:

 

Hello World!

 

Note that in the above code the return 0 statement is optional because the compiler automatically does the job of implicitly returning 0 to the Operating System (OS) when no syntactical errors are encountered and the program runs without any interruption.

However, it is a good programming practice to include the return 0 statement in one’s program so as to ensure the proper flow of control.

 

The return statement is particularly useful when a  program B’s execution depends on the successful execution of program A; in that case, using the return value OS identifies and decides whether to proceed with the execution of B or not. 

What is void main()?
In the function void main( ) , as you must know, void denotes the return type of the main method, this implies that this function does not return any value as void literally means null.

In this method, one cannot confirm the status of a program’s execution as the function does not return any value during execution. 

 

#include <stdio.h>

 

void main()

{

    printf(“Hello World”);

}

The void main( ) function only works in C and is not supported by C++ i.e, substituting the int main( ) statement with void main ( ) would result in an error in C++

Also, for Unix-based systems you would have to use int main() as your main function; as the Unix OS expects a return value in order to determine the successful execution of the program.

What is int main(void)?
This definition is similar to int main(), with only one change being the number of arguments that can be passed in this case is null to main.

Hence when your main function is not taking any argument, it is preferable to use int main(void).

#include<stdio.h> //headerfiles

int main(void) // accepts no arguments as void

{

printf(” Hello World!\n“);

return 0;

}

 

In this function definition, if the main function is successfully executed then the compiler returns 0. However, if an error is encountered then the compiler returns an error code.

 

In C, int main() can be called with any number of arguments, but int main(void) can only be called with zero or no argument. Though int main( ) and int main (void) do not have much difference, it is still recommended that using int main(void) is a good practice in C.

If we talk about C++ on the other hand, both int main ( ) and int main (void) are one and the same.

To summarize kindly note the following points:

The void main( ) type of function definition should be avoided since this type is only acceptable on IDE running on a Windows-based system(does not function on Unix, for example).  It also goes against the programming standards for C++ language as the Operating System(OS) would not know if a program is successfully executed or not.
The int main( ) and int main(void): These two function definitions are the preferred type since they are as per the programming standards, the Operating System(OS) knows the program state and it compiles on both Unix-based and Windows-based IDE. int main(void) should be ideally used, as main generally does not take any argument.