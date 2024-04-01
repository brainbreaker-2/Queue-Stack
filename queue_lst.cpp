#include <iostream>
#include <list>


const int size_list = 1000;
template <typename T>
struct queue_list{
    std::list<T> queue_list;
    int counter = 0;
    
    void add_elm(T elm)
    {
        if (counter < size_list)
        {
            queue_list.push_back(elm);
            counter++;
        }
        else
        {
            std::cout << "Ошибка. Стек переполнен.\n";
        }
    }
    
    T get_elm()
    {
        if (counter > 0)
        {
            T ret_elm = queue_list.front();
            counter--;
            queue_list.pop_front();
            
            return ret_elm;
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