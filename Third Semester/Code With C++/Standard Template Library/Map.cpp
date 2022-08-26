#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> one;

    one["Someone"] = 67;
    one["Noone"] = 98;
    one["Anyone"] = 97;
    one["      "] = 100;

    one.insert({"Everyone", 90});
    
    map<string, int>::iterator iter;
    iter = one.begin();

    for (; iter != one.end(); iter++)
    {
        cout << iter->first << " : " << iter->second << endl;
    }

    cout << "The size of map is " << one.size() << endl;

    return 0;
}