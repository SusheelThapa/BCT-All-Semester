#include <iostream>
using namespace std;

int main()
{
    /*
    Syntax:
        do
        {
            //Body
        } while(condition);

    Note:   
        Do while loop exceuted at least one times
    */

    int i = 1;
    
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 100);

    return 0;
}