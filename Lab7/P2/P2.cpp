#include <iostream>
#define Max 30000 

using namespace std;

template <class T>
class Vector
{
private:
    T array[Max];
    int count;
public:
    Vector() : count(0) {}
    void Push(const T &value)
    {
        array[count++] = value;
    }
    T& Pop()
    {
        return array[--count];
    }
    void Delete(int index)
    {
        for (int i = index; i < count - 1; i++)
            array[i] = array[i + 1];
        count--;
    }
    void Insert(int index, const T &value)
    {
        if (index<0 || index>count) return;
        count++;
        for (int i = count - 1; i > index; i--)
            array[i] = array[i - 1];
        array[index] = value;
    }
    void Sort(bool(*isGreater)(const T& elem1, const T& elem2))
    {
        T aux;
        for(int i=0;i<count-1;i++)
            for (int j = i + 1; j < count; j++)
            {
                if (isGreater == nullptr)
                {
                    if (array[i] > array[j])
                    {
                        aux = array[i];
                        array[i] = array[j];
                        array[j] = aux;
                    }
                }
                else
                {
                    if (isGreater(array[i], array[j]) == 1)
                    {
                        aux = array[i];
                        array[i] = array[j];
                        array[j] = aux;
                    }
                }

            }
    }
    T& Get(int index)
    {
        return array[index];
    }
    void Set(const T& value, int index)
    {
        if(index<count)
            array[index] = value;
    }
    int Count()
    {
        return count;
    }
    void Print()
    {
        for (int i = 0; i < count; i++)
            cout << array[i] << " ";
        cout << "\n";
    }
    int FirstIndexOf(bool (*isEqual)(const T& elem1, const T& elem2), const T& obj)
    {
        for (int i = 0; i < count; i++)
            if (isEqual == nullptr)
            {
                if (array[i] == obj) return i;
            }
            else if (iSEqual(array[i], obj) == 1) return i;
        return -1;
    }
};


int main()
{
    Vector<int> vect;
    vect.Push(23);
    vect.Push(51);
    vect.Push(12);
    vect.Push(78);
    vect.Push(9);
    vect.Sort(nullptr);
    vect.Print();
    vect.Delete(2);
    vect.Insert(1, 2);
    cout << vect.Pop() << "\n";
    vect.Print();
    return 0;
}