#include <iostream>
#include <stack>
using namespace std;
 
class treeNode{
 public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;

    treeNode(int val)
    {
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};
 

void zizagtraversal(treeNode* root)
{
   
    if (!root)
        return;
 
 
    stack<treeNode*> currentlevel;
    stack<treeNode*> nextlevel;
 

    currentlevel.push(root);
 
  
    bool lefttoright = true;
    while (!currentlevel.empty()) {
 
       
        treeNode* temp = currentlevel.top();
        currentlevel.pop();
 
       
        if (temp) {
 
            cout << temp->data << " ";
 
         
            if (lefttoright) {
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
            }
            else {
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
            }
        }
 
        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
    }
}
 

int main()
{
    // create tree
    treeNode* root =NULL;
    
    zizagtraversal(root);
 
    return 0;
}