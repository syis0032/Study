#include <iostream>
#include <stack>

using namespace std;

bool checkQueen(int*, int, int, int);

int main() {
    
    int loopCount;
    
    cin >> loopCount;
    
    while(loopCount--){
        int nByN;
        cin >> nByN;
        
        int *mat = new int[nByN];
        stack<int> rStack;
        stack<int> cStack;
        
        int matLevel = 0;
        int setCount = 0;
        int matCount = 0;
        int N = 0;
        
        
        while(1){
            for(int i = N; i < nByN; i++){
                if(checkQueen(mat, nByN, matLevel, i)){
                    mat[matLevel] = i;
                    setCount++;
                    rStack.push(matLevel);
                    cStack.push(i);
                    N = 0;
                    break;
                }
            }
            
            matLevel++;
            N = 0;
            if(matLevel == nByN){
                if(setCount == nByN) matCount++;
                if(rStack.empty()) break;
                matLevel = rStack.top();
                rStack.pop();
                N = cStack.top() + 1;
                cStack.pop();
                mat[matLevel] = -999999;
                setCount = (int)rStack.size();
            }
            
            if(setCount != matLevel){
                if(rStack.empty()) break;
                matLevel = rStack.top();
                rStack.pop();
                N = cStack.top() + 1;
                cStack.pop();
                mat[matLevel] = -999999;
                setCount = (int)rStack.size();
            }
            
            
        }
        
        cout << matCount << "\n";
        matCount = 0;
        setCount = 0;
        matLevel = 0;
        N = 0;
        delete [] mat;
    }
    return 0;
}

bool checkQueen(int* Matrix, int N, int r, int c)
{
    for(int i = 0; i < r; i++){
        if(Matrix[i] == c) return false;
        if(i + Matrix[i] == r + c) return false;
        if(i - Matrix[i] == r - c) return false;
    }
    return true;
}
