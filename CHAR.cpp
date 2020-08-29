#include <iostream>
#include <string>
#include "CHAR.hpp"
#include "STRING.hpp"
using namespace std;

void CHAR::operator<<(char caracter_new){
    caracter = caracter_new;
} 

void CHAR::operator<<(CHAR caracter_new){
    *this = caracter_new;
} 

STRING CHAR::operator+(CHAR caracter_new){
    string acumulador = "";
    STRING resultado;
    acumulador += caracter;
    acumulador += caracter_new.caracter;
    resultado << acumulador;
    return resultado;
}

void CHAR::operator!(){
    cout << caracter << endl;
} 
