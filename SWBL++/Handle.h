#pragma once
#include <vector>
using namespace std;

class Handle{
public:
	Handle(int id, vector<void>* collection) {
		m_id = id;
		m_collection = collection;
	}

	template <typename T> T* GetComponent() {
		return static_cast<T*>(m_collection)[m_id];
	}
private:
	int m_id;
	vector<void> * m_collection;
};
