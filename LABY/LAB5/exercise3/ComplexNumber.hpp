#include <type_traits>

namespace kd{
    namespace jpo{
        template <typename T>
        requires std::is_arithmetic_v<T>
        class ComplexNumber{
            private:
                T m_real;
                T m_imag;
            
            public:
                ComplexNumber(T real = 0.0, T imag = 0.0) : m_real(real), m_imag(imag){};

                void setReal(T r){
                    m_real = r;
                }

                void setImag(T i){
                    m_imag = i;
                }

                T getReal(void) const{
                    return m_real;
                }

                T getImag(void) const{
                    return m_imag;
                }

                ComplexNumber operator+(const ComplexNumber& other) const{
                    return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
                }

                ComplexNumber operator+(T other) const {
                    return ComplexNumber(m_real + other, m_imag);
                }

                ComplexNumber& operator+=(const ComplexNumber& other){
                    m_real += other.m_real;
                    m_imag += other.m_imag;
                    return *this;
                }

                ComplexNumber& operator+=(T other) {
                    m_real += other;
                    return *this;
                }

                ComplexNumber operator-(const ComplexNumber& other) const{
                    return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
                }

                ComplexNumber operator-(T other) const {
                    return ComplexNumber(m_real - other, m_imag);
                }

                ComplexNumber& operator-=(const ComplexNumber& other){
                    m_real -= other.m_real;
                    m_imag -= other.m_imag;
                    return *this;
                }

                ComplexNumber& operator-=(T other) {
                    m_real -= other;
                    return *this;
                }

                ComplexNumber operator*(const ComplexNumber& other) const{
                    return ComplexNumber(m_real*other.m_real-m_imag*other.m_imag, 
                                        m_real*other.m_imag+m_imag*other.m_real);
                }

                ComplexNumber& operator*=(const ComplexNumber& other){
                    m_real = m_real*other.m_real-m_imag*other.m_imag;
                    m_imag = m_real*other.m_imag+m_imag*other.m_real;
                    return *this;
                }

                ComplexNumber operator/(const ComplexNumber& other) const{
                    T denominator{other.m_real * other.m_real + other.m_imag * other.m_imag};
                    return ComplexNumber((m_real * other.m_real + m_imag * other.m_imag) / denominator,
                                        (m_imag * other.m_real - m_real * other.m_real) / denominator);
                }

                ComplexNumber& operator/=(const ComplexNumber& other){
                    T denominator{other.m_real * other.m_real + other.m_imag * other.m_imag};
                    m_real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
                    m_imag = (m_imag * other.m_real - m_real * other.m_real) / denominator;
                    return *this;
                }

                bool operator==(const ComplexNumber& other) const{
                    return ((m_real == other.m_real) && (m_imag == other.m_imag));
                }

                bool operator!=(const ComplexNumber& other) const {
                    return !(operator==(other));
                }

                ComplexNumber& operator=(const ComplexNumber& other) {
                    if (this != &other) {
                        m_real = other.m_real;
                        m_imag = other.m_imag;
                    }
                    return *this;
                }

                friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
                    os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
                    return os;
                }
        };
    }
}