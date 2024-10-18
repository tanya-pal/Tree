
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

void inOrder(struct Node* root)
{
	stack<Node*> s;
	Node* curr = root;

	while (curr != NULL || s.empty() == false) {
		
		if (curr != NULL) {
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();

		cout << curr->data << " ";
		curr = curr->right;

	}
}

