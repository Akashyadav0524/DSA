#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {

        return NULL;
    }
    cout << "Enter the data for left of" << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the dat for right of" << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelordertrav(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "PRinting the data of level order traversal" << endl;
    levelordertrav(root);
    return 0;
}