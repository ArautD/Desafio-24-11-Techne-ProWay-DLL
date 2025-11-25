#include <iostream>
#include <string>
#include <locale>
#include "systemtools.h"

using namespace std;

int main(){
    int opcao;
    
    string entrada;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");

    do{
        cout << "\n================ MENU ================\n";
        cout << "Por favor selecione uma das opções e aproveite :)\n";
        cout << "1 - Converter um texto para MAIUSCULAS\n";
        cout << "2 - Converter um texto para minusculas\n";
        cout << "3 - Inverter um texto\n";
        cout << "4 - Verificar mascarar e-mail\n";
        cout << "5 - Mostrar informações da DLL\n";
        cout << "6 - Contador de palavras";
        cout << "0 - Sair\n";
        cout << "\n======================================\n";
        cout << "Criado por: ArautD\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao){
            case 1:
            cout << "Digite o texto que deseja transformar em letra maiúscula: ";
                getline(cin, entrada);
                cout << toUpper(entrada.c_str()) << endl;
                break;

            case 2:
                cout << "Digite o texto que deseja transformar em letra minuscula: ";
                getline(cin, entrada);
                cout << toLower(entrada.c_str()) << endl;
                break;

            case 3:
                cout << "Digite o texto que deseja inverter: ";
                getline(cin, entrada);
                cout << reverseText(entrada.c_str()) << endl;
                break;

            case 4:
                cout << "Digite o e-mail: ";
                getline(cin, entrada);
                cout << maskEmail(entrada.c_str()) << endl;
                break;

            case 5:
                cout << getAppInfo() << endl;
                break;
            
            case 6:
                cout << "Digite um texto para contagem de palavras: ";
                getline(cin, entrada);
                cout << contarPalavra(entrada.c_str()) << endl;
                break;

            case 0:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}