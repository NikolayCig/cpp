
#include <clocale>
#include <iostream>



int main(){
    setlocale(LC_ALL, "RU");
    int res = 10;
    std::cout << res;
    
    return 0;
}

