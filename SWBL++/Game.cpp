#include "Game.h"

Game::Game() {
	m_idQueue = vector<int>();
	m_entities = vector<vector<System*>>();
	m_ts = new TestSystem();
	m_ts->Create(0, { 1 });
}

Game::~Game() {
	delete m_ts;
}

void Game::AttachSystem(unsigned int entityId, System* system) {
	m_entities[entityId].push_back(system);
}

void Game::Update() {
	m_ts->Update();
}