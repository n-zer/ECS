#pragma once
#include "System.h"
#include "TestComponent.h"

class TestSystem : public System<TestComponent> {
public:
	void Update() {
		for (unsigned int c = 0; c < m_components.size(); c++) {
			m_components[c].GetData().value++;
		}
	}
};