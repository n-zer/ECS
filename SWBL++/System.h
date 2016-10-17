#pragma once
#define MAX_ENTITIES 1000
class System {
public:
	void virtual Update() {};
	void virtual Create(unsigned int entityId) {};
	void virtual Remove(unsigned int entityId) {};
};