#include <iostream> // 使用std的核心模块
import Vector;

using namespace std; // 允许不使用std::前缀来调用命名空间std中的函数和变量

struct Node {
};

enum class Type {
    ptr,
    num,
};

struct Entry {
    string name;
    Type t;
    Node *p;
    int i;
};


int main() {

    Vector v{10};
    v.size();

    std::cout << "Hello, World!--" << v.size() << std::endl; // 输出Hello, World!
    return 0; // 程序执行成功，返回0
}
