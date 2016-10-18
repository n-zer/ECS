#include "Game.h"

Game::Game() {
	m_entities = FreeVector<vector<ISystem*>>();
	m_ts = new TestSystem();
	m_ts2 = new TestSystem2();
}

Game::~Game() {
	delete m_ts;
	delete m_ts2;
}

void Game::Update() {
	m_ts->Update(this);
	m_ts2->Update(this);
}

void Game::RemoveEntity(unsigned int entityId) {
	if (m_entities.size() > entityId)
	{
		vector<ISystem*> systems = m_entities[entityId];
		for (ISystem* s : systems) {
			s->Remove(entityId);
		}
		m_entities.free(entityId);
	}
}