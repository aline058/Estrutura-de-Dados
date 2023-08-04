#ifndef TIME_H
#define TIME_H

class Time {
    private:
    int hora;
    int minuto;
    int segundo;
    
    public:
    Time(int hora = 0, int minuto = 0, int segundo = 0);
    int getHora() const;
    void setHora(int hora);
    int getMinuto() const;
    void setMinuto(int minuto);
    int getSegundo() const;
    void setSegundo(int segundo);
    void print() const;
    void proximoSegundo();

};

#endif