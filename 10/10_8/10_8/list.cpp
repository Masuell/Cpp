#include "list.h"

List::List()
{
	NumberOfItems = 0;
}


bool List::Push(Item aItem)
{
	if (!this->IsFull())
	{
		Items[NumberOfItems] = aItem;//pocitame od 0, preto najskor zapis a az potom inkrementacia
		NumberOfItems++;
		return true;
	}
	return false;
}

bool List::IsEmpty() const
{
	return NumberOfItems == 0;
}

bool List::IsFull() const
{
	return NumberOfItems == Max;
}

int List::ItemCount() const
{
	return NumberOfItems;
}
void List::Traverse(void (*pfun)(Item& aItem))
{
	for (int i = 0; i < NumberOfItems; i++)
	{
		(*pfun)(Items[i]);
	}
}

double List::ComputeAverageAge()
{
	if (NumberOfItems == 0)
		return 0;
	float SumAge = 0;
	for (int i = 0; i < NumberOfItems; i++)
	{
		SumAge += Items[i].Age;
	}
	AverageAge = SumAge / NumberOfItems;
	return AverageAge;
}