#include <iostream>
#include <string.h>
#include "../include/calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    /*for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }*/
    if(argc < 2) err();
    if(strcmp(argv[1],"add") == 0){
        if(argc != 4){
            err();
            addHelp();
            return 1;
        }
        cout << add(stoi(argv[2]), stoi(argv[3])) << endl;
        return 0;
    }
    if(strcmp(argv[1],"subtract") == 0){
        if(argc != 4){
            err();
            subtractHelp();
            return 1;
        }
        cout << subtract(stoi(argv[2]) , stoi(argv[3])) << endl;

        return 0;
    }
    if(strcmp(argv[1],"volume") == 0){
        if(argc != 6) {
            err();
            volumeHelp();
            return 1;
        }
        cout << volume(double(stoi(argv[2])), double(stoi(argv[3])),double(stoi(argv[4])), double(stoi(argv[5]))) << endl;
        return 0;
    }
    if(strcmp(argv[1],"help") == 0) {
        help();
        return 0;
    }
    cout << "Nie znaleziono dzialania!\nUruchom:\nsimpleCalc help\naby uzyskac pomoc." << endl;
    return 1;
}