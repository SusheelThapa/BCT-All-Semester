#include <iostream>
#include <list>

using namespace std;

template <class T>
void showList(list<T> &l)
{
    list<int>::iterator iter = l.begin();
    // list<T>::iterator iter = l.begin();
    for (int i = 0; i < l.size(); i++)
    {
        cout << *iter << " ";
        iter++;
    }

    puts("\n\n");
}
int main()
{

    list<int> one;    //Create of list with zero lenght
    list<int> two(3); //Empty list of length 3

    one.push_back(5);
    one.push_back(9);
    one.push_back(7);
    one.push_back(12);

    puts("Showing List one");
    showList(one);

    list<int>::iterator iter;
    iter = two.begin();
    *(iter++) = 44;
    *(iter++) = 89;
    *(iter++) = 56;

    puts("Showing list two");
    showList(two);

    puts("Sorting the list one");
    one.sort();
    showList(one);

    puts("Mergin list one and list two");
    one.merge(two);
    cout << "List one: ";
    showList(one);
    cout<< "List two: ";
    showList(two);

    puts("Revering list one");
    one.reverse();
    showList(one);
    
    return 0;
}