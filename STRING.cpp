#include <iostream>
#include <string>
#include <cstring>
#include "STRING.h"
using namespace std;
    
    void STRING::operator<<(string cadena_new){
        cadena = cadena_new;
    } 

    void STRING::operator<<(STRING cadena_new){
        *this = cadena_new;
    } 

    STRING STRING::operator*(int repeticion){
        string acumulador = "";
        for (int i = 0; i < repeticion; i++){
            acumulador += cadena;
        } 
        cadena = acumulador;
        return *this;       
    } 

    void STRING::operator!(){
        cout << cadena << endl;
    } 