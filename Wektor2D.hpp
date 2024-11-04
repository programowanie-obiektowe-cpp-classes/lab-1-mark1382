class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domyślny
    Wektor2D() : x(0), y(0) {}

    // Konstruktor z parametrami
    Wektor2D(double x, double y) : x(x), y(y) {}

    // Setter dla współrzędnej x
    void setX(double x) {
        this->x = x;
    }

    // Setter dla współrzędnej y
    void setY(double y) {
        this->y = y;
    }

    // Getter dla współrzędnej x
    double getX() const {
        return x;
    }

    // Getter dla współrzędnej y
    double getY() const {
        return y;
    }

    // Operator dodawania dla wektorów
    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(this->x + other.x, this->y + other.y);
    }

    // Operator iloczynu skalarnego
    double operator*(const Wektor2D& other) const {
        return this->x * other.x + this->y * other.y;
    }
};
