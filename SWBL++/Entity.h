#pragma once
#include "Handle.h"
#include <vector>
using namespace std;
class Entity {
public:
	template <typename T> T GetComponent();
private:
	vector<Handle> handles;
};
