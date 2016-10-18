#include "Game.h"
#include "Constructors.h"

int main() {
	Game g = Game();
	Constructors::CreateTestObject(&g, { 1 }, { 'c' });
	g.Update();
	g.RemoveEntity(0);
	return 0;
}