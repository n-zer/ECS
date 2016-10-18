#pragma once
#include "System.h"
#include "TestComponent.h"

class TestSystem : public System<TestComponent> {
public:
	void Update(Game * g);
};

class TestSystem2 : public System<TestComponent2>{
public:
	void Update(Game * g);
};