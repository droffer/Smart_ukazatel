#include <iostream>
#include <memory>
int main()
{
    std::shared_ptr<int> p_shared = std::make_shared<int>(100);
    std::weak_ptr <int> p_weak1(p_shared);
    std::weak_ptr <int> p_weak2(p_weak1);
    std::shared_ptr<int> p_shared_orig1 = p_weak1.lock();
    std::shared_ptr<int> p_shared_orig2 = p_weak2.lock();
    std::cout << p_shared << " " << *p_shared << "\n";
    std::cout << p_shared_orig1 << " " << *p_shared_orig1 << "\n";
    std::cout << p_shared_orig2 << " " << *p_shared_orig2 << "\n";


    return 0;
}