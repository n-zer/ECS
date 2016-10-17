#pragma once
#include "System.h"
#include "TestComponent.h"
#include "Component.h"
#include "FreeVector.h"
#include <vector>
#include <map>
using namespace std;
class TestSystem : System {
public:
	void Update();
	void Create(unsigned int entityId, TestComponent tc);
	void Remove(unsigned int entityId);
	TestComponent GetComponent(unsigned int entityId);
	TestSystem();
	~TestSystem();
private:
	FreeVector<Component<TestComponent>>  m_components;
	map<unsigned int, unsigned int> m_handles;
};