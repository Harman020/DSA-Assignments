#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head = nullptr;

Node* createNode(int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;
	return newNode;
}

void insertEnd(int value) {
	Node* newNode = createNode(value);

	if (head == nullptr) {
		head = newNode;
	} else {
		Node* temp = head;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = newNode;
	}

	cout << "Node inserted at end.\n";
}
void show(Node* h)
{
	Node* temp=h;
	while(temp!=nullptr)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
int main()
{
	int n;
	int a;
	cout<<"Enter the number of element in linked list:-";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"\nEnter the value of element "<<i+1<<" : ";
		cin>>a;
		insertEnd(a);
	}

	show(head);

	Node* fast = head;
	Node* slow = head;

	while (fast->next != nullptr && fast->next->next != nullptr)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	cout << "\nMiddle of Linked list: " <<slow->data << endl;
}
