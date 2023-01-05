#include <iostream>
//#include <windows.h>
#include <unistd.h>
#include <cstdlib>

void Sleep(int i);

using namespace std;

int main()
{

    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        cout << i <<endl;
        system("clear");
    }
    cout<<"JEBUT";
    return 0;
}

void Sleep(int i) {

}
