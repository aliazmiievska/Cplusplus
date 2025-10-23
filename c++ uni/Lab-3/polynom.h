#ifndef POLYNOM_H
#define POLYNOM_H


class Polynom {
private:
    int degree;
    double* coef;
public:
    Polynom(int m = 0) {
        degree = m;
        coef = new double[degree + 1];
        coef[0] = 0;
        for (int n = 1; n <= degree; ++n) {
            coef[n] = 1.0 / (n + 1);
        }
    }

    Polynom(const Polynom& other) {
        degree = other.degree;
        coef = new double[degree + 1];
        for (int i = 0; i <= degree; ++i) {
            coef[i] = other.coef[i];
        }
    }

    ~Polynom() {
        delete[] coef;
    }

    Polynom& operator=(const Polynom& other) {
        if (this != &other) {
            delete[] coef;
            degree = other.degree;
            coef = new double[degree + 1];
            for (int i = 0; i <= degree; ++i) {
                coef[i] = other.coef[i];
            }
        }
        return *this;
    }

    bool operator==(const Polynom& other) const {
        if (degree != other.degree) return false;
        for (int i = 0; i <= degree; ++i) {
            if (coef[i] != other.coef[i]) return false;
        }
        return true;
    }

    bool operator<(const Polynom& other) const {
        int maxDeg = std::max(degree, other.degree);
        for (int i = maxDeg; i >= 0; --i) {
            double a = (i <= degree) ? coef[i] : 0.0;
            double b = (i <= other.degree) ? other.coef[i] : 0.0;
            if (a < b) return true;
            if (a > b) return false;
        }
        return false;
    }

    bool operator>(const Polynom& other) const {
        return other < *this;
    }

    Polynom operator-(const Polynom& other) const {
        int maxDeg = std::max(degree, other.degree);
        Polynom result(maxDeg);
        for (int i = 0; i <= maxDeg; ++i) {
            double a = (i <= degree) ? coef[i] : 0.0;
            double b = (i <= other.degree) ? other.coef[i] : 0.0;
            result.coef[i] = a - b;
        }
        return result;
    }

    Polynom& operator*=(int scalar) {
        for (int i = 0; i <= degree; ++i) {
            coef[i] *= scalar;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& out, const Polynom& p) {
        for (int i = p.degree; i > 0; --i) {
            if (i < p.degree) out << " + ";
            out << p.coef[i] << "*x^" << i;
        }
        if (p.degree >= 0) {
            out << " + " << p.coef[0];
        }
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Polynom& p) {
        int m;
        std::cout << "Enter degree m: ";
        in >> m;
        delete[] p.coef;
        p.degree = m;
        p.coef = new double[m + 1];
        p.coef[0] = 0;
        for (int n = 1; n <= m; ++n) {
            p.coef[n] = 1.0 / (n + 1);
        }
        return in;
    }
};

#endif