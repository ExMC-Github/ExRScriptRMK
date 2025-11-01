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
// File Version: 0.1.2
// -----------------------
#ifndef KRNLN_H
#define KRNLN_H
#include <windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
using std::string;
using std::to_string;
extern string runpath;
extern string exeName;

void msgbox(string content, string title = "") {
    MessageBox(NULL,content.c_str(),title.c_str(), MB_OK | 0);
};

void msgbox_error(string content, string title = "") {
    MessageBox(NULL,content.c_str(),title.c_str(), MB_OK | 16);
};

void msgbox_info(string content, string title = "") {
    MessageBox(NULL,content.c_str(),title.c_str(), MB_OK | MB_ICONINFORMATION);
};

void msgbox_ask(string content, string title = "") {
    MessageBox(NULL,content.c_str(),title.c_str(), MB_OK | 32);
};

void msgbox_warn(string content, string title = "") {
    MessageBox(NULL,content.c_str(),title.c_str(), MB_OK | 48);
};

void print(string content) {
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