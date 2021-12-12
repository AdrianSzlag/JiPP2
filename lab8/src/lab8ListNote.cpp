//
// Created by ADR on 29.11.2021.
//

#include "../include/lab8ListNote.h"
#include <string>
#include <iostream>
using namespace std;

string ListNote::GetContent() {
    string a = "";
    for (int i = 0; i < 100; ++i) {
        a += content[i] + '\n' ;
    }
    return a;
}

void ListNote::SetContent(string content) {
    int index = 0;
    int i = 0;
    while (1) {
        int j = 1;
        while (content[i+j] != '\n' && content[i+j] != '\0') {
            j++;
        }
        if (j > 1){
            this->content[index] = content.substr(i, j);
            i+=j;
            index++;
        }
        else break;
    };


    int a;
}

