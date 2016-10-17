#pragma once
#include "System.h"
#include "TestComponent.h"
#include "Component.h"
#include <vector>
using namespace std;
class TestSystem : System {
public:
	void Update();
	void Create(unsigned int entityId, TestComponent tc);
	void Remove(unsigned int entityId);
	TestSystem();
private:
	vector<Component<TestComponent>>  m_components;
};