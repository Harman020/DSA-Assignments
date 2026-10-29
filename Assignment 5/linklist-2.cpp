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
	int count=0;
	int key;
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

	cout<<"\nEnter the value of key:-";
	cin>>key;
    Node* temp = head;
	while(temp!=nullptr)
	{
		if(temp->data==key)
		{
			count++;
		}
		temp=temp->next;
	}
	temp = head;
	Node* prev = nullptr;

	while (temp != nullptr)
	{
		if (temp->data == key)
		{
			if (prev == nullptr)
				head = temp->next;
			else
				prev->next = temp->next;

			Node* del = temp;
			temp = temp->next;
			delete del;
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}
	}

	cout << "Count: " << count << endl;
	cout << "Updated Linked List: ";
	show(head);

}
