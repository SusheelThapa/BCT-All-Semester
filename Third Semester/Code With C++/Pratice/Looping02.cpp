#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int number;
    cin>>number;

    if(number%2==0){
        cout << "Even number";
    }
    else{
        cout << "Odd Number";
    }
    return 0;
}