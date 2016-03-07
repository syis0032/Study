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
        //char ch[strSize/2][2];
        char **ch = new char*[strSize/2];
        for(int j = 0; j < strSize/2; j++){
            ch[j] = new char[2];
        }
        //unsigned int sort[strSize/2];
        unsigned int *sort = new unsigned int[strSize/2];
        //int order[strSize/2];
        int *order = new int[strSize/2];
        int orderCount = 0;
        int lower = 999;
        int lower2 = 999;
        int tmpLower = 0;
        int tmpLower2 = 0;
        for(int j = 0; j < strSize/2 ; j++){
            ch[j][0] = temp.at(2*j);
            ch[j][1] = temp.at(2*j+1);
        }

        while(1){
            for(int j = 0; j < strSize/2 ; j++){
                if(tmpLower >= (int)ch[j][0]) continue;
                if(lower > (int)ch[j][0]) lower = (int)ch[j][0];
            }
            tmpLower = lower;

            int k = 0;
            for(int j = 0; j < strSize/2 ; j++){
                if(lower == ch[j][0]) {
                    sort[k++] = j;
                }
            }
            if(k == 0) break;
            int l = 0;
            while(1)
            {
                for(int j = 0; j < k ; j++){
                    if(tmpLower2 >= ch[sort[j]][1]) continue;
                    if(lower2 > ch[sort[j]][1]){
                        lower2 = ch[sort[j]][1];
                    }
                }
                tmpLower2 = lower2;

                for(int j = 0; j < k; j++){
                    if(lower2 == ch[sort[j]][1]){
                        order[orderCount++] = sort[j];
                    }
                }
                lower2 = 999;
                if(++l == k) break;

            }
            lower = 999;
            tmpLower2 = 0;
        }

        std::string output="";
        for(int j = 0; j < strSize/2 ; j++){
            output.push_back(ch[order[j]][0]);
            output.push_back(ch[order[j]][1]);
        }
        std::cout << output << std::endl;

        for(int j = 0; j < strSize/2; j++){
            delete[] ch[j];
        }
        delete[] ch;
        delete[] sort;
        delete[] order;
    }
    return 0;
}
