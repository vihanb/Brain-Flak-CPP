#ifndef BRAINFLAK_H_
#define BRAINFLAK_H_

#include <iostream>
#include <string>

using std::string;

namespace brainflak {
    // Actually execute brainflak
    void exec(string code);

    // Function to launch the REPL
    void repl();

    // Apply ANSI format
    void format(string str, string format);
}

#endif
