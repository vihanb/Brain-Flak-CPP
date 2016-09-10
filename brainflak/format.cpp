#include "brainflak.h"

namespace brainflak {
    void format(string str, string format) {
        std::cout << "\033[" << format << "m" << str << "\033[0m";
    }
}
