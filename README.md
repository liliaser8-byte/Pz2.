**Звіт про виконання практичної роботи**
**Тема: Реалізація списків. Однозв’язний список.**

**Мета роботи:** ознайомитися з принципами організації однозв’язного списку та
контейнером std::forward_list у C++, сформувати навички створення, перегляду,
пошуку, вставки та видалення елементів списку з використанням ітераторів.

**Варіант 13:** Музичні жанри
Початкові елементи: Рок, Поп, Джаз, Реп, Класика
Елемент для пошуку: Джаз
Елемент для вставки: Блюз

**Візуалізація структури однозв’язного списку**

Однозв'язний список (forward_list) складається з вузлів. Кожен вузол містить значення (дані) та вказівник на наступний вузол. Перехід можливий лише в одному напрямку — від початку (Head) до кінця.

[ Head ] 
   |
   v
[ "Рок" | next ] ---> [ "Поп" | next ] ---> [ "Джаз" | next ] ---> [ "Реп" | next ] ---> [ "Класика" | next ] ---> nullptr


**Після додавання елемента "Блюз" після "Джаз" (Завдання 5):**

[ "Джаз" | next ] ---> [ "Блюз" | next ] ---> [ "Реп" | next ] ---> ...
**Виконані завдання, програмний код та результати**

*Завдання 1. Ініціалізація та виведення елементів*

<img width="918" height="256" alt="image" src="https://github.com/user-attachments/assets/610de888-1386-4c38-ac27-0d1200a41a43" />
<img width="825" height="52" alt="image" src="https://github.com/user-attachments/assets/bdba30af-6b37-4eba-bd01-73ccf8d4da3e" />
<img width="1906" height="726" alt="image" src="https://github.com/user-attachments/assets/dd612f5c-3e99-4c84-b25d-6fe64295ab72" />

### 💻 Код програми:
```
#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    cout << "Музичні жанри:" << endl;
    for (string genre : genres) {
        cout << genre << endl;
    }
    return 0;
}
```
### 👁️ Візуалізація пам'яті:
<img width="1658" height="700" alt="image" src="https://github.com/user-attachments/assets/7ba3f7c8-328e-4cbf-a595-2df9c70a1773" />
<img width="1618" height="676" alt="image" src="https://github.com/user-attachments/assets/888980d7-aab9-4e37-b1ff-e671e985249c" />
<img width="1611" height="776" alt="image" src="https://github.com/user-attachments/assets/097a511f-aabd-489e-93b4-0c96efdb6094" />
<img width="1215" height="450" alt="image" src="https://github.com/user-attachments/assets/f4614f6e-2a97-4a32-bec0-fc85048a34d2" />
<img width="1643" height="531" alt="image" src="https://github.com/user-attachments/assets/61b1bbaf-6b36-4283-be20-8fe9fa4fa30d" />
<img width="1542" height="610" alt="image" src="https://github.com/user-attachments/assets/deb44e41-e92a-4b36-8643-b8e603c6c210" />
<img width="1113" height="442" alt="image" src="https://github.com/user-attachments/assets/35820f5d-d775-4655-a330-f38a1269ad13" />

---

*Завдання 2. Додавання та видалення елементів.*

<img width="885" height="416" alt="image" src="https://github.com/user-attachments/assets/a32ee1bf-d573-4390-b258-2228b45d2608" />
<img width="1907" height="783" alt="image" src="https://github.com/user-attachments/assets/8ddc86f5-e465-4eaa-8e19-3c56271637be" />

### 💻 Код програми:
```
#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
    forward_list<string> genres = { "Рок" };
    genres.push_front("Поп");
    genres.push_front("Джаз");
    
    cout << "Список жанрів:" << endl;
    for (string genre : genres)
    {
        cout << genre << endl;
    }
    
    genres.pop_front();
    
    cout << endl;
    cout << "Після видалення першого жанру:" << endl;
    for (string genre : genres)
    {
        cout << genre << endl;
    }
    
    return 0;
}
}
```
### 👁️ Візуалізація пам'яті:
<img width="1610" height="717" alt="image" src="https://github.com/user-attachments/assets/b2ab0e39-4c0b-4286-843a-aaa523b667d1" />
<img width="1588" height="817" alt="image" src="https://github.com/user-attachments/assets/b754f3e1-fa4b-4296-8613-89465b3bcef8" />
<img width="1616" height="817" alt="image" src="https://github.com/user-attachments/assets/805ba4c8-03cb-4aa8-94d7-9324ba643427" />
<img width="1911" height="642" alt="image" src="https://github.com/user-attachments/assets/a45f021f-443e-4188-bafa-74da4a84ad96" />
<img width="1877" height="691" alt="image" src="https://github.com/user-attachments/assets/94e1dec6-9a3b-4074-8779-aa92c18dfdaf" />
<img width="1492" height="607" alt="image" src="https://github.com/user-attachments/assets/7ecbf505-10a5-4aec-8cb9-a764981c2dd1" />

---
*Завдання 3. Знаходження та перевірка наявності елемента*

