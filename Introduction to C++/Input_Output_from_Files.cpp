#include <iostream>
using namespace std;

int main()
{
/*Below Directive tells comppiler:
    to take input from Input.txt
    and
    print output in Output.txt
*/
#ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
#endif

    string Name;
    cin >> Name;
    cout << "Hello " << Name << endl;

    return 0;
}