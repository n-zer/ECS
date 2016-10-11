#pragma once
#include "Obj.h"

template <class T>
class Component {
public:
	bool m_active = false;
	Component(T comp);
private:
	Obj * m_owner;
	T m_data;
	T GetData();
};
