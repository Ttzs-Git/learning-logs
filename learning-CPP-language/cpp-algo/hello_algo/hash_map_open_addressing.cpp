#include <iostream>
#include <vector>
#include <string>

struct Pair
{
    int key;
    std::string val;
    Pair(int key, std::string val) : key(key), val(val) {}
};

class HashMapOpenAddressing
{
private:
    int HashSize;                         // 哈希表的大小
    int HashCapacity;                     // 哈希表的容量
    const double LoadTres;                // 负载因子
    const int Extention;                  // 标准扩容倍数
    Pair *TOMBSTONE = new Pair(-1, "-1"); // 标记符号
    std::vector<Pair *> buckets;

public:
    HashMapOpenAddressing() : HashCapacity(4), HashSize(0), LoadTres(2.0 / 3.0), Extention(2), buckets(HashCapacity, nullptr)
    {
    }
    ~HashMapOpenAddressing()
    {
        for (Pair *p : buckets)
        {
            if (p != nullptr && p != TOMBSTONE)
            {
                delete p;
            }
        }
        delete TOMBSTONE;
        buckets.clear();
    }
    int size()
    {
        return HashSize;
    }
    int Capacity()
    {
        return HashCapacity;
    }
    bool empty()
    {
        return size() == 0;
    }
    int hash(int num)
    {
        return num % Capacity();
    }
    int find(int num)
    {
        int index = hash(num);
        int first = -1;
        while (buckets[index] != nullptr)
        {
            if (buckets[index]->key == num)
            {
                if (first != -1)
                {
                    buckets[first] = buckets[index];
                    buckets[index] = TOMBSTONE;
                    index = first;
                }
                return index;
            }
            if (first == -1 && buckets[index] == TOMBSTONE)
            {
                first = index;
            }
            index = hash(index + 1);
        }
        return first == -1 ? index : first;
    }
    void push(int num, std::string str)
    {
        if (HashSize >= HashCapacity * LoadTres)
        {
            extend();
        }
        int index = find(num);
        if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
        {
            buckets[index]->val = str;
            return;
        }
        buckets[index] = new Pair(num, str);
        HashSize++;
    }
    std::string get(int num)
    {
        int index = find(num);
        if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
        {
            return buckets[index]->val;
        }
        return " ";
    }
    void remove(int num)
    {
        int index = find(num);
        if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
        {
            Pair *p = buckets[index];
            delete p;
            buckets[index] = TOMBSTONE;
            HashSize--;
        }
    }
    void extend()
    {
        HashCapacity *= Extention;
        std::vector<Pair *> tem(buckets);
        buckets = std::vector<Pair *>(HashCapacity, nullptr);
        for (Pair *p : tem)
        {
            if (p != nullptr && p != TOMBSTONE)
            {
                push(p->key, p->val);
                delete p;
            }
        }
    }
    void print()
    {
        for (Pair *p : buckets)
        {
            if (p == nullptr)
                std::cout << "nullptr" << std::endl;
            else if (p == TOMBSTONE)
                std::cout << "TOMBSTONE" << std::endl;
            std::cout << p->key << "->" << p->val << std::endl;
        }
    }
};
int main()
{
    return 0;
}