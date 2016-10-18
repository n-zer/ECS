#include "TestSystem.h"
#include "Game.h"

void TestSystem::Update(Game * g) {
	//loops through all TestComponents and increments their values
	for (unsigned int c = 0; c < m_components.size(); c++) {
		m_components[c].GetData().value++;
	}
}

void TestSystem2::Update(Game * g) {
	//loops through all TestComponent2s, gets their corresponding TestComponents and increments their values
	//(GetComponent example)
	for (unsigned int c = 0; c < m_components.size(); c++) {
		TestComponent& tc = g->m_ts->GetComponent(m_components[c].GetEntityId());
		tc.value++;
	}
}