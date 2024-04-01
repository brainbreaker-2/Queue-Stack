#include <iostream>
#include <list>


const int size_array = 1000;
template <typename T>
struct stuck_array{
    T array[size_array];
    int counter = 0;
    T* hop = nullptr;
    
    void add_elm(T elm)
    {
        if (counter == 0)
        {
            hop = &array[0];
            *hop = elm;
            counter++;
        }
        else
        {
            if (counter <= size_array)
            {
                hop++;
                *hop = elm;
                counter++;
            }
            else
            {
                std::cout << "Ошибка. Переполнение стека.\n";
            }
        }
    }
    
    T get_elm()
    {
        if (counter > 0)
        {
            T elm;
            elm = *hop;
            hop--;
            counter--;
            if (counter == 0)
            {
                hop == nullptr;
                return array[0];
            }
            return elm;
        }
        else
        {
            std::cout << "Ошибка. Нечего извлекать из стека\n";
            return -1;
        }
    }
};

int main()
{
    return 0;
}
