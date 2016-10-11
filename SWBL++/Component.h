#pragma once

template <class T>
class Component {
public:
	bool m_active = false;
	Component<T>(T comp) {
		m_data = comp;
	};
private:
	T m_data;
	T GetData() {
		return m_data;
	};
};
