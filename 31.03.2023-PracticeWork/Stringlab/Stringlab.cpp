#include <iostream> 
using namespace std;
const int getLength(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
void prepend(char*& oldStr, char* newStr) {
    int oldLength = getLength(oldStr);
    int newLength = getLength(newStr);
    int totalLength = oldLength + newLength + 1;
    char* tmp = new char[oldLength] {};
    for (int i = 0; i < oldLength; ++i) {
        tmp[i] = oldStr[i];
    }
    delete[] oldStr;
    oldStr = new char[totalLength] {};
    for (int i = 0; i < oldLength; ++i) {
        oldStr[i] = newStr[i];
    }
    //for (int i = newLength, j{}; i < totalLength, j < totalLength; ++i, ++j) {
    //    oldStr[i] = tmp[j];
    //}
    for (int i{ newLength }, j{}; i < totalLength - 1; ++i, ++j) {
        oldStr[i] = tmp[j];
    }
}

void append(char*& oldStr, char* newStr) {
    int oldLength = getLength(oldStr);
    int newLength = getLength(newStr);
    int totalLength = oldLength + newLength + 1;
    char* tmp = new char[oldLength] {};
    for (int i = 0; i < oldLength; ++i) {
        tmp[i] = oldStr[i];
    }
    delete[] oldStr;
    oldStr = new char[totalLength] {};
    for (int i = 0; i < oldLength; ++i) {
        oldStr[i] = tmp[i];
    }
    for (int i{ oldLength }, j{}; i < totalLength - 1; ++i, ++j) {
        oldStr[i] = newStr[j];
    }
}
void edit(char*& StrEdit, char*& Edit)
{
    Edit = StrEdit;
    delete[] StrEdit;
    cout << "Enter new text: ";
    cin.getline(Edit, 20);
}
int main() {

#pragma region Part1 
    // string - массив из символов 
    // char - один символ 
    // char весит 1 байт 
    // C style string - массив из символов, заканчивающийся нулем 
    // \0 - нулевой символ, в ASCII таблице 0 

//    char arr[] {'E', 'l', 'v', 'i', 'n', '\0'}; 
//    char arr[]{"Elvin"}; 

//    char *name = new char[]{"Elvin"}; 
//    cout << (int *) &name[3] << endl; // Выводит адрес в памяти 

#pragma endregion 

#pragma region Part2 

    char* name = new char[20] {};
    char* surName = new char[20] {};
    char* new_edit = new char[20] {};
    bool isExit = false;
    int choice{};

    cout << "Enter your name: ";
    cin.getline(name, 20);

    cout << "Enter your surname: ";
    cin.getline(surName, 20);

    cout << "Hello, " << name << " " << surName << endl;

    while (!isExit) {
        char* newString{};

        cout << "Enter choice: \n"
            "1. Append\n"
            "2. Edit\n"
            "3. Prepend\n"
            "4. Exit\n";

        cin >> choice;

        switch (choice) {
        case 1:

            cin.ignore();
            newString = new char[20] {};
            cout << "Enter new string: ";
            cin.getline(newString, 20);
            append(name, newString);
            cout << "New string: " << name << endl;
            break;
        case 2:
            cin.ignore();
            edit(name, new_edit);
            cout << new_edit << endl;
            break;
        case 3:
            cin.ignore();
            newString = new char[20] {};
            cout << "Enter new string: ";
            cin.getline(newString, 20);
            prepend(name, newString);
            cout << "New string: " << name << endl;
            break;
        case 4:
            isExit = true;
            break;
        }
    }
#pragma endregion 

    return 0;
}
