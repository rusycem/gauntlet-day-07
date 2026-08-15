#include "Inventory.hpp"
#include <algorithm> //sort count etc

void Inventory::add(const std::string& item)
{
    m_items.push_back(item);
}

int  Inventory::count() const
{
    return m_items.size();
}

bool Inventory::has(const std::string& item) const
{
    (void)item;
    return false; //need to return bool
}

//absent items no-op, cycle 4 proves it
void Inventory::remove(const std::string& item)
{
    auto it = std::find(m_items.begin(), m_items.end(), item);
    if (it != m_items.end()) {
        m_items.erase(it);
    }
}