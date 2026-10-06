#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    string searchElement = "Джаз";
    string newElement = "Блюз";

    auto it = genres.begin();
    
    while (it != genres.end())
    {
        if (*it == searchElement)
        {
            genres.insert_after(it, newElement);
            break;
        }
        ++it;
    }

    if (it == genres.end())
    {
        cout << "Елемент відсутній у списку" << endl;
    }

    for (auto i = genres.begin(); i != genres.end(); ++i)
    {
        cout << *i << " ";
    }
    
    return 0;
}