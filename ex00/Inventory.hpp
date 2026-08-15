#pragma once

#include <string>

class Inventory {
public:
    void add(const std::string& item);
    void remove(const std::string& item);   // absent item: no-op, cycle 4 proves it
    bool has(const std::string& item) const;
    int  count() const;
};