#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  node *next ;
};

void print(node *&head)
{
  while(head != NULL)
  {
    cout << head->data << " ";
   head = head->next;
  }
}

void insertHead(node *&head, int val)
{
  node *newNode = new node{val, head};
  head = newNode;

}

void insertTail(node *&head, int val)
{
  node *temp = head ;
  node *last = new node{val, NULL};
  while(temp->next != NULL)
  {
    temp = temp->next ;
  }
  temp->next = last;

}

void insert(node *&head, int val, int pos)
{
  int n = sizeof(head);
  node *temp = head;
  node *newNode = new node{val, NULL};
  if(pos < 1 || pos > n) return ;
  if(pos == 1) insertHead(head, val);
  for(int i = 1; i <= pos - 2; i++)
  {
    temp = temp->next ;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void eraseHead(node *&head)
{
  if(head == NULL) return;
  node *temp = head;
  head = head->next ;
  delete temp;
}
void eraseTail(node *&head)
{
  node *temp = head;
  if(head == NULL) return;
  while(temp->next->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = NULL;
}

void erase(node *&head, int pos)
{
  node *temp = head ;
  int n = sizeof(head);
  if(pos < 1 || pos > n) return;
  if(pos == 1) eraseHead(head);
  if(pos == n) eraseTail(head);
  for(int i = 1; i <= pos - 2; i++)
  {
    temp = temp->next;
  }
  node *newNode = temp->next ;
  temp->next = newNode->next ;
  delete temp;
}
int main()
{
  node *head = NULL;
  for(int i = 1; i < 5; i++) insertHead(head, i);
  //insertTail(head, 5);
  //insert(head, 3, 2);
  eraseTail(head);
  print(head);

}

