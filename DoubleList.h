#pragma once
#include "All_Libraries.h"

class DoubleList
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
		Node* prev = nullptr;
	};
private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;
public:
	DoubleList();
	DoubleList(const DoubleList& original);
	~DoubleList();
	void AddToHead(int data);  // ���������� �������� � ������
	void AddToTail(int data); // ���������� ���� � ����� ������
	void InsertInto(int data, int position); // ���������� ���� � ������ �� ������ �������
	void DeleteFromHead(); // ������� ������� �� ������ ������
	void DeleteFromTail(); // �������� �� ����� ������
	void DeleteByIndex(int position); // �������� �� �������
	void Clear(); // �������  
	int GetCount() const;   // ������� �������� count
	bool IsEmpty();   // �������� �� ������� ������
	void Print() const;   // ����� ��������� ������
	int IndexOf(int data) const;  // ������� ������ �������� 
	void Reverse(); // ��������� ������� ���������� ������
	void SortAsc(); // ���������� �� ����������
	void SortDesc(); // ���������� �� ��������
	void Shuffle(); // ��������� ����������� ��������� ������
	void SetAt(int index, int number); // ��������� �������� �� ���������� �������
	bool Equals(const DoubleList& other); // ��������� ���� �������
	DoubleList& Clone(const DoubleList& original); // ����������� ������ ������ � ������
	bool Contains(int number); // �������� �� ��������� � ������ ����� ����������� � ���������
	DoubleList& MergeWith(const DoubleList& other); // ��������� � ����� ������ ������ ������
	int& ToArray(int*& arr); // �� ������ � ������
	bool operator < (const DoubleList& other);
	bool operator > (const DoubleList& other);
	bool operator <= (const DoubleList& other);
	bool operator >= (const DoubleList& other);
	bool operator == (const DoubleList& other);
	bool operator != (const DoubleList& other);
	DoubleList& operator = (const DoubleList& other);
	int operator [] (int index);
	DoubleList& operator +(const DoubleList& other);
	DoubleList& operator +=(const DoubleList& other);

};

