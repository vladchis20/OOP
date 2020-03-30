#pragma once
class Complex
{
public:
	Complex();

	Complex(float real, float img);

	~Complex() {}

	inline void setReal(float r) {
		this->m_real = r;
	}
	void setImg(float i);

	float getReal() const;

	float getImg();

	Complex show_compl(Complex c1);

	Complex show_exp(Complex c1);

	Complex add(Complex c1);

    Complex mult(Complex c1);

    Complex quot(Complex c1);

    float abs(Complex c1);

    float compute_polar(Complex c1);

private:
	float m_real;
	float m_img;
};
