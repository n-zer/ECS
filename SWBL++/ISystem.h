#pragma once
class ISystem {
public:
	void virtual Update() {};
	void virtual Create(unsigned int entityId) {};
	void virtual Remove(unsigned int entityId) {};
};