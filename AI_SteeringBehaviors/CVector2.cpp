#include "CVector2.h"



CVector2::CVector2()
{
	x = 0.0f;
	y = 0.0f;
}

CVector2::~CVector2() 
{

}

CVector2 CVector2::operator-(CVector2 & other)
{
	return CVector2();
}

void CVector2::normalize()
{
	float m = magnitud();
	x = x / m;
	y = y / m;
}

float CVector2::magnitud()
{
	float sumacuadrada = (x*x) + (y*y);
	float res = sqrt(sumacuadrada);
	return res;
}
