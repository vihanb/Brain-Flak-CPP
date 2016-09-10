#include "brainflak.h"

namespace brainflak {
    void repl() {
        while (true) {
            brainflak::format("brainflak> ", "33");
            
            string prog;
            std::getline(std::cin, prog);
            std::cout << prog << std::endl;
        }
    }
}
