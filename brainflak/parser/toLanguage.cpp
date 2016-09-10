#include "parser.h"

unordered_list<string, rule*>* toLanguage(rule[]* match) {
    unordered_list<string, rule> *list;
    for (unsigned int i = 0; i < sizeof(*match) / sizeof(*rule); i++) {
        unordered_list[match[i]->name] = match[i];
    }
    return unordered_list;
};
