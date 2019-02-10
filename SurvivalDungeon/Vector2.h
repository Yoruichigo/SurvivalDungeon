#pragma once


struct Vector2
{
	double x, y;

	Vector2()
	{
		x = y = 0;
	}

	Vector2(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

	void Set(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

	void Set(const Vector2& obj)
	{
		x = obj.x;
		y = obj.y;
	}

	// operator 
	Vector2 &operator=(const Vector2& obj)
	{
		if(this != &obj)
		{
			Set(obj);
		}

		return *this;
	}

	void operator+= (const Vector2& obj)
	{
		x += obj.x;
		y += obj.y;
	}

	Vector2 operator+ (const Vector2& obj)
	{
		return Vector2(x + obj.x, y + obj.y);
	}

	bool operator< (const double& _length)
	{
		if (this->x < _length && this->y < _length)
		{
			return true;
		}
		return false;
	}

	bool operator> (const double& _length)
	{
		if (this->x > _length && this->y > _length)
		{
			return true;
		}
		return false;
	}
};

