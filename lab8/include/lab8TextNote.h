//
// Created by ADR on 29.11.2021.
//

#ifndef JIPP2_LAB8TEXTNOTE_H
#define JIPP2_LAB8TEXTNOTE_H
#include "string"
#include "lab8note.h"

using namespace std;

class TextNote : public Note{
private:
    string content;
public:
    string GetContent();
    void SetContent(string content);
};

#endif //JIPP2_LAB8TEXTNOTE_H
