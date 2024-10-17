#include <iostream>
#include <Windows.h>
#include "mmsystem.h"

using namespace std;

int main(){
    PlaySound(TEXT("Surah 109 Al-Kafirun.mp3"),NULL, SND_SYNC);
    system("pause");
    return 0;
}