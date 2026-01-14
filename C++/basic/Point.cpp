#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // ---------- Constructor ----------
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // ---------- 1. + operator ----------
    Point operator+(const Point& p) const {
        return Point(x + p.x, y + p.y);
    }

    // ---------- 2. - operator ----------
    Point operator-(const Point& p) const {
        return Point(x - p.x, y - p.y);
    }

    // ---------- 3. * operator ----------
    Point operator*(const Point& p) const {
        return Point(x * p.x, y * p.y);
    }

    // ---------- 4. / operator ----------
    Point operator/(const Point& p) const {
        return Point(x / p.x, y / p.y);
    }

    // ---------- 5. == operator ----------
    bool operator==(const Point& p) const {
        return (x == p.x && y == p.y);
    }

    // ---------- 6. != operator ----------
    bool operator!=(const Point& p) const {
        return !(*this == p);
    }

    // ---------- 7. < operator (useful for sorting) ----------
    bool operator<(const Point& p) const {
        return (x < p.x) || (x == p.x && y < p.y);
    }

    // ---------- 8. [] operator ----------
    int operator[](int index) const {
        if (index == 0) return x;
        if (index == 1) return y;
        throw out_of_range("Invalid index");
    }

    // ---------- 9. () operator (functor) ----------
    int operator()(int a, int b) const {
        return a + b + x + y;
    }

    // ---------- 10. Prefix ++ ----------
    Point& operator++() {
        x++; y++;
        return *this;
    }

    // ---------- 11. Postfix ++ ----------
    Point operator++(int) {
        Point temp = *this;
        x++; y++;
        return temp;
    }

    // ---------- 12. Assignment operator ----------
    Point& operator=(const Point& p) {
        if (this != &p) {
            x = p.x;
            y = p.y;
        }
        return *this;
    }

    // ---------- 13. << operator (friend) ----------
    friend ostream& operator<<(ostream& out, const Point& p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }

    // ---------- 14. >> operator (friend) ----------
    friend istream& operator>>(istream& in, Point& p) {
        in >> p.x >> p.y;
        return in;
    }
};

int main() {
    Point p1(3, 4), p2(1, 2);

    cout << "p1 = " << p1 << "\n";
    cout << "p2 = " << p2 << "\n\n";

    cout << "Addition: " << p1 + p2 << "\n";
    cout << "Subtraction: " << p1 - p2 << "\n";
    cout << "Multiplication: " << p1 * p2 << "\n";
    cout << "Division: " << p1 / p2 << "\n";

    cout << "Equality: " << (p1 == p2) << "\n";
    cout << "Not Equal: " << (p1 != p2) << "\n\n";

    cout << "Index 0 of p1: " << p1[0] << "\n";
    cout << "Index 1 of p1: " << p1[1] << "\n\n";

    cout << "Functor call p1(5,5): " << p1(5,5) << "\n";

    cout << "Prefix ++p1: " << ++p1 << "\n";
    cout << "Postfix p1++: " << p1++ << "\n";
    cout << "Value now: " << p1 << "\n";

    Point p3;
    p3 = p1;
    cout << "\nAfter assignment p3 = p1 → " << p3 << "\n";

    return 0;
}