#include <string>


namespace helloworld{

using namespace std;

class HelloWorld
{
private:
    /* data */
    string name;
    int m_age;
    bool m_sex;

public:
    HelloWorld(/* args */);
    ~HelloWorld();
    void print_info();
};


}
