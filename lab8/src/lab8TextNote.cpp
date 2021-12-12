//
// Created by ADR on 29.11.2021.
//

#include "../include/lab8TextNote.h"
#include <iostream>

string TextNote::GetContent() {
    return content;
}

void TextNote::SetContent(string content) {
    this->content=content;
}

