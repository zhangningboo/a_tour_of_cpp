#include <iostream>
#include <cassert>

void f() noexcept {
    std::cout << "Never fail!" << std::endl;
}


int main() {
    f();
    assert(1 > 2);  // debug模式报错； release模式失效(不再检查/语句消失)
    static_assert(4 <= sizeof(int), "111");  // 编译时检查

    return 0;
}


