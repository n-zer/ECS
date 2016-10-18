#include "TestSystem.h"
#include "Game.h"

void TestSystem::Update(Game * g) {
	for (unsigned int c = 0; c < m_components.size(); c++) {
		m_components[c].GetData().value++;
	}
}

void TestSystem2::Update(Game * g) {
	for (unsigned int c = 0; c < m_components.size(); c++) {
		TestComponent& tc = g->m_ts->GetComponent(m_components[c].GetEntityId());
		tc.value++;
	}
}