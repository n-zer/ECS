#include "TestSystem.h"

TestSystem::TestSystem() {
	m_components = FreeVector<Component<TestComponent>>();
	m_handles = map<unsigned int, unsigned int>();
}

TestSystem::~TestSystem() {
}

void TestSystem::Create(unsigned int entityId, TestComponent tc) {
	auto comp = Component<TestComponent>(entityId, tc);
	comp.m_active = true;
	m_handles[entityId] = m_components.Add(comp);
}

void TestSystem::Remove(unsigned int entityId) {
	m_components[entityId].m_active = false;
	m_components.Free(m_handles[entityId]);
	m_handles.erase(m_handles.erase(entityId));
}

TestComponent TestSystem::GetComponent(unsigned int entityId) {
	return m_components[m_handles[entityId]].GetData();
}

void TestSystem::Update() {
	for (unsigned int c = 0; c < m_components.size(); c++)
		if(m_components[c].m_active)
			m_components[c].GetData().value++;
}