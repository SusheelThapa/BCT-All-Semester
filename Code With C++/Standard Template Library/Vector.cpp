#include <iostream>
#include <vector> //To use vector
using namespace std;

template <class T>
void display(vector<T> &v)
{
    "Display vector";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;
}

template <class T>
void size(vector<T> &v)
{
    cout << v.size() << endl
         << endl;
}

int main()
{
    //Method to create vector
    vector<int> one;         //Zero length vector
    vector<float> two(8);    //8 length vector
    vector<char> three(10);  //10 length vector
    vector<int> four(10, 4); // 10 length vector with every element 4

    puts("Displaying Vector One\n");
    display(one);

    puts("Displaying Vector Two\n");
    display(two);

    puts("Displaying Vector Three\n");
    display(three);

    puts("Displaying Vector Four\n");
    display(four);

    //Size of vector
    puts("Size of vector one: ");
    size(one);
    puts("Size of vector two: ");
    size(two);
    puts("Size of vector three: ");
    size(three);
    puts("Size of vector four: ");
    size(four);

    //Push_back in vector
    cout << endl
         << "After Push Back" << endl;
    four.push_back(10);
    display(four);

    //Pop back in vector
    cout << endl
         << "After Pop Back" << endl;
    four.pop_back();
    display(four);


    //Inserting to vector
    cout << endl
         << "After Inserting using iterator" << endl;

    vector<int>::iterator iter = four.begin(); //Creating iterator

    four.insert(iter, 8);//Add 5 one times
    four.insert(iter+1,3, 5); // Add 5 three times

    display(four);

    return 0;
}