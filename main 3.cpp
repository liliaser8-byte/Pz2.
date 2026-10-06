#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
    forward_list<string> genres = 
    {
        "Рок",
        "Поп",
        "Джаз",
        "Реп",
        "Класика"
    };
    
    string searchGenre;
    cout << "Введіть назву жанру для пошуку" << endl;
    cin >> searchGenre;
    
    auto it = genres.begin();
    while (it != genres.end())
    {
        if (*it == searchGenre)
        {
            cout << "Елемент знайдено";
            break;
        }
        ++it;
    }
    
    if (it == genres.end())
    {
        cout << "Елемент не знайдено";
    }
    
    return 0;
}