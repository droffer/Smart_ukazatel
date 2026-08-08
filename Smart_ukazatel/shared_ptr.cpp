#include <iostream>
#include <memory>
int main()
{
    std::shared_ptr<int>    p1 = std::make_shared<int>();
    std::shared_ptr<int>    p2 = p1;
    std::cout << p1 << " " << *p1 << "\n";
    std::cout << p2 << " " << *p2 << "\n";


    return 0;
}