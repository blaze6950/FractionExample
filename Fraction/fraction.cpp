#include "fraction.h"
#include "Header.h"

fraction::fraction(int numerator, int denominator)
{
	setNumerator(numerator);
	setDenominator(denominator);
}

void fraction::setNumerator(int numerator)
{
	_numerator = numerator;
}
void fraction::setDenominator(int denominator)
{
	if (denominator != 0)
		_denominator = denominator;
	else
		_denominator = 1;
}

int fraction::getNumerator() const
{
	return _numerator;
}
int fraction::getDenominator() const
{
	return _denominator;
}

const char* fraction::toString() const
{
	static char str[30];
	sprintf_s(str, 30, "%d/%d", _numerator, _denominator);
	return str;
}

fraction fraction::multiply(const fraction& fr) const
{
	fraction res;
	res._numerator = _numerator * fr._numerator;
	res._denominator = _denominator * fr._denominator;

	return res;
}


fraction operator* (const fraction& fr1, const fraction& fr2)
{
	fraction res;
	res.setNumerator(fr1.getNumerator() * fr2.getNumerator());
	res.setDenominator(fr1.getDenominator() * fr2.getDenominator());

	return res;
}

fraction operator* (const fraction& fr1, int num)
{
	fraction res;
	res.setNumerator(fr1.getNumerator() * num);
	res.setDenominator(fr1.getDenominator() );

	return res;
}
fraction operator* (int num, const fraction& fr2)
{
	fraction res;
	res.setNumerator(fr2.getNumerator() * num);
	res.setDenominator(fr2.getDenominator());

	return res;
}

fraction operator- (const fraction& fr)
{
	fraction res;
	res.setNumerator(-fr.getNumerator());
	res.setDenominator(fr.getDenominator());

	return res;
}

fraction fraction::operator/(const fraction& fr)const
{
	fraction res;
	res._numerator = _numerator * fr._denominator;
	res._denominator = _denominator * fr._numerator;
	
	return res;
}

fraction& fraction::operator++()
{
	_numerator += _denominator;
	return *this;
}

fraction fraction::operator++(int)
{
	fraction old = *this;
	_numerator += _denominator;
	return old;
}

bool fraction::operator == (const fraction& fr) const
{
	return _numerator == fr._numerator && _denominator == fr._denominator;
}

bool fraction::operator != (const fraction& fr) const
{
	return _numerator != fr._numerator || _denominator != fr._denominator;
}