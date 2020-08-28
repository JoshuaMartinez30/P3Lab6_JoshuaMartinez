#include <iostream>
#include "INTEGER.h"
using namespace std;

    void INTEGER::operator<<(int num){
        entero = num;
    }

    void INTEGER::operator<<(INTEGER num){
        *this = num;
    } 

    void INTEGER::operator!(){
        cout << entero << endl;
    } 

    INTEGER INTEGER::operator*(INTEGER num_multiplicar){
        int multiplicacion;
        multiplicacion = entero * num_multiplicar.entero;
        INTEGER resultado;
        resultado << multiplicacion;
        return resultado;      
    }

    INTEGER INTEGER::operator/(INTEGER num_division){
        int division;
        division = entero / num_division.entero;
        INTEGER resultado;
        resultado << division;
        return resultado;      
    }


    INTEGER INTEGER::operator+(INTEGER num_suma){
        int suma;
        suma = entero + num_suma.entero;
        INTEGER resultado;
        resultado << suma;
        return resultado;        
    } 

    INTEGER INTEGER::operator-(INTEGER num_resta){
        int resta;
        resta = entero - num_resta.entero;
        INTEGER resultado;
        resultado << resta;
        return resultado;    
    } 