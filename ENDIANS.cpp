#include <iostream>

int main()
{
    int count;
    std::cin >> count;

    for(int i = 0; i < count; i++){
        unsigned int input;
        std::cin >> input;
        unsigned int output = 0;
        for(int j = 0; j < 4; j++){
            unsigned int temp = 0xff;
            temp <<= (j*8);
            temp &= input;
            temp >>= (j*8);
            temp <<= ((3-j)*8);
            output += temp;
        }
        std::cout << output << std::endl;
    }

    return 0;
}