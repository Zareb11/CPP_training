#include <iostream>
#include <vector>
#include <algorithm>



int main() {

    struct 
    {
        void operator()(int x){
            std::cout << x << "\n";
        }
    }something;

    //[cc](p){fd};
    std::vector <int> v{2,3,7,14,23};
    std::for_each(v.begin(), v.end(), something);
    return 0;
}