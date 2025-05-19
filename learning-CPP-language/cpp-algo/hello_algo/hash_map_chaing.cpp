#include <iostream>
#include <vector>
#include <string>

// 哈希表的链式寻址
struct Pair
{
    int key;
    std::string val;
    Pair(int key, std::string val) : key(key), val(val) {}
};

class HashMapChain
{
private:
    int MapSize;      // 键值对的个数
    int MapCapacity;  // 容量
    double LoadThres;    // 负载因子
    int ExtendRation; // 拓展数
    std::vector<std::vector<Pair *>> buckets;
    HashMapChain() : MapSize(0), MapCapacity(4), LoadThres(2.0 / 3.0), ExtendRation(2)
    {
        buckets.resize(MapCapacity);
    }
    ~HashMapChain()
    {
        for (int i = 0; i != buckets.size(); ++i)
        {
            for (Pair *p : buckets[i])
            {
                delete p;
            }
        }
        buckets.clear();
    }
    int size()
    {
        return MapSize;
    }
    int capacity()
    {
        return MapCapacity;
    }
    bool empty()
    {
        return capacity() == 0;
    }
    int hash(int num)
    {
        return num % capacity();
    }
    std::string get(int key)
    {
        int index = hash(key);
        for (Pair *p : buckets[index])
        {
            if (p->key == key)
            {
                return p->val;
            }
        }
        return " ";
    }
    // void push(int key, std::string str)
    // {
    //     int index = hash(key);
    //     if (size() >= capacity() * LoadThres)
    //     {
    //         extend();
    //     }
    //     // 内存充足的情况
    //     Pair *p = new Pair(key, str);
    //     buckets[index].push_back(p);
    //     delete p;
    // }
    void push(int key, std::string str)
    {
        int index = hash(key);
            if (size() >= capacity() * LoadThres)
        {
            extend();
        }
        for (Pair *p : buckets[index])
        {
            if (p->key == key)
            {
                p->val = str;
                return ;
            }
        }
        Pair *p = new Pair(key, str);
        buckets[index].push_back(p);
        delete p;
        MapSize++;
    }
    std::string remove(int key)
    {
        int index = hash(key);
        for (int i=0;i< buckets[index].size();++i)
        {
            Pair* p=buckets[index][i];
            if (p->key == key)
            {
                std::string str = p->val;
                Pair *tep = p;
                buckets[index].erase(buckets[index].begin()+i);;
                delete tep;
                MapSize--;
                return str;
            }
        }
        MapSize--;
        return " ";
    }
    void extend()
    {
        std::vector<std::vector<Pair *>> temp=buckets;
        MapCapacity*=ExtendRation;
        buckets.clear();
        buckets.resize(MapCapacity);
         for (auto &bucket : bucketsTmp) {
            for (Pair *pair : bucket) {
                put(pair->key, pair->val);
                // 释放内存
                delete pair;
            }
        }
    }
    void print()
    {
        for (int i = 0; i < buckets.size(); ++i)
        {
            for (Pair *p : buckets[i])
            {
                std::cout << p->key << "" << p->val << std::endl;
            }
        }
    }
}