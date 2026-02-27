#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;
    int removeIndex;

    do {
        cout << "\n--- TO-DO LIST MENU ---\n\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        cin.ignore(); // clear input buffer

        switch(choice) {

            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                cout << "\nTask added!\n";
                break;

            case 2:
                cout << "\n\nYour Tasks:\n";
                if(tasks.empty()) {
                    cout << "\nNo tasks available.\n";
                } else {
                    for(int i = 0; i < tasks.size(); i++) {
                        cout << i+1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "\nEnter task number to remove: ";
                cin >> removeIndex;

                if(removeIndex > 0 && removeIndex <= tasks.size()) {
                    tasks.erase(tasks.begin() + removeIndex - 1);
                    cout << "\nTask removed!\n";
                } else {
                    cout << "\nInvalid task number.\n";
                }
                break;

            case 4:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
