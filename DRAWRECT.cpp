#include <iostream>

int main()
{
    int count;
    std::cin >> count;

    for(int i = 0; i < count; i++){

        int x[3], y[3];
        int outputX, outputY;
        for(int j = 0; j < 3; j++){
            std::cin >> x[j] >> y[j];
        }
        if(x[0] != x[1]) x[1] == x[2] ? outputX = x[0] : outputX = x[1];
        else outputX = x[2];
        if(y[0] != y[1]) y[1] == y[2] ? outputY = y[0] : outputY = y[1];
        else outputY = y[2];

        std::cout << outputX << " " << outputY << std::endl;

    }
    return 0;
}
