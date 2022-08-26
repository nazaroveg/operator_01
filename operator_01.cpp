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
		
		if (denominator_ != other.denominator_)
		{
			int numer_1 = numerator_ * other.denominator_;
			int denom_1 = denominator_ * other.denominator_;
			int numer_2 = other.numerator_ * denominator_;
			int denom_2 = other.denominator_ * denominator_;
			if (numer_1 == numer_2 && denom_1 == denom_2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	
	bool operator != (const Fraction& other)
	{
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return false;

		}

		if (denominator_ != other.denominator_)
		{
			int numer_1 = numerator_ * other.denominator_;
			int denom_1 = denominator_ * other.denominator_;
			int numer_2 = other.numerator_ * denominator_;
			int denom_2 = other.denominator_ * denominator_;
			if (numer_1 != numer_2 && denom_1 != denom_2)
			{
				return true;
			}
			
		}
		
			return false;
		
	}
	
	
	
	
	bool operator < (const Fraction& other)
	{
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return false;
		}
		if (denominator_ == other.denominator_)
		{
			if (numerator_ < other.numerator_)
			{
				return true;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ < other.denominator_)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (denominator_ != other.denominator_ && numerator_ != other.numerator_)
		{
			if (denominator_ != other.denominator_)
			{
				int numer_1 = numerator_ * other.denominator_;
				int denom_1 = denominator_ * other.denominator_;
				int numer_2 = other.numerator_ * denominator_;
				int denom_2 = other.denominator_ * denominator_;

				if (numer_1 < numer_2)
				{
					return true;
				}
				
			}
			
		}
		
		
			return false;
		
	}

	bool operator > (const Fraction& other)
	{
		
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return false;
		}
		if (denominator_ == other.denominator_)
		{
			if (numerator_ > other.numerator_)
			{
				return true;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ > other.denominator_)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (denominator_ != other.denominator_ && numerator_ != other.numerator_)
		{
			if (denominator_ != other.denominator_)
			{
				int numer_1 = numerator_ * other.denominator_;
				int denom_1 = denominator_ * other.denominator_;
				int numer_2 = other.numerator_ * denominator_;
				int denom_2 = other.denominator_ * denominator_;

				if (numer_1 > numer_2)
				{
					return true;
				}
				
			}
		}
		
		
			return false;
		
	}
	bool operator <= (const Fraction& other) 
	{
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return false;
		}
		if (denominator_ == other.denominator_)
		{
			if (numerator_ <= other.numerator_)
			{
				return true;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ <= other.denominator_)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (denominator_ != other.denominator_ && numerator_ != other.numerator_)
		{
			if (denominator_ != other.denominator_)
			{
				int numer_1 = numerator_ * other.denominator_;
				int denom_1 = denominator_ * other.denominator_;
				int numer_2 = other.numerator_ * denominator_;
				int denom_2 = other.denominator_ * denominator_;

				if (numer_1 <= numer_2)
				{
					return true;
				}
				
			}
		}
		
		
			return false;
		


	}
	bool operator >= (const Fraction& other)
	{
		if (denominator_ == other.denominator_ && numerator_ == other.numerator_)
		{
			return false;
		}
		if (denominator_ == other.denominator_)
		{
			if (numerator_ >= other.numerator_)
			{
				return true;
			}
		}
		if (numerator_ == other.numerator_)
		{
			if (denominator_ >= other.denominator_)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (denominator_ != other.denominator_ && numerator_ != other.numerator_)
		{
			if (denominator_ != other.denominator_)
			{
				int numer_1 = numerator_ * other.denominator_;
				int denom_1 = denominator_ * other.denominator_;
				int numer_2 = other.numerator_ * denominator_;
				int denom_2 = other.denominator_ * denominator_;

				if (numer_1 >= numer_2)
				{
					return true;
				}
				
			}
		}
		
			return false;
		
	}

   };
	
	
	



int main()
{
	Fraction f1(4, 3);
	Fraction f2(8, 6);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	

	
	
	
	return 0;



}


