#include <iostream>
#include <list>


const int size_array = 1000;
template <typename T>
struct stuck_array{
    T array[size_array];
    int counter = 0;
    T* first = nullptr;
    T* last = nullptr;
    
    void add_elm(T elm)
    {
        if (counter == 0)
        {
            last = &array[0];
            first = &array[0];
            *first = elm;
            *last = elm;
            counter++;
        }
        else
        {
            if (counter <= size_array)
            {
                last++;
                *last = elm;
                counter++;
            }
            else
            {
                std::cout << "Ошибка. Переполнение очереди.\n";
            }
        }
    }
    
    T get_elm()
    {
        if (counter > 0)
        {
            T elm;
            elm = *first;
            first++;
            counter--;
            if (counter == 0)
            {
                first == nullptr;
                return array[0];
            }
            return elm;
        }
        else
        {
            std::cout << "Ошибка. Нечего извлекать из очереди.\n";
            return -1;
        }
    }
};

int main()
{
    return 0;
}
