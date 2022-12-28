#include <iostream>
using namespace std;

int totaliteration =0;
void towerOfHanoi(int totalDisc, char source, char destination, char auxillary)
{
    totaliteration++;
    if (totalDisc == 1)
    {
        cout << "Moved disc from " << source << " to " << destination << endl;
        return;
    }
    else
    {
        towerOfHanoi(totalDisc - 1, source, auxillary, destination);
        cout << "Moved disc from " << source << " to " << destination << endl;
        towerOfHanoi(totalDisc - 1, auxillary, destination, source);
    }
}
int main()
{
    towerOfHanoi(20, 'A','B','C');
    cout<<totaliteration;
    return 0;
}