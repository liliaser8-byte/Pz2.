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
    
    int sum = 0;
    
    for (string genre : genres)
    {
        sum = sum + genre.length();
    }
    
    cout << "Загальна кількість символів: " << sum;
    
    return 0;
}