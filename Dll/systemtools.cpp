#include <iostream>
#include <systemtools.h>

using namespace std;

static std::string buffer; //serve pra armazenar resultados, um temp

const char* toUpper(const char* texto){
    std::string s(texto);

    //para maiusculas
    std::string upper = s;
    std::transform(upper.begin(), upper.end(), upper.begin(), [](unsigned char c){
        return std::toupper(c); 
    });
}

const char* toLower(const char* texto){
    std::string s(texto);

    //para minusculas
    std::string lower = s;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c){
        return std::tolower(c);
    });
}

const char* reverseText(const char* texto){
    std::string s(texto);

     //inversão das palavras
    std::string reverso = s;
    std::reverse(reverso.begin(), reverso.end());

}

const char* manipularText(const char* texto) {
    std::string upper = toUpper(texto);
    std::string lower = toLower(texto);
    std::string reverso = reverseText(texto);

    buffer = "Maiusculas(Upper): " + upper +
             "\nMinusculas(Lower): " + lower +
             "\nReverso: " + reverso;
    return buffer.c_str();
}

const char* getAppInfo(){
    buffer = "getAppInfo DLL v1.0\nAutor: ArautD (Paulo Sergio Lemos) \nFuncoes: manipularTexto, systemInfo, maskEmail, contarPalavra\nCompilado em: " + std::string(__DATE__) + " às " + std::string(__TIME__);
    return buffer.c_str(); //Vai garantir que aponte para essa informação quando selecionar a função;
}

const char* maskEmail(const char* email){
    std::string s(email);

    size_t pos = s.find('@');
    if(pos != std::string::npos && pos > 2){
        for(size_t i = 2; i < pos; ++i){
            s[i] = '*';
        }
    }
    buffer = s;
    return buffer.c_str();
}

int contaPalavra(const char* texto){

}
