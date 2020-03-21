#include "HelloWorld.hpp"

#include <iostream>
#include <cstdlib>
#include <vector>

#include <algorithm>

using namespace helloworld;


HelloWorld::HelloWorld(/* args */)
{
    cout << "构造函数已执行" << endl;
    name = "LiuMing";
    m_age = 15;
    m_sex = true;
}

HelloWorld::~HelloWorld()
{
    cout << "析构函数已执行" << endl;
}

void HelloWorld::print_info()
{
    cout << "name:" << name << endl;
    cout << "age:" << m_age << endl;
    cout << "性别：" << m_age << endl;
}


int main(void)
{
    HelloWorld *handle_t = new HelloWorld();
    handle_t->print_info();

    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    sort(v1.begin(), v1.end(), greater<int>());

    for (auto && val : v1)
    {
        cout << val << ' ';
    }

    auto printStr = [](string_view str) {
        cout << str << endl;
    };

    printStr("Nice shot!\n");

    cout << "Hello CPP!" << endl;
    cout << "Hello World!" << endl;

    system("pause");
    return 0;
}