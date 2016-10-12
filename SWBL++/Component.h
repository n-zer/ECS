#pragma once
#include "Entity.h"

template <typename T> class Component {
public:
	bool m_active = false;
	Component(T comp);
private:
	Entity * m_owner;
	T m_data;
	T GetData();
};
