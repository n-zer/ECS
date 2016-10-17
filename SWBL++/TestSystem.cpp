#include "TestSystem.h"

TestSystem::TestSystem() {
	m_components = vector<Component<TestComponent>>(MAX_ENTITIES);
}

void TestSystem::Create(unsigned int entityId, TestComponent tc) {
	auto comp = Component<TestComponent>(entityId, tc);
	comp.m_active = true;
	m_components[entityId] = comp;
}

void TestSystem::Remove(unsigned int entityId) {
	m_components[entityId].m_active = false;
}

void TestSystem::Update() {
	for (unsigned int c = 0; c < m_components.size(); c++)
		if(m_components[c].m_active)
			m_components[c].GetData().value++;
}