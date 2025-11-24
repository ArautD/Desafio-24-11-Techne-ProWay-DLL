#pragma once

#include <string> //assim não preisa puxar na main

// Macros de validação
#ifdef BUILD_DLL
    #define DLL_API __declspec(dllexport)
#else
    #define DLL_API __declspec(dllimport)
#endif

extern "C"{
    DLL_API const char* manipularTexto(const char* texto);
    DLL_API const char* systemInfo();
    DLL_API const char* maskEmail (const char* email);
    DLL_API int contarPalavra(const char* texto);
}