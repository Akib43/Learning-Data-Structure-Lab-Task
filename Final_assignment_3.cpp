#include<iostream>
using namespace std;

struct student {
    string name;
    string id;
    float cg;
};

class Root {
public:
    student data;
    Root *left;
    Root *right;
    Root(student data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void Search(string item, Root *head) {
    int flag = 1;
    string flagName = "Root ";

    while (head != NULL) {
        student st = head->data;
        if (item == st.id) {
            cout << "Item Found at " << flagName << " Node " << flag << endl;
            cout << "Name: " << st.name << "\nID: " << st.id << "\nCGPA: " << st.cg << endl;
            return;
        } else if (item > st.id) {
            head = head->right;
            flagName = flagName + "Right ";
            flag++;
        } else if (item < st.id) {
            head = head->left;
            flagName = flagName + "Left ";
            flag++;
        }
    }
    cout << "Item Not Found" << endl;
}

Root* insertNode(student item, Root *head) {
    if (!head) {
        return new Root(item);
    }
    student st = head->data;
    if (item.id > st.id) {
        head->right = insertNode(item, head->right);
    } else if (item.id < st.id) {
        head->left = insertNode(item, head->left);
    }
    return head;
}

int main() {
    int n;
    cout << "Number of elements to input: ";
    cin >> n;

    string g_name, g_id;
    float g_cg;

    cout << "Root element (Name ID CGPA):\n";
    cout << "Name: ";
    cin.ignore();
    getline(cin, g_name);
    cout << "ID: ";
    cin >> g_id;
    cout << "CGPA: ";
    cin >> g_cg;
    student g_student = {g_name, g_id, g_cg};
    Root *root = new Root(g_student);

    cout << "Leaf elements (Name ID CGPA):\n";
    for (int i = 0; i < n; i++) {
        string name, id;
        float cg;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "ID: ";
        cin >> id;
        cout << "CGPA: ";
        cin >> cg;
        student new_student = {name, id, cg};
        insertNode(new_student, root);
        cout<<endl;
    }

    string search_id;
    cout << "Enter ID to Search: ";
    cin >> search_id;
    Search(search_id, root);

    return 0;
}
