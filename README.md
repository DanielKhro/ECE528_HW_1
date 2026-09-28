# ECE528_HW_1
HW 1 for ECE 528

# Question 1:
a: Compiler takes the source code we generate as programmers and then converts it into machine code so it can be executed. Interpreter only does it one step at a time or one line at a time during runtime.

b: C program's main function returns an int 0 usually with successful execution.

# Question 2:
Header files in C have all the functions, macros, constants, and data types that are laid out with a program including their descriptions for anyone that views it. This provides any parameters or return values if applicable regarding those functions while ultimately making it easier to understand the overall program that uses the functions. #include is used to enable the functions described in the header file into your program.

# Question 3: 
To declare a function in C, you mention the data type if returning a value such as int or string, the name of the function, and its input data if applicable:
int test_function(data inputs);
 In the function using brackets, is the definition which defines the operation the function will conduct. A simple operation can even revolve two variabes being added such as a and b so we get:
return a + b;

The return statement is sitautional, if your function needs to return some data that your main function or another function relies on then it is required, simply it sends a value back to the code that called the funciton. It also stops the execution of that function. Functions can also have multiple return statements but like mentioned above, the moment one return statement is reached then the function returns that value and stops executing.

# Question 4:
Type casting is explicitly converting a value from one data type to another. 
Example:
int double_to_int(double a, double b)
{
    return (int)(a+b);
}

# Question 5:
A local variable is a variable defined in a specific function or block and is accessed only from that specific function.

Example local:
void function_1(void){
    int a = 0;
    a++;
}

A global variable is declared outside all functions. Due to this, it can be accessed by all functions throughout the file.

Example Global:
int a = 0;

int main(void) {
    function_1();
    return 0;
}
void function_1(void){
    a++;
}

# Question 6:
Strings are declared and initialized with char arrays as there is no actual string data type in C. An example would be char string[2] = "Hi";
The null terminator takes up the the last element hence [2] above. It's a specific element that marks the end of a string.

# Question 7:
A pointer is a variable that stores the memory address of another variable. To pass a pointer, declare whatever function paramete as a pointer and pass the variable's address using '&'.

When you pass a pointer, it prevents large copies of data just for a function to use but rather allows it to find it in memory. Another is that the function can modify the original variable. Also, they allow functions to work with arrays and dynamic memory.

# Question 8:
The '*' operator defines a pointer variable either when typing as:
int* num or int *num, both are valid. The '&' operator is used to grab the address of a variable so for example from above int *num = &value; this will give the pointer variable num the address of a integer variable "value".

# Question 9:
While loop checks the condition before running the loop to see if its true or false. A do...while loop checks it after the loop has run initially.

# Question 10:
The break statment if reached in a loop automatically exits the loop or if it is in a switch statement, exits the switch statement. Continue doesn't exit the loop but rather once reached, iterates the loop once again the moment it is reached. 

# Question 11:
Bitwise operators in C allow you to do logical functions and make decisions based off conditions. & acts as a AND, | acts a OR, ^ is a XOR, ~ is a NOT, << left shift, >> right shift.

Set = |, Clear = &, Toggle = ^, Specific bit can be either << or >>.

# Question 12:
The PxSEL0 and PxSEL1 GPIO registers are important in initializing the port pins. If both are set to 0 then the port itself is a general purpose I/O. If SEL0 = 1 and SEL1 = 0 then the primary module function is selected, if SEL1 = 1 and SEL0 = 0, then the secondary module function is selected, and lastly if both are 1, then the tertiary module function is selected. This needs to be done before performing any actions with the ports.

P1SEL0 &= ~0x81;
P1SEL1 &= ~0x81;

# Question 13:
void P1_1_and_P1_4_Init(void){
    P1SEL0 &= ~0x12;
    P1SEL1 &= ~0x12;
    P1DIR  &= ~0x12;
    P1REN  |= 0x12;
    P1OUT  |= 0x12;
}

# Question 14:
void Buttons_Init(void){
    P3SEL0 &= ~0x42;
    P3SEL1 &= ~0x42;
    P5SEL0 &= ~0x11;
    P5SEL1 &= ~0x11;
    P3DIR  &= ~0x42;
    P5DIR  &= ~0x11;
    P3REN  |= 0x42;
    P5REN  |= 0x11;
    P3OUT  &= ~0x42; 
    P5OUT  &= ~0x11;
}

# Question 15:
void LEDs_Init(void){
    P7SEL0 &= ~0xFF;
    P7SEL1 &= ~0xFF;
    P7DIR  |= 0xFF;
    P7OUT  &= ~0xFF;
}

