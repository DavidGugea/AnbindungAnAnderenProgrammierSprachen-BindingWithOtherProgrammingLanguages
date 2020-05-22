#include <iostream>

using namespace std;

extern "C" __declspec(dllexport) void test(){
    cout << "This is a test using CPP from the DLL" << endl;
}
