#pragma once
#include <math.h>

class CVector2
{
public:
	CVector2();
	~CVector2();
	float x;
	float y;
	CVector2 operator -(CVector2 &other);
	float magnitud();
	void normalize();
private:

};

