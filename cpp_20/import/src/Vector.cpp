export module Vector;

export class Vector {
public:
    explicit Vector(int s);

    double &operator[](int i);

    [[nodiscard]] int size() const;  // 声明为nodiscard，调用该函数时的返回值应被使用，不适用将产生警告

private:
    double *elem;
    int sz;
};

Vector::Vector(int s) : elem{new double[s]}, sz{s} {}

double &Vector::operator[](int i) {
    return elem[i];
}

int Vector::size() const {
    return sz;
}