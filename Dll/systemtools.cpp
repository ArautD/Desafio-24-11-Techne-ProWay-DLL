#include <iostream>
#include <systemtools.h>

using namespace std;

static std::string buffer; //serve pra armazenar resultados, um temp

const char* manipularTexto(const char* texto){
    std::string s(texto);

    //para maiusculas
    std::string upper = s;
    std::transform(upper.begin(), upper.end(), upper.begin(), [](unsigned char c){
        return std::toupper(c); 
    });

    //para minusculas
    std::string lower = s;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c){
        return std::tolower(c);
    });

    //inversão das palavras
    std::string reverso = s;
    std::reverse(reverso.begin(), reverso.end());

    //Unindo em uma string
    buffer = "Maiusculas(Upper):  " + upper + "\nMinusculas(Lower): " + lower + "\nReverso: " + reverso;
    return buffer.c_str();
}

const char* systemInfo(){
    buffer = "SystemTools DLL v1.0\nAutor: ArautD (Paulo Sergio Lemos) \nFuncoes: manipularTexto, systemInfo, maskEmail, contarPalavra\nCompilado em: " + std::string(__DATE__) + " às " + std::string(__TIME__);
    return buffer.c_str(); //Vai garantir que aponte para essa informação quando selecionar a função;
}

const char* maskEmail(const char* email){

}

int contaPalavra(const char* texto){

}
