#pragma once

#include <string> //assim não preisa puxar na main
#include <algorithm>
#include <cctype>
#include <sstream>
#include <locale>


// Macros de validação
#ifdef BUILD_DLL
    #define DLL_API __declspec(dllexport)
#else
    #define DLL_API __declspec(dllimport)
#endif

extern "C"{
    DLL_API const char* toUpper(const char* texto);
    DLL_API const char* toLower(const char* texto);
    DLL_API const char* reverseText(const char* texto);
    DLL_API const char* getAppInfo();
    DLL_API const char* maskEmail (const char* email);
    DLL_API int contarPalavra(const char* texto);
}