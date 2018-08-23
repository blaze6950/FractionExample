#pragma once

class fraction
{
public:
	fraction() = default;
	fraction(int numerator, int denominator);

	void setNumerator(int numerator);
	void setDenominator(int denominator);

	int getNumerator() const;
	int getDenominator() const;

	const char* toString() const;

	fraction multiply(const fraction& fr) const;

	fraction operator/(const fraction& fr)const;

	fraction& operator++();
	fraction operator++(int);

	bool operator==(const fraction& fr) const;
	bool operator!=(const fraction& fr) const;

private:
	int _numerator = 0; //числитель
	int _denominator = 1; //знаминатель
};

fraction operator* (const fraction& fr1, const fraction& fr2);
fraction operator* (const fraction& fr1, int num);
fraction operator* (int num, const fraction& fr2);

fraction operator- (const fraction& fr);