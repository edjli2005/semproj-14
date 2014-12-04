// Owner: Conrad Appel

#include "index.h"

void Index::addDoc(const unsigned int id, Page* page) {
    if(pages.find(id) != pages.end()) pages.insert(std::pair<unsigned int, Page*>(id, page));
    // else it already exists
    // Should we allow replacing of existing pages?
    // ex: pages[id] = std::pair<unsigned int, Page*>(id, page);
    // which will add if not exists or replace if it does (I THINK...)
}

std::string Index::IDtoTitle(const unsigned int id) {
    return pages[id]->title;
}

std::string Index::IDtoText(const unsigned int id) {
    return pages[id]->body;
}
