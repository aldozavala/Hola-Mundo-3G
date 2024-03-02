#pragma once 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Dibujo{
    private:
    fstream file;


    public:
    Dibujo(string path){
        file.open("./assets/popo.txt");

    }
    ~Dibujo(){
        file.close();
    }
    void Dibujar(){
        string linea;
        while et(gline (file,linea))
        {
            cout<<linea<<endl;
        }
    }
};