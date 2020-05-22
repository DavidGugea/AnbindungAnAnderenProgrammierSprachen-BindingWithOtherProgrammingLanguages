#include "main.h"
#include <sstream>
#include <iostream>
#include "string.h"

using namespace std;

extern "C" __declspec(dllexport) string FncTest(int x){
    return "Hi. this is a test!";
}

extern "C" __declspec(dllexport) void test(){
    cout << "This is a test made in CPP" << endl;
}
