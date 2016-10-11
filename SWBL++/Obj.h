#pragma once
#include "Identifiable.h"
#include "Component.h"
#include "Handle.h"
#include <vector>
using namespace std;
class Obj {
public:
	template <typename T>
	T GetComponent<T>();
private:
	vector<HandleBase> handles;
};