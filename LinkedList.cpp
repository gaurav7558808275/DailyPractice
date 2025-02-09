
#include<iostream>
#include<stdlib.h>
#include <memory>

using namespace std;

unique_ptr<int> bleh = make_unique<int>(10);
unique_ptr<int> B = bleh;

using namespace std;

typedef struct Node
{
    int data;
    struct Node* Next;
    // constructor

    Node(int data)
    {
        this->data = data;
        this->Next = NULL; 
        cout << "Node " << data << " created" << endl;
    }

}Node; 


int main()
{
    Node a(10);


    return 0;

}