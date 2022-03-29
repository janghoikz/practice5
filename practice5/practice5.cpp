#include <iostream>

class Student 
{
    private : 
        int score;

    public :
        int number;
    private : 
        void Ranking()
        {
        }
        void Print()
        {
            std::cout << score << std::endl;
        }
};

int main()
{
    std::cout << "Hello World!\n";
}