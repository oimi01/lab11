#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Press Enter 3 times to reveal your future";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    if(x == 1) cout << "Your Grade = A";
    else if(x == 2) cout << "Your Grade = B+";
    else if(x == 3) cout << "Your Grade = B";
    else if(x == 4) cout << "Your Grade = C+";
    else if(x == 5) cout << "Your Grade = C";
    else if(x == 6) cout << "Your Grade = D+";
    else if(x == 7) cout << "Your Grade = D";
    else if(x == 8) cout << "Your Grade = F";
    else cout << "Your Grade = W";

    return 0;

}