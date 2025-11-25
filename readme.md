===========================================
Projeto: DESAFIO-24-11-TECHNE-PROWAY-DLL
Autor: Paulo Lemos
===========================================

Este projeto demonstra a criação e uso de uma DLL em C++,
com funções utilitárias de manipulação de texto.

-------------------------------------------
📂 Estrutura de Pastas
-------------------------------------------
 ├── systemtools.cpp      -> Código-fonte da DLL
 ├── systemtools.h        -> Header da DLL
 ├── systemtools.def      -> Arquivo de definição de exportação
 ├── systemtools.o        -> Objeto compilado
 ├── systemtools.dll      -> Biblioteca dinâmica
 └── libsystemtools.a     -> Biblioteca de importação
 └── main.cpp             -> Programa principal que usa a DLL
 └── app.exe              -> Executável do projeto

-------------------------------------------
⚙️ Como Compilar
-------------------------------------------

1. Gerar objeto da DLL:
   g++ -c -DBUILD_DLL systemtools.cpp -o systemtools.o

2. Criar a DLL e a biblioteca de importação (.a):
   g++ -shared -o systemtools.dll systemtools.o "-Wl,--out-implib,libsystemtools.a"

3. Compilar o programa principal (rodar dentro de Programa_Teste):
   g++ -o app.exe main.cpp -I../Dll -L../Dll -lsystemtools

-------------------------------------------
▶️ Como Executar
-------------------------------------------

1. Execute o programa:
   .\app.exe

-------------------------------------------
📋 Funcionalidades da DLL
-------------------------------------------
- toUpper(texto)       -> Converte para MAIÚSCULAS
- toLower(texto)       -> Converte para minúsculas
- reverseText(texto)   -> Inverte o texto
- maskEmail(email)     -> Mascara parte do e-mail
- getAppInfo()         -> Retorna informações da DLL
- contaPalavra(texto)  -> Conta número de palavras

-------------------------------------------
🖥️ Programa de Teste
-------------------------------------------
O programa exibe um menu interativo:

1 - Converter texto para MAIÚSCULAS
2 - Converter texto para minúsculas
3 - Inverter texto
4 - Mascarar e-mail
5 - Mostrar info da DLL
6 - Contador de palavras
0 - Sair

-------------------------------------------
