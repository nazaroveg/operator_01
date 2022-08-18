// operator_01.cpp 
//

#include <iostream>


class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (const Fraction& other)
	{
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return true;	
		}
		else return false;
	}
	bool operator != (const Fraction& other)
	{
		if (denominator_ != other.denominator_ || numerator_ != other.numerator_)
		{
			return true;
		}
		else return false;
	}
	bool operator < (const Fraction& other) 
	{
		if (denominator_ == other.denominator_)
		{
			if (numerator_ < other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ > other.denominator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ != other.numerator_ && denominator_ != other.denominator_)
		{
			
			int temp = denominator_ * other.denominator_;
			numerator_ = numerator_ * temp;
			//denominator_ = denominator_ * temp;
			int numerator_1 = other.numerator_ * temp;
			//int denominator_1 = denominator_ * temp;
			if (numerator_ < other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	bool operator > (const Fraction& other)
	{
		if (denominator_ == other.denominator_)
		{
			if (numerator_ > other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ < other.denominator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ != other.numerator_ && denominator_ != other.denominator_)
		{

			int temp = denominator_ * other.denominator_;
			numerator_ = numerator_ * temp;
			//denominator_ = denominator_ * temp;
			int numerator_1 = other.numerator_ * temp;
			//int denominator_1 = denominator_ * temp;
			if (numerator_ > other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}





	}
	bool operator <= (const Fraction& other) 
	{
		if (denominator_ == other.denominator_)
		{
			if (numerator_ >= other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ <= other.denominator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ != other.numerator_ || denominator_ != other.denominator_)
		{

			int temp = denominator_ * other.denominator_;
			numerator_ = numerator_ * temp;
			//denominator_ = denominator_ * temp;
			int numerator_1 = other.numerator_ * temp;
			//int denominator_1 = denominator_ * temp;
			if (numerator_ < numerator_1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}



	}
	bool operator >= (const Fraction& other)
	{
		if (denominator_ == other.denominator_)
		{
			if (numerator_ <= other.numerator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ >= other.denominator_)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (numerator_ != other.numerator_ || denominator_ != other.denominator_)
		{

			int temp = denominator_ * other.denominator_;
			numerator_ = numerator_ * temp;
			//denominator_ = denominator_ * temp;
			int numerator_1 = other.numerator_ * temp;
			//int denominator_1 = denominator_ * temp;
			if (numerator_ > numerator_1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}

};
	
	
	



int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	

	
	
	
	return 0;



}


