#include <iostream>
#include "systemtools.h"

using namespace std;

static std::string buffer; //serve pra armazenar resultados, um temp

DLL_API const char* toUpper(const char* texto){
    buffer = texto;

    //para maiusculas
    std::transform(buffer.begin(), buffer.end(), buffer.begin(), [](unsigned char c){
        return std::toupper(c); 
    });
    return buffer.c_str();
}

DLL_API const char* toLower(const char* texto){
    buffer = texto;

    //para minusculas
    std::transform(buffer.begin(), buffer.end(), buffer.begin(), [](unsigned char c){
        return std::tolower(c);
    });
    return buffer.c_str();
}

DLL_API const char* reverseText(const char* texto){
    buffer = texto;

     //inversão das palavras
    std::reverse(buffer.begin(), buffer.end());
    return buffer.c_str();
}

DLL_API const char* getAppInfo(){
    buffer = "getAppInfo DLL v1.0\nAutor: ArautD (Paulo Sergio Lemos) \nFuncoes: manipularTexto, systemInfo, maskEmail, contarPalavra\nCompilado em: " + std::string(__DATE__) + " às " + std::string(__TIME__);
    return buffer.c_str(); //Vai garantir que aponte para essa informação quando selecionar a função;
}

DLL_API const char* maskEmail(const char* email){
    buffer = email;

    size_t pos = buffer.find('@');
    if(pos != std::string::npos && pos > 2){
        for(size_t i = 2; i < pos; ++i){
            buffer[i] = '*';
        }
    }
    return buffer.c_str();
}

DLL_API int contarPalavra(const char* texto){

    std::istringstream iss(texto);

    int contador = 0;
    std::string word;

    while (iss >> word){
        contador++;
    }
    
    return contador;
}
