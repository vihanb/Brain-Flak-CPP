#ifndef PARSER_H_
#define PARSER_H_

#include <string>
#include <vector>
#include <unordered_map>

using std::string
using std::vector
using std::unordered_map

namespace parser {

    struct rule {
        string name;
        vector<vector<string>> derivations;
    }

    template <typename T>
    struct match {
        string name;
        vector<T> data;
    }

    unordered_list<string, parser::rule*> *toLanguage(parser::rule[]* rules);

    parser::match exec(unordered_list<string, parser::rule*> *language);
}

#endif
