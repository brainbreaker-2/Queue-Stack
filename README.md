
# Queue & Stack 

Задача проекта заключалась в том чтоб реализовать очередь и стэк сначала через массив, а потом через список, чтоб сравнить их скорость и удобность для дальнейшего использования.


# Постановка задачи

 - [Создать очередь через массив](https://github.com/brainbreaker-2/stack-queue/blob/ff3d9126d1c13d9a8e71cb94fedf80deed46d1f6/queue_array.cpp)
 - [Создать очередь через список](https://github.com/brainbreaker-2/stack-queue/blob/ff3d9126d1c13d9a8e71cb94fedf80deed46d1f6/queue_lst.cpp)
 - [Создать стэк через массив](https://github.com/brainbreaker-2/stack-queue/blob/ff3d9126d1c13d9a8e71cb94fedf80deed46d1f6/stack_array.cpp)
  - [Создать стэк через список](https://github.com/brainbreaker-2/stack-queue/blob/ff3d9126d1c13d9a8e71cb94fedf80deed46d1f6/stack_lst.cpp)


# Документация

## А что такое очередь? 

Очередь можно встретить везде, в кино, в магазине, или возле тележки с мороженым в жаркий летний день.
У нас есть несколько элементов, обозначим их цифрами.
![step1](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/queue/5element.png)

А теперь в эту "очередь" добавим еще один элемент.
![step2](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/queue/new%20element.png)

А что если мы хотим воспользоваться допустим сразу вторым элементом? 
Спойлер: ничего не получится, потому что второй элемент заблокирован первым, и сначала стоит обработать его перед тем как использовать второй.
![step3](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/queue/element%20go%20za%20bread.png)

## А что такое стэк? 

Стэк это очередь в которой работа с элементами в отличается.
У нас есть несколько элементов, обозначим их цифрами.
![step1](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/stack/5element.png)

добавим еще один элемент.
![step2](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/stack/new%20element.png)

А теперь мы хотим взять третий элемент, а чтоб открыть его нужно сначала обработать элементы которые находятся выше нужного элемента.
![step3](https://github.com/brainbreaker-2/Queue-Stack/blob/fea5c568065acbc47e9c78d65f20b03cebbf0e65/IMG/stack/free%203element.png)
## Таблица

| Структура данных | поля структуры | функция добавления | функция извлечения |
| --- | --- | --- | --- |
| очередь на массивах |  ![pole](https://github.com/brainbreaker-2/Queue-Stack/blob/537a9d629900858bee901908079ea87612ce744b/IMG/code/queue_array/%D0%BF%D0%BE%D0%BB%D1%8F.png) | ![dob](https://github.com/brainbreaker-2/Queue-Stack/blob/537a9d629900858bee901908079ea87612ce744b/IMG/code/queue_array/%D0%B4%D0%BE%D0%B1%D0%B0%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | ![izv](https://github.com/brainbreaker-2/Queue-Stack/blob/537a9d629900858bee901908079ea87612ce744b/IMG/code/queue_array/%D1%83%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | 
| очередь на списках |  ![pole](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/queue_list/%D0%BF%D0%BE%D0%BB%D1%8F.png)| ![dob](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/queue_list/%D0%B4%D0%BE%D0%B1%D0%B0%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | ![izv](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/queue_list/%D1%83%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | 
| стэк на массивах |  ![pole](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_array/%D0%BF%D0%BE%D0%BB%D1%8F.png) | ![dob](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_array/%D0%B4%D0%BE%D0%B1%D0%B0%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | ![izv](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_array/%D1%83%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | 
| стэк на списках |  ![pole](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_list/%D0%BF%D0%BE%D0%BB%D1%8F.png)| ![dob](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_list/%D0%B4%D0%BE%D0%B1%D0%B0%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) | ![izv](https://github.com/brainbreaker-2/Queue-Stack/blob/main/IMG/code/stack_list/%D1%83%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5.png) |


# Тест на время

Тест на время будет проводится с целью узнать какой из вариантов самый быстрый, для этого мы будем использовать библиотеку <chrono> вы можете подключить её в ваш файл с помощью:
```http
 #include <chrono>
```

а вот небольшая шпоргалка вам в помощь чтоб повторить проверку на своем коде:
```http
#include <chrono> 

int main()
{
    auto start = std::chrono::high_resolution_clock::now(); // запуск таймера

    // ваш код

    auto end = std::chrono::high_resolution_clock::now(); // Остановка таймера
    std::chrono::duration<double> elapsed = end - start; // Высчитывание полученого времени

    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl; // выводит полученое время

    return 0;
}
```

а теперь пора узнать результаты:
| вид  | время |
| ------------- | ------------- |
| очередь(массив)  | 1.25e-07 сек  |
| очередь(список)  | 1.52e-07 сек  |
| стэк(массив)  | 1.33e-07 сек  |
| стэк(список)  | 1.49e-07 сек  |
