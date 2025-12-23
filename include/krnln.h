// coding: utf-8
// +-------------------------------------------
// | ExRScript Remake
// +-------------------------------------------
// | Copyright (C) 2025-2099 ExRFy Software Studio
// +-------------------------------------------
// | Author: ExRFy<2535246057@qq.com>
// +-------------------------------------------

// -----------------------
// 系统核心支持库
// File: krnln.h
// File Version: 0.1.5
// -----------------------
#ifndef KRNLN_H
#define KRNLN_H
#include "include.h"
using std::string;
using std::to_string;
extern string runpath;
extern string exeName;

int MsgBox(const char* content, const char* title = "") {
    return MessageBoxA(NULL,content,title, MB_OK | 0);
};

int MsgBox_Error(const char* content, const char* title = "") {
    return MessageBoxA(NULL,content,title, MB_OK | 16);
};

int MsgBox_Info(const char* content, const char* title = "") {
    return MessageBoxA(NULL,content,title, MB_OK | MB_ICONINFORMATION);
};

int MsgBox_Ask(const char* content, const char* title = "") {
    return MessageBoxA(NULL,content,title, MB_OK | 32);
};

int MsgBox_Warn(const char* content, const char* title = "") {
    return MessageBoxA(NULL,content,title, MB_OK | 48);
};

int MsgBoxA(const char* content, const char* title = "",int icon = 32) {
    return MessageBoxA(NULL,content,title, MB_OK | icon);
};

void print(const char* content) {
    using namespace std;
    cout << content << endl;
};

string getexename(int argc, char* argv[]) {
    string path = argv[0];
    size_t pos = path.find_last_of("\\/");
    string a = (pos != std::string::npos) ? path.substr(pos+1) : path;
    return a;
};

string getrunpath(int argc, char* argv[]) {
    string path = argv[0];
    size_t pos = path.find_last_of("\\/");
    string a = (pos != std::string::npos) ? path.substr(0, pos+1) : "";
    return a;
};

void ExRScriptInitialize(int argc, char* argv[]) {
    runpath = getrunpath(argc, argv);
    exeName = getexename(argc, argv);
};

#endif