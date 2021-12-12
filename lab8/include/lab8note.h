//
// Created by ADR on 29.11.2021.
//

#ifndef JIPP2_LAB8NOTE_H
#define JIPP2_LAB8NOTE_H
#include <string>
using namespace std;

class Note{
private:
    string title;
public:
    string GetTitle();
    void SetTitle(string title);
    virtual string GetContent() = 0;
    virtual void SetContent(string content) = 0;
};

#endif //JIPP2_LAB8NOTE_H
