#include <iostream>
#include <vector>
#include <string>

struct Pair
{
public:
    int key;
    std::string val;
    Pair(int key, std::string val) : key(key), val(val)
    {
    }
};

class ArrayHashMap
{
private:
    std::vector<Pair *> map;

public:
    ArrayHashMap(int capacity);
    ~ArrayHashMap();
    int size();
    bool empty();
    int hash(int num);
    std::string get(int num);
    void push(int num, std::string str);
    void remove(int num);
    std::vector<Pair *> PairSet();
    std::vector<int> KeySet();
    std::vector<std::string> ValSet();
    void Print();
};

ArrayHashMap::ArrayHashMap(int capacity)
{
    map = std::vector<Pair *>(100);
}

ArrayHashMap::~ArrayHashMap()
{
    for (int i = 0; i < size(); ++i)
    {
        Pair *p = map[i];
        delete p;
    }
    map.clear();
}

int ArrayHashMap::size()
{
    return map.size();
}

bool ArrayHashMap::empty()
{
    return size() == 0;
}

int ArrayHashMap::hash(int num)
{
    // 这是哈希表的核心
    return num % 100;
}

std::string ArrayHashMap::get(int num)
{
    int index = hash(num);
    Pair *p = map[index];
    if (p == nullptr)
        return " ";
    else
        return p->val;
}

void ArrayHashMap::push(int num, std::string str)
{
    Pair *p = new Pair(num, str);
    if (size() == map.capacity())
    {
        throw std::out_of_range("哈希表已满");
    }
    int index = hash(num);
    map[index] = p;
}

void ArrayHashMap::remove(int num)
{
    int index = hash(num);
    if (map[index] == nullptr)
        return;
    Pair *p = map[index];
    map[index] = nullptr;
    delete p;
}

std::vector<Pair *> ArrayHashMap::PairSet()
{
    std::vector<Pair *> vp;
    for (int i = 0; i != size(); ++i)
    {
        if (map[i] != nullptr)
            vp.push_back(map[i]);
    }
    return vp;
}

std::vector<int> ArrayHashMap::KeySet()
{
    std::vector<int> vint;
    for (int i = 0; i != size(); ++i)
    {
        if (map[i] != nullptr)
            vint.push_back(map[i]->key);
    }
    return vint;
}

std::vector<std::string> ArrayHashMap::ValSet()
{
    std::vector<std::string> vstr;
    for (int i = 0; i < size(); ++i)
    {
        if (map[i] != nullptr)
            vstr.push_back(map[i]->val);
    }
    return vstr;
}

void ArrayHashMap::Print()
{
    for (const auto &p : map)
    {
        std::cout << p->key << "->" << p->val << std::endl;
    }
}

int main()
{
    return 0;
}