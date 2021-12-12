//
// Created by ADR on 29.11.2021.
//

#ifndef JIPP2_LAB8LISTNOTE_H
#define JIPP2_LAB8LISTNOTE_H
#include <string>
#include "lab8note.h"

using namespace std;


class ListNote : public Note{
private:
    string content[100];
public:
    string GetContent();
    void SetContent(string content);
};

#endif //JIPP2_LAB8LISTNOTE_H
