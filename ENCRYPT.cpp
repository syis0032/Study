#include <iostream>
#include <string>

int main()
{
    int count;
    std::cin >> count;

    for(int i = 0; i < count; i++){
        std::string temp;
        std::cin >> temp;
        int strSize = temp.length();
        int evenNum = strSize/2 +  ((strSize/2.0 - strSize/2) > 0.01 ? 1 : 0 );
        std::string output = "";

        for(int j = 0; j < evenNum ; j++){
            output.push_back(temp.at(j*2));
        }
        for(int j = 0; j < strSize - evenNum; j++){
            output.push_back(temp.at(j*2+1));
        }

        std::cout << output << std::endl;
    }
    return 0;
}
