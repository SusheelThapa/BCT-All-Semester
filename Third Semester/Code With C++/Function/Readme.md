# Function in C++

## Syntax

    

        returnType functionName(parameter1,parameter2,....)
        {
            //function body
        }

```C++
Example:

    int add(int num_one, int num_two)
    {
        int sum = num_on+num_two;
        return sum;
    }

```

## Parts of Function

### Function Prototype

This is used to inform the compiler that we are going to use this function. And you will find this function before you finishing reading all lines of code.

Position in Program : Generally, it is written above `main()` and below `#include <....>`

### Function Call

It is simply using the created function when we need and this process is called function call.

Position in Program: Inside any function in program

### Function Body

It is the overall content of the body. Simply, it has lines of code that is executed when function is called.

Position in Program: Generally, it is written below `main()`

*Note: Position of function Prototype and Body can be anywhere in Function. If function body is written above main. Then, it isn't necessary to declare function prototype.*

Example:
```C++

    Method One: With Function Protype

    //Header files and other

    int sum(int , int); //Function prototype

    int main()
    {
        //other code

        sum(4,6); //Function Call

        //other code
    }

    //Function body
    int sum(int a, int b)
    {
        return a+b;
    }

```

```C++

    Method Two: Without Function Prototype

    //Header files and other

    //Function body
    int sum(int a, int b)
    {
        return a+b;
    }

    int main()
    {
        //other code

        sum(4,6); //Function Call

        //other code
    }

```

## Types of Function Call

### Call by Value

- Here, copy of variable is passed to the function.

- If changes are done to the passed variable then it won't reflect in variable that is used for calling function.

```C++
Example:

#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 9, b = 7;

    cout << "Before Function call, value of a and b is " << a << " and " << b << endl;

    swap(a, b);

    cout << "After Function Call, value of a and b is " << a << " and " << b << endl;

 
    return 0;
}

```

### Call by Reference

* Here, address of variable is passed to the function.

* If changes are done to the passed variable then it will reflect in variable that is used for calling function.

* It can be done with two ways:

    - Using Pointer
    - Using Reference Variable
```C++
Using Pointer

        #include <iostream>
        
        using namespace std; 
        
        void swap(int *a, int *b)
        {
        
            int temp = *a; 
            *a = *b; 
            *b = temp; 
        
        }
        
        int main()
        {
        
            int a = 9, b = 10; 
        
            cout << "Before Function call, value of a and b is " << a << " and " << b << endl; 
        
            swap(&a, &b); 
        
            cout << "After Function Call, value of a and b is " << a << " and " << b << endl; 
        
            return 0; 
        
        }

```
    

 ```C++
Using Reference Variable

        #include <iostream>
        using namespace std;

        void swapRefVar(int &a, int &b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        int main()
        {

            int c = 90, d = 79;

            cout << "Before Function call, value of a and b is " << c << " and  "<< d << endl;

            swapRefVar(c, d);

            cout << "After Function Call, value of a and b is " << c << " and "<< d << endl;

            return 0;
        }
```

## Parameters in Function Call

### Actual Parameters:

Value that are used to call the function are call Actual Parameter.

### Formal Parameters

Value that are used to receive the value that are called using function call are called Formal Parameter.

```C++
Actual and Formal Parameter

    #include <iostream>
    using namespace std; 
    
    int sum(int a, int b) // a and b are Formal paramter
    {
        return a+b; 
    }
    
    int main(){
    
        int num1=10, num2=20; 
        sum(num1, num2); //num1 and num2 are Actual parameter
        return 0; 
    }

```

### Default Parameters

Value that will use default value specified inside function if value isn't passed are called Default Parameter.

### Constant Parameter:

Value whose are initialized using `const` keyword inside function are Constant Parameter.

```C++
Default and Constant Parameter

    #include <iostream>
    using namespace std; 
    
    int sum(const int a, int b =0) // a is Constant Parameter and b is Default parameter
    {
        return a+b;
    }
    
    int main(){
    
        int num1=10, num2=20; 
        sum(num1); 
        return 0;
    }

```
