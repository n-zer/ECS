#pragma once
#include "System.h"
#include "TestSystem.h"
#include <vector>

using namespace std;

class Game {
public:
	TestSystem * m_ts;
	void AttachSystem(unsigned int entityId, System *system);
	Game();
	~Game();
	void Update();
private:
	vector<int> m_idQueue;
	vector<vector<System*>> m_entities;
};
