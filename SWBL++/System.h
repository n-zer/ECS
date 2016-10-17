#pragma once
#include "ISystem.h"
#include "TestComponent.h"
#include "Component.h"
#include "FreeVector.h"
#include <vector>
#include <map>
using namespace std;
template <typename T>
class System : ISystem {
public:
	void virtual Update() {}
	void Create(unsigned int entityId, T tc) {
		auto comp = Component<T>(entityId, tc);
		comp.m_active = true;
		m_handles[entityId] = m_components.Add(comp);
	}
	void Remove(unsigned int entityId) {
		m_components[entityId].m_active = false;
		m_components.Free(m_handles[entityId]);
		m_handles.erase(m_handles.erase(entityId));
	}
	T GetComponent(unsigned int entityId) {
		return m_components[m_handles[entityId]].GetData();
	}
	System() {
		m_components = FreeVector<Component<T>>();
		m_handles = map<unsigned int, unsigned int>();
	}
	~System(){}
protected:
	FreeVector<Component<T>>  m_components;
private:
	map<unsigned int, unsigned int> m_handles;
};