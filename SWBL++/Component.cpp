#include "Component.h"

template <typename T> Component<T>::Component(T comp) {
	m_data = comp;
};

template <typename T> T Component<T>::GetData() {
	return m_data;
};