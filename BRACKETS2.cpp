#include <iostream>
#include <stack>

int main() {
    int count;
    std::cin >> count;
    
    //test comment
    
    for(int i = 0; i < count ; i++){
        std::stack<char> bracketStack;
        std::string fullStr;
        std::cin >> fullStr;
        bool result = true;
        
        for(int j = 0; j < fullStr.length() ; j++){
            if(bracketStack.size() < 1){
                bracketStack.push(fullStr[j]);
                continue;
            }
            switch (fullStr[j]){
                case '(' :
                case '{' :
                case '[' :
                    bracketStack.push(fullStr[j]);
                    break;
                case ')' :
                    if(bracketStack.top() != '(') result = false;
                    bracketStack.pop();
                    break;
                case '}' :
                    if(bracketStack.top() != '{') result = false;
                    bracketStack.pop();
                    break;
                case ']' :
                    if(bracketStack.top() != '[') result = false;
                    bracketStack.pop();
                    break;
            }
            if(result != true) break;
        }
        if(bracketStack.size() > 0) result = false;
        if(result == true) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
    return 0;
}