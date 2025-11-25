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
        system("cls");
        cout << "\n================ MENU ================\n";
        cout << "Por favor selecione uma das opções e aproveite :)\n";
        cout << "1 - Converter um texto para MAIUSCULAS\n";
        cout << "2 - Converter um texto para minusculas\n";
        cout << "3 - Inverter um texto\n";
        cout << "4 - Verificar mascarar e-mail\n";
        cout << "5 - Mostrar informações da DLL\n";
        cout << "6 - Contador de palavras\n";
        cout << "0 - Sair\n";
        cout << "\n======================================\n";
        cout << "Criado por: ArautD\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao){
            case 1:
            system("cls");
            cout << "Digite o texto que deseja transformar em letra maiúscula: ";
                getline(cin, entrada);
                cout << "Texto gerado: ";
                cout << toUpper(entrada.c_str()) << endl;
                system("pause");
                break;

            case 2:
            system("cls");
                cout << "Digite o texto que deseja transformar em letra minuscula: ";
                getline(cin, entrada);
                cout << "Texto gerado: ";
                cout << toLower(entrada.c_str()) << endl;
                system("pause");
                break;

            case 3:
            system("cls");
                cout << "Digite o texto que deseja inverter: ";
                getline(cin, entrada);
                cout << "Texto gerado: ";
                cout << reverseText(entrada.c_str()) << endl;
                system("pause");
                break;

            case 4:
            system("cls");
                cout << "Digite o e-mail: ";
                getline(cin, entrada);
                cout << "Email gerado: ";
                cout << maskEmail(entrada.c_str()) << endl;
                system("pause");
                break;

            case 5:
            system("cls");
                cout << "Texto gerado: ";
                cout << getAppInfo() << endl;
                system("pause");
                break;
            
            case 6:
            system("cls");
                cout << "Digite um texto para contagem de palavras: ";
                getline(cin, entrada);
                cout << "Texto gerado: ";
                cout << contarPalavra(entrada.c_str()) << endl;
                system("pause");
                break;

            case 0:
            system("cls");
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}