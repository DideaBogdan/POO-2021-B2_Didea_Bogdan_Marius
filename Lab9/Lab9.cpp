#include <iostream>
template <class K, class V>
struct Elem
{
    K key;
    V value;
    int index;
};

template <class K, class V>
class Map
{
    Elem<K, V> map[500];
    int count = 0;
public:
    V& operator [](K keyy) {
        for (int i = 0; i < count; i++)
            if (map[i].key == keyy) return map[i].value;

        map[count].key = keyy;
        map[count].index = count;
        return map[count++].value;
    }
    Elem<K,V>* begin() { return &map[0]; }
    Elem<K,V>* end() { return &map[count]; }
    void Set(const K& keyy, const V& valuee)
    {
        for (auto& [key, value, index] : (*this))
            if (key == keyy)
                value = valuee;
     }
    bool Get(const K& keyy, V& valuee)
    {
        for (auto [key, value, index] : (*this))
            if (key == keyy)
            {
                valuee = value;
                return true;
            }
        return false;
    }
    int Count()
    {
        return count;
    }
    void Clear()
    {
        count = 0;
    }
    bool Delete(const K& keyy)
    {
        for (auto& [key, value, index] : (*this))
            if (key == keyy)
            {   
                for (int i =index; i <count ; i++)
                {
                    map[i].key = map[i+1].key;
                    map[i].value = map[i+1].value;
                    
                }
                count--;
                return true;
            }
        return false;
    }
    bool Includes(const Map<K, V>& mapp)
    {
        bool exist;
        for (int i = 0; i < (*this).count; i++)
        {
            exist = 0;
            for (int j = 0; j < mapp.count; j++)
                if (map[i].key == mapp.map[i].key)
                    exist = 1;
            if (exist == 0) return false;
        }

        return true;
        
    }
};


int main()
{
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m.Set(10, "Miau");
    const char* S;
    m.Get(30, S);
    std::cout << m.Count() << "\n";
    printf("%s\n", S);
    m.Delete(20);
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    Map<int, const char*> mp;
    mp[10] = "Miau";
    mp[30] = "Poo";
    if (m.Includes(mp) == true) std::cout << "Include\n";
    else std::cout << "NU Include\n";
    m.Clear();
    std::cout << m.Count() << "\n";
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    return 0;
}

