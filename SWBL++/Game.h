#pragma once
#include "TestSystem.h"
#include <vector>

using namespace std;
class Game {
public:
	TestSystem * m_ts;
	TestSystem2 * m_ts2;
	Game();
	~Game();
	void Update();
	void RemoveEntity(unsigned int entityId);
	friend class Constructors;
private:
	FreeVector<vector<ISystem*>> m_entities;
};
