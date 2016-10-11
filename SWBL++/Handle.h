#pragma once
#include <vector>
using namespace std;
class HandleBase {
public:
	
};

template <typename T>
class Handle : HandleBase{
public:
	Handle<T>(int id, vector<Component<T>>* collection) {
		m_id = id;
		m_collection = collection;
	}
	T GetComponent() {
		return 
	}
private:
	int m_id;
	vector<Component<T>> * m_collection;
};