#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>
#include <iostream>
#include "Data.h"
using namespace std;
class Notebook
{
    friend ostream &operator<<(ostream &,const Notebook &);
public:
    Notebook();
    Notebook(int, int, int);
    Notebook(Notebook &);
    ~Notebook();
    void ligarDesligarAparelho();
    void executarPrograma(string prog);
    void aumVol();
    void dimVol();
    bool operator== (const Notebook &);
    const Notebook & operator= (const Notebook &)
    bool operator!= (const Notebook &)
    
private:
    
    bool ligado;
    string programa;
    int volume;
    static int versaoDaBios;
    Data dataDeFabricacao;
};

#endif // NOTEBOOK_H