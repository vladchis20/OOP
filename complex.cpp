#include "Complex.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

Complex::Complex()
{
	m_real = 0;
	m_img = 0;
}

Complex::Complex(float real, float img)
{
	m_real = real;
	m_img = img;
}

void Complex::setImg(float i) {
	this->m_img = i;
}

float Complex::getReal() const
{
	return m_real;
}

float Complex::getImg()
{
	return m_img;
}

Complex Complex::show_compl(Complex c1)
{
	cout << m_real << "+" << m_img << "*i";
}

Complex Complex::show_exp(Complex c1) //Betrag*e^i*fi
{
	cout << sqrt(c1.m_real*c1.m_real + c1.m_img*c1.m_img) << "*" << "e^" << "i*" << atan(c1.m_img/c1.m_real);
}

Complex Complex::add(Complex c1)
{
	Complex res;
	res.m_real = c1.m_real + m_real;
	res.m_img = c1.m_img + m_img;
	return res;
}

Complex Complex::mult(Complex c1)
{
    Complex res;
    res.m_real = c1.m_real*c1.m_img - m_real*m_img;
    res.m_img = c1.m_real*m_img + c1.m_img*m_real;
    return res;
}

Complex Complex::quot(Complex c1)
{
    Complex res;
    res.m_real = (c1.m_real*c1.m_img + m_real*m_img) / (c1.m_img*c1.m_img + m_img*m_img);
    res.m_img = (c1.m_img*m_real - c1.m_real*m_img) / (c1.m_img*c1.m_img + m_img*m_img);
    return res;
}

float Complex::abs(Complex c1)
{
    float res;
    res = sqrt(c1.m_real*c1.m_real + c1.m_img*c1.m_img); //Formel des Betrags
    return res;
}

float Complex::compute_polar(Complex c1) //Polarform mit Eulersche Formel
{
    float res;
    float fi;
    fi = atan(c1.m_img/c1.m_real);
    res = sqrt(c1.m_real*c1.m_real + c1.m_img*c1.m_img)*pow(2.71, fi);
    return res;
}
