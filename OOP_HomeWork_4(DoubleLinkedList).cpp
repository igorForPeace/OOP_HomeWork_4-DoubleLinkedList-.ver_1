#include "DoubleList.h"

int main()
{

	srand(time(0));

	// добавление к голове значения

	/*DoubleList A;
	A.Print();
	A.AddToHead(2);
	A.Print();
	A.AddToHead(3);
	A.Print();
	cout << A.GetCount() << endl;*/

	// добавление к хвосту

	/*DoubleList A;
	A.Print();
	A.AddToTail(2);
	A.Print();
	A.AddToTail(3);
	A.Print();
	A.AddToHead(1);
	A.Print();
	cout << A.GetCount() << endl;*/


	// добавление элемента по индексу
	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.InsertInto(15, 4);
	A.Print();
	A.InsertInto(9, 0);
	A.Print();*/

	// удаление из головы списка

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.DeleteFromHead();
	A.Print();
	A.DeleteFromHead();
	A.Print();
	A.AddToHead(14);
	A.Print();*/

	// удаление по индексу

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.DeleteByIndex(4);
	A.Print();
	A.DeleteByIndex(6);
	A.Print();
	A.InsertInto(90, 4);
	A.Print();
	cout << A.GetCount() << endl;
	A.Clear();
	cout << A.GetCount() << endl;*/

	// поиск индекса по значению
	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	cout << A.IndexOf(10) << endl;
	cout << A.IndexOf(7) << endl;*/

	// реверс списка
	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.Reverse();
	A.Print();
	A.AddToHead(4);
	A.Print();
	A.InsertInto(80, 5);
	A.Print();
	A.AddToTail(13);
	A.Print();
	A.AddToTail(20);
	A.Print();
	A.AddToHead(40);
	A.Print();*/

	// сортировка по возрастанию и убыва
	/*DoubleList A;
	for (int i = 0; i < 20; i++)
	{
		A.AddToTail(rand()%100);
	}
	A.Print();
	A.SortAsc();
	A.Print();
	A.AddToHead(155);
	A.Print();
	A.AddToTail(12);
	A.Print();
	A.SortAsc();
	A.Print();
	A.SortDesc();
	A.Print();
	A.AddToHead(24);
	A.Print();
	A.SortDesc();
	A.Print();*/

	// установка значения по индексу

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.SetAt(5, 99);
	A.Print();*/
	

	// случайное перемешивание элементов списка
	
	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	A.Shuffle();
	A.Print();*/

	// сравнение двух списков

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	DoubleList B;
	for (int i = 0; i < 10; i++)
	{
		B.AddToTail(i+1);
	}
	B.Print();
	cout << boolalpha << A.Equals(B) << endl;*/

	// clone

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	DoubleList B;
	B.Clone(A);
	B.Print();
	B.AddToHead(5);
	B.Print();
	DoubleList C(B);
	C.Print();
	C.AddToHead(3);
	C.Print();
	DoubleList D(C);
	D.Print();*/

	// метод contains

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	cout << boolalpha << A.Contains(5) << endl;
	cout << boolalpha << A.Contains(50) << endl;*/

	// метод merge
	
	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	DoubleList B(A);
	B.Print();
	B.MergeWith(A);
	B.Print();
	B.InsertInto(50, 11);
	B.Print();
	B.AddToHead(100);
	B.Print();
	B.AddToTail(90);
	B.Print();*/

	// из списка в массив

	/*DoubleList A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToTail(i);
	}
	A.Print();

	int* arr = new int[10];
	A.ToArray(arr);
	cout << " Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	delete[] arr;*/


	// перегрузка операторов сравнения

	/*DoubleList A;
	for (int i = 0; i < 15; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	DoubleList B;
	for (int i = 0; i < 10; i++)
	{
		B.AddToHead(i);
	}
	B.Print();
	bool result = A != B;
	cout << boolalpha << result << endl;*/

	// перегрузка []

	
	/*DoubleList A;
	for (int i = 0; i < 25; i++)
	{
		A.AddToTail(rand() % 100);
	}
	A.Print();
	for (int i = 0; i < A.GetCount(); i++)
	{
		cout << A[i] << "  ";
	}*/


	// перегрузка =
	/*DoubleList A;
	for (int i = 0; i < 25; i++)
	{
		A.AddToTail(rand() % 100);
	}
	A.Print();
	DoubleList B;
	B = A;
	B.Print();*/



	// перегрузка +/+=
	/*DoubleList A;
	for (int i = 0; i < 15; i++)
	{
		A.AddToTail(i);
	}
	A.Print();
	DoubleList B;
	for (int i = 0; i < 15; i++)
	{
		B.AddToTail(i+50);
	}
	B.Print();
	A + B;
	B += A;
	A.Print();
	B.Print();*/


	

	





	

	


	return 0;
}
