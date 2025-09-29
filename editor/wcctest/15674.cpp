#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include <maniftest_wcc6.h>
#include <commctrl.h>
using namespace std;


int main(int argc, char* argv[]) {
    std::string path = argv[0];
    size_t pos = path.find_last_of("\\/");
    std::string kzxdexename = (pos != std::string::npos) ? path.substr(pos+1) : path;

    MessageBox(NULL,"Hello World", "", MB_OK | MB_ICONINFORMATION); 
    return 0;
};