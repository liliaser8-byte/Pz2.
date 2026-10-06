#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    
    cout << "Музичні жанри:" << endl;
    for (string genre : genres)
    {
        cout << genre << endl;
    }
    
    return 0;
}