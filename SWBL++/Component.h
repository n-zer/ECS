#pragma once

template <typename T> class Component {
public:
	bool m_active = false;
	Component() {}
	Component(unsigned int entityId, T comp) {
		m_entityId = entityId;
		m_data = comp;
	}

	T& GetData() {
		return m_data;
	}
	unsigned int GetEntityId() {
		return m_entityId;
	}
private:
	unsigned int m_entityId;
	T m_data;
};
