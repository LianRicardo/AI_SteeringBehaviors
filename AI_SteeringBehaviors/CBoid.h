#pragma once
#include "CGameObject.h"
#include "CVector2.h"

class CBoid : public CGameObject
{
public:
	CBoid();
	~CBoid();
private:
	CVector2 direccion;
	CVector2 seek();
	CVector2 flee();
	CVector2 pursue();
	CVector2 evade();
	CVector2 wander_random();
	CVector2 wander_dir();
	CVector2 follow_path();
	CVector2 patrol();
};

