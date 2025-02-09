#include <iostream>

/*bascially compiler descides the type that will be used. Nice! 
Typename/ class can be used I feel typename is nice to use. */
template<typename Bla>
void PrintStuff(Bla val)
{
    std::cout<<" "<< val <<std::endl;
}

/* Another usage of template programming*/

template<typename T , int n>
class array{
private : 
    T array[n];
public :
    int size()
    {
        return n;
    }


};

int (*funname)(int) = nullptr;

int main()
{

    PrintStuff("hello");
    PrintStuff(12323);

    array<int, 10> array; 
    std::cout << array.size() << std::endl;
    std::cin.get();

}
