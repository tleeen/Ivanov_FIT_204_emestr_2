
#include <iostream>
#include <fstream>

using namespace std;

#define MAX_N 100000

long double mas[MAX_N];

void creat_random_set_of_numbers();
double* creat_array_1(int);
double* creat_array_2(int);

void ex_1_1(double*&, int&);
void ex_1_2(double*&, int&);

void ex_2_1(double*&, int&);
void ex_2_2(double*&, int&);

void ex_3_1(double*&, int&);
void ex_3_2(double*&, int&);

void ex_4(double*&, int&);

void ex_5(double*&, int&);

void ex_6(double*&, int&);

void ex_7_1(double*&, int&);
void ex_7_2(double*&, int&);

void ex_8_1(double*&, int&);
void ex_8_2(double*&, int&);

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    do
    {
        cout << "Введите номер задания 1-8 (введите '0' для выхода)" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_1_1(arr, size);
                ex_1_2(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_1_1(arr, size);
                ex_1_2(arr, size);
                delete[] arr;
            }
            break;
            }

        }
        break;
        case 2:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_2_1(arr, size);
                ex_2_2(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_2_1(arr, size);
                ex_2_2(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 3:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_3_1(arr, size);
                ex_3_2(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_3_1(arr, size);
                ex_3_2(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 4:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_4(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_4(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 5:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_5(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_5(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 6:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_6(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_6(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 7:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_7_1(arr, size);
                ex_7_2(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_7_1(arr, size);
                ex_7_2(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        case 8:
        {
            int k;
            cout << "Если вы хотите ввести колличество элементов массива сами, введите 1, иначе введите 2" << endl;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                int size;
                cout << "Введите длинну массива" << endl;
                cin >> size;
                creat_random_set_of_numbers();
                double* arr = creat_array_1(size);
                ex_8_1(arr, size);
                ex_8_2(arr, size);
                delete[] arr;
            }
            break;
            case 2:
            {
                int size;
                size = rand() % 10000;
                creat_random_set_of_numbers();
                double* arr = creat_array_2(size);
                ex_8_1(arr, size);
                ex_8_2(arr, size);
                delete[] arr;
            }
            break;
            }
        }
        break;
        }
    } while (a != 0);

    return 0;
}

void creat_random_set_of_numbers()
{
    fstream arr_1("C:\\Users\\79236\\Desktop\\Универ\\ЯП\\Программы\\Senestr_1\\Senestr_1\\arr\\arr_1.txt", ios::out);
    for (int i = 0; i < MAX_N; i++)
    {
        double r = (double)(rand() % 10000) / (double)100 + (double)(rand() % 10000);
        mas[i] = r;
        arr_1 << mas[i] << " ";
    }
}

double* creat_array_1(int size)
{
    double* arr = new double[size];
    ifstream fin("C:\\Users\\79236\\Desktop\\Универ\\ЯП\\Программы\\Senestr_1\\Senestr_1\\arr\\arr_1.txt");
    for (int i = 0; i < size; i++)
    {
        fin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[size - 1] << endl;
    return arr;
}
double* creat_array_2(int size)
{
    double* arr = new double[size];
    ifstream fin("C:\\Users\\79236\\Desktop\\Универ\\ЯП\\Программы\\Senestr_1\\Senestr_1\\arr\\arr_1.txt");
    for (int i = 0; i < size; i++)
    {
        fin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[size - 1] << endl;
    return arr;
}

void ex_1_1(double*& arr, int& size)
{
    double l;
    cout << "Введите число" << endl;
    cin >> l;
    double* buff = new double[size + 1];
    for (int i = 0; i < size; i++)
    {
        buff[i] = arr[i];
    }
    buff[size] = l;
    for (int i = 0; i < size; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size] << endl;
}

void ex_1_2(double*& arr, int& size)
{
    cout << " " << endl;
    double l;
    l = rand();
    double* buff = new double[size + 1];
    for (int i = 0; i < size; i++)
    {
        buff[i] = arr[i];
    }
    buff[size] = l;
    for (int i = 0; i < size; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size] << endl;
}

void ex_2_1(double*& arr, int& size)
{
    double l;
    cout << "Введите число" << endl;
    cin >> l;
    double* buff = new double[size + 1];
    for (int i = 1; i < size + 1; i++)
    {
        buff[i] = arr[i - 1];
    }
    buff[0] = l;
    for (int i = 0; i < size + 1; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size] << endl;
}

void ex_2_2(double*& arr, int& size)
{
    cout << " " << endl;
    double l;
    l = rand();
    double* buff = new double[size + 1];
    for (int i = 1; i < size + 1; i++)
    {
        buff[i] = arr[i - 1];
    }
    buff[0] = l;
    for (int i = 0; i < size; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size] << endl;
}

void ex_3_1(double*& arr, int& size)
{
    double l;
    cout << "Введите число" << endl;
    cin >> l;
    int o;
    cout << "Введите позицию числа" << endl;
    cin >> o;
    double* buff = new double[size + 1];
    if (o >= 0 && o <= size + 1)
    {
        for (int i = o + 1; i < size + 1; i++)
        {
            buff[i] = arr[i - 1];
        }
        for (int i = 0; i < o; i++)
        {
            buff[i] = arr[i];
        }
        buff[o] = l;
        for (int i = 0; i < size; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size] << endl;
    }
    else
    {
        cout << "ошибка";
    }
}

void ex_3_2(double*& arr, int& size)
{
    cout << " " << endl;
    double l;
    l = rand();
    int o;
    cout << "Введите позицию числа" << endl;
    cin >> o;
    double* buff = new double[size + 1];
    if (o >= 0 && o <= size + 1)
    {
        for (int i = o + 1; i < size + 1; i++)
        {
            buff[i] = arr[i - 1];
        }
        for (int i = 0; i < o; i++)
        {
            buff[i] = arr[i];
        }
        buff[o] = l;
        for (int i = 0; i < size; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size] << endl;
    }
    else
    {
        cout << "ошибка";
    }
}

void ex_4(double*& arr, int& size)
{
    double* buff = new double[size - 2];
    for (int i = 0; i < size - 1; i++)
    {
        buff[i] = arr[i];
    }
    for (int i = 0; i < size - 2; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size - 2] << endl;
}

void ex_5(double*& arr, int& size)
{
    double* buff = new double[size - 2];
    for (int i = 0; i < size - 1; i++)
    {
        buff[i] = arr[i + 1];
    }
    for (int i = 0; i < size - 2; i++)
    {
        cout << buff[i] << " ";
    }
    cout << buff[size - 2] << endl;
}

void ex_6(double*& arr, int& size)
{
    int o;
    cout << "Введите позицию числа" << endl;
    cin >> o;
    double* buff = new double[size - 2];
    if (o >= 0 && o <= size - 2)
    {
        for (int i = o - 1; i < size - 1; i++)
        {
            buff[i] = arr[i + 1];
        }
        for (int i = 0; i < o - 1; i++)
        {
            buff[i] = arr[i];
        }
        for (int i = 0; i < size - 2; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size - 2] << endl;
    }
    else
    {
        cout << "ошибка";
    }
}

void ex_7_1(double*& arr, int& size)
{
    double l;
    cout << "Введите число" << endl;
    cin >> l;
    int p;
    p = 0;
    while ((arr[p] != l) * (p < size))
    {
        p++;
    }
    if (p >= size)
    {
        cout << "Схожих чисел нет" << endl;
    }
    else
    {
        double* buff = new double[size + 1];
        for (int i = 0; i < p + 1; i++)
        {
            buff[i] = arr[i];
        }
        buff[p + 1] = l;
        for (int i = p + 2; i < size + 1; i++)
        {
            buff[i] = arr[i - 1];
        }
        for (int i = 0; i < size; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size] << endl;
    }
}

void ex_7_2(double*& arr, int& size)
{
    cout << " " << endl;
    double l;
    l = rand();
    int p;
    p = 0;
    while ((arr[p] != l) * (p < size))
    {
        p++;
    }
    if (p >= size)
    {
        cout << "Схожих чисел нет" << endl;
    }
    else
    {
        double* buff = new double[size + 1];
        for (int i = 0; i < p + 1; i++)
        {
            buff[i] = arr[i];
        }
        buff[p + 1] = l;
        for (int i = p + 2; i < size + 1; i++)
        {
            buff[i] = arr[i - 1];
        }
        for (int i = 0; i < size; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size] << endl;
    }
}

void ex_8_1(double*& arr, int& size)
{
    double l;
    cout << "Введите число" << endl;
    cin >> l;
    int p = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == l)
        {
            p++;
        }
    }
    if (p != 0)
    {
        int y;
        y = p;
        p = 0;
        double* buff = new double[size - y];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == l)
            {
                p++;
            }
            else buff[i - p] = arr[i];
        }
        size -= p;
        for (int i = 0; i < size - y; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size - y] << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}

void ex_8_2(double*& arr, int& size)
{
    cout << " " << endl;
    double l;
    l = rand();
    int p = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == l)
        {
            p++;
        }
    }
    if (p != 0)
    {
        int y;
        y = p;
        p = 0;
        double* buff = new double[size - y];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == l)
            {
                p++;
            }
            else buff[i - p] = arr[i];
        }
        size -= p;
        for (int i = 0; i < size - y; i++)
        {
            cout << buff[i] << " ";
        }
        cout << buff[size - y] << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}








