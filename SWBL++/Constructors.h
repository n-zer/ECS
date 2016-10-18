#pragma once
#include "Game.h"

class Constructors {
public:
	static void CreateTestObject(Game * g, TestComponent tc, TestComponent2 tc2) {
		unsigned int index = g->m_entities.add(vector<ISystem*>{g->m_ts, g->m_ts2});

		g->m_ts->Create(index, tc);
		g->m_ts2->Create(index, tc2);
	}
};