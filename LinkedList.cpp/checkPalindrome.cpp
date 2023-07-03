//Approach

    //length nikaal kar shaayad do pointers use karein

//APPROACH 01

//COPY ELEMENTS INTO AN ARRAY AND THEN DO THE SIMPLE TWO POINTER APPROACH

/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

bool isPalindrome(Node *head)
{
    // write your code here
    //COPY ARRAY MAI ELEMENTS
    //approach 01

    vector<int> arr;

    Node* temp=head;

    while(temp!=NULL){
        if(temp->data!=-1){
            arr.push_back(temp->data);
        }
        temp=temp->next;
    }

    int s=0;
    int e=arr.size()-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }

        s++;
        e--;
    }

    return true;

}


//APPROACH 2 WITHOUT ADDITIONAL SPACE USAGE

//MID KE AAGE REVERSE KARDO 
//THEN COMPARE BOTH
