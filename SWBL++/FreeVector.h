#pragma once
#include <vector>
using namespace std;
template <typename T>
class FreeVector {
public:
	FreeVector() {

	}
	~FreeVector() {
		//m_vector.clear();
		//m_freeIndices.clear();
	}
	int add(T item) {
		if (m_freeIndices.size() > 0)
		{
			int index = m_freeIndices[0];
			m_vector[index] = item;
			m_freeIndices.erase(m_freeIndices.begin());
			return index;
		}
		else
		{
			m_vector.push_back(item);
			return m_vector.size() - 1;
		}
	}
	void free(unsigned int index) {
		if (m_vector.size() > index)
			m_freeIndices.push_back(index);
	}
	unsigned int size() {
		return m_vector.size();
	}
	T& operator[] (const int index) {
		return m_vector[index];
	}
private:
	vector<T> m_vector;
	vector<int> m_freeIndices;
};