<img width="963" height="608" alt="image" src="https://github.com/user-attachments/assets/c5e66040-4620-4146-b316-a472ca53a035" />
<img width="1917" height="930" alt="image" src="https://github.com/user-attachments/assets/d09d5a9c-6c89-4f85-9ce9-4f05e262e233" />

### 💻 Код програми:
```
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
}
```
### 👁️ Візуалізація пам'яті:
<img width="1412" height="552" alt="image" src="https://github.com/user-attachments/assets/c08f1d87-629c-47c4-afaa-3689f2760bbe" />
<img width="1452" height="552" alt="image" src="https://github.com/user-attachments/assets/da7ceb98-78bd-4a03-82d3-ff5c91920f8c" />
<img width="1527" height="588" alt="image" src="https://github.com/user-attachments/assets/63ad226c-1dd0-48e7-939c-d2be720a2b4a" />
<img width="1205" height="501" alt="image" src="https://github.com/user-attachments/assets/91a57180-8f12-4c0f-95e2-3093de3bb7b9" />
<img width="1216" height="352" alt="image" src="https://github.com/user-attachments/assets/d1697eaa-adb6-462f-abcb-7b45b717a3d5" />
<img width="1503" height="592" alt="image" src="https://github.com/user-attachments/assets/4356e68f-74f6-4573-9e94-20a3462c908c" />

---

*Завдання 4. Підрахунок кількості символів*
<img width="882" height="297" alt="image" src="https://github.com/user-attachments/assets/c7802f1a-3014-4fae-89f8-d06065ee081b" />
<img width="1901" height="690" alt="image" src="https://github.com/user-attachments/assets/60bb6995-2deb-4b31-87cc-1cfa1d3d9e8c" />

### 💻 Код програми:
```
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
}
```
### 👁️ Візуалізація пам'яті:
<img width="1412" height="552" alt="image" src="https://github.com/user-attachments/assets/c08f1d87-629c-47c4-afaa-3689f2760bbe" />
<img width="1452" height="552" alt="image" src="https://github.com/user-attachments/assets/da7ceb98-78bd-4a03-82d3-ff5c91920f8c" />
<img width="1527" height="588" alt="image" src="https://github.com/user-attachments/assets/63ad226c-1dd0-48e7-939c-d2be720a2b4a" />
<img width="1205" height="501" alt="image" src="https://github.com/user-attachments/assets/91a57180-8f12-4c0f-95e2-3093de3bb7b9" />
<img width="1216" height="352" alt="image" src="https://github.com/user-attachments/assets/d1697eaa-adb6-462f-abcb-7b45b717a3d5" />
<img width="1503" height="592" alt="image" src="https://github.com/user-attachments/assets/4356e68f-74f6-4573-9e94-20a3462c908c" />

---





<img width="1590" height="581" alt="image" src="https://github.com/user-attachments/assets/fabe4108-c232-4e01-ab9e-c07f5894ce09" />
<img width="1872" height="527" alt="image" src="https://github.com/user-attachments/assets/1a5f0b4b-01e9-43a3-9f50-f84143c6808b" />
<img width="1850" height="487" alt="image" src="https://github.com/user-attachments/assets/e0d796fb-7d9b-4879-8cc0-7d55fa083921" />
<img width="1706" height="505" alt="image" src="https://github.com/user-attachments/assets/5f955b7c-f2ca-45d8-85ea-2853dcce0e52" />
<img width="1602" height="416" alt="image" src="https://github.com/user-attachments/assets/f1f5e8f4-d5a1-4c60-a348-ac4487ad1e28" />
<img width="1605" height="477" alt="image" src="https://github.com/user-attachments/assets/b6b70e5d-8826-46b0-822d-83992e747547" />
<img width="1161" height="407" alt="image" src="https://github.com/user-attachments/assets/1edaf69d-e1e5-47fb-a06b-c4ed8c1c2aae" />
<img width="685" height="288" alt="image" src="https://github.com/user-attachments/assets/4cc4eb70-31d4-4d6a-9864-3cd1c0e3cc44" />
<img width="1863" height="786" alt="image" src="https://github.com/user-attachments/assets/35d4e6e3-8087-4b8b-8fa1-a0df05fb6813" />
<img width="1761" height="495" alt="image" src="https://github.com/user-attachments/assets/6f11485b-4b97-4644-9126-c40313f778fe" />
<img width="1728" height="485" alt="image" src="https://github.com/user-attachments/assets/38f452e1-ab8a-4138-a72a-ee495d04b577" />
<img width="1717" height="470" alt="image" src="https://github.com/user-attachments/assets/4196408a-8a30-4460-a812-820be0abd6a1" />
<img width="1720" height="607" alt="image" src="https://github.com/user-attachments/assets/d17f9df1-6710-4c07-af7d-5e43e2d11a16" />
<img width="1675" height="587" alt="image" src="https://github.com/user-attachments/assets/48e3ada1-e78a-4b6e-92cd-c4ee4599ea62" />
<img width="1712" height="481" alt="image" src="https://github.com/user-attachments/assets/c4712f65-a4f1-4c5f-a9f4-0517375f18ac" />
<img width="1170" height="425" alt="image" src="https://github.com/user-attachments/assets/b7ab28d0-59e4-4c6a-9cd2-abbbe64554bc" />

