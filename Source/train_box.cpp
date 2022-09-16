#include <iostream>
#include <string>


int main()
{
    std::string greeting = "What the hell";
    
    //greeting.pop_back();
    //greeting.replace(greeting.find("hell"), 4, "****");
    //greeting.append(" there!");
    //greeting.insert(3, " ");
    //std::cout << greeting << std::endl;
    //greeting.erase(3);
    //greeting.replace(9, 4, "****");
    //std::cout << greeting << std::endl;
    //std::cout << greeting.substr(5,2) << std::endl;
    std::cout << greeting.find_first_of("aeoui") << std::endl;
    
    return 0;
}