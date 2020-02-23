#include "payrolllist.h"
#include <string>
#include <iostream>

void PayRollList::printPayChecks()
{
	curr = head;
	while (curr != NULL)
	{
		std::cout << curr->p.getName() << " made ";
		std::cout << curr->p.getTotal() << " dollars for the week." << std::endl;
		curr = curr->next;
	}
}

PayRollList::PayRollList()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}



void PayRollList::insert(double hour, double rat)
{
	ListNode* n = new ListNode; //n is anything
	ListNode* temp;
	n->next = NULL; //find the node n is pointing to, go to the next one, set it to NULL
	n->p.setName();
	n->p.setRate(rat);
	n->p.setHours(hour);
	n->p.getTotal();

	if (head != NULL)
	{
		curr = head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}

			curr->next = n;	
	}

	else
	{
		head = n;
	}
}
