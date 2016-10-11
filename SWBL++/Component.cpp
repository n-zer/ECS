#include "Component.h"

template <typename T>
Component::Component(T comp) {
	m_data = comp;
};

template <typename T>
T Component::GetData() {
	return m_data;
};