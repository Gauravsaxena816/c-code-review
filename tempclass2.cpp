#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MyVector
{
public:
    MyVector() {}
    void push_back(const T &value)
    {
        m_data.push_back(value);
    }
    void pop_back()
    {
        m_data.pop_back();
    }
    size_t size() const
    {
        return m_data.size();
    }

private:
    std::vector<T> m_data;
};

int main()
{
    MyVector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "Size of vec: " << vec.size() << std::endl;
    vec.pop_back();
    std::cout << "Size of vec after pop_back(): " << vec.size() << std::endl;
    return 0;
}
