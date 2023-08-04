#include <iostream>
#include "time.h"

using namespace std;

int Time::getHora() const {
    return hora;
}

int Time::getMinuto() const {
    return minuto;
}

int Time::getSegundo() const {
    return segundo;
}

void Time::setHora(int hora){
    this->hora = hora;
}

void Time::setMinuto(int minuto){
    this->minuto = minuto;
}

void Time::setSegundo(int segundo){
    this->segundo = segundo;
}

void Time::print() const {
    cout << hora << ":" << minuto << ":" << segundo << endl;
}

void Time::proximoSegundo(){
    segundo += 1;
    if(segundo >= 60){
        segundo = 0;
        minuto += 1;
    } if(minuto >= 60){
        minuto = 0;
        hora += 1;
    } if(hora >=60){
        hora = 0;
    }
}

Time::Time(int h, int m, int s) : hora(h), minuto(m), segundo(s){
    
}