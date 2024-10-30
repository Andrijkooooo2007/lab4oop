#include <iostream>
#include <string>

using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    void inputData() {
        cout << "Введіть назву: ";
        getline(cin, title);
        cout << "Введіть ціну: ";
        cin >> price;
        cin.ignore();
    }

    void outputData() const {
        cout << "Назва: " << title << endl;
        cout << "Ціна: " << price << endl;
    }
};

class Book : public Publication {
private:
    int numPages;

public:
    void inputData() {
        Publication::inputData();
        cout << "Введіть кількість сторінок: ";
        cin >> numPages;
        cin.ignore();
    }

    void outputData() const {
        Publication::outputData();
        cout << "Кількість сторінок: " << numPages << endl;
    }
};

class Type : public Publication {
private:
    float duration;

public:
    void inputData() {
        Publication::inputData();
        cout << "Введіть час запису (хв): ";
        cin >> duration;
        cin.ignore();
    }

    void outputData() const {
        Publication::outputData();
        cout << "Час запису (хв): " << duration << endl;
    }
};

int main() {
    Book book;
    Type audio;

    cout << "Введіть дані для книги:" << endl;
    book.inputData();
    cout << "\nВведіть дані для аудіо-запису:" << endl;
    audio.inputData();

    cout << "\nДані про книгу:" << endl;
    book.outputData();
    cout << "\nДані про аудіо-запис:" << endl;
    audio.outputData();

    return 0;
}
