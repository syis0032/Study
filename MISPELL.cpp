#include <iostream>
#include <string>

int main()
{
    int count;
    std::cin >> count;

    for(int i = 0; i < count; i++){
        int delNum;
        std::string strData;
        std::cin >> delNum >> strData;
        strData.erase(delNum-1, 1);
        std::cout << i+1 << " " << strData << std::endl;
    }
    return 0;
}
