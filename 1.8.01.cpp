#include <iostream>

void counting_function()
{
    setlocale(LC_ALL, "ru");
    static int count{ 0 };
    ++count;
    std::cout << "Количество вызовов функции counting_function(): " << count << std::endl;
}

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
    
    return 0;
}
