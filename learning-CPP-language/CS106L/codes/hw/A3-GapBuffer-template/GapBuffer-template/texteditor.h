#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include "GapBuffer.h"
#include <ifstream>
#include <mutex>


class TextEditor {
public:
    TextEditor(const std::string& filename);
    ~TextEditor();
    TextEditor(const TextEditor& other) = delete;
    TextEditor& operator=(const TextEditor& rhs) = delete;
    TextEditor(TextEditor&& other) = delete;
    TextEditor& operator=(TextEditor&& rhs) = delete;

    void press_left();
    void press_right();
    void press_key(char ch);
    char retrieve_next_character();
    char retrieve_character(size_t position);

private:
    GapBuffer<char> _buffer;
    std::ifstream _file;
    std::shared_mutex _mutex;
    
};

#endif // TEXTEDITOR_H
