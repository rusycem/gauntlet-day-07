#include "Inventory.hpp"
#include <algorithm> //sort count etc

void Inventory::add(const std::string& item)
{
    m_items.push_back(item);
}
