#include <iostream>
using namespace std;

void printMatrix(int** matrix, size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
int maxMatrix(int** matrix, size_t rows, size_t columns) // Максимальный элемент 

{
    int max = matrix[0][0];
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
         {
            if (max < matrix[i][j])
                max = matrix[i][j];
         }
    return max;
}
int NullElem(int** matrix, size_t rows, size_t columns) // Подсчёт количества нулей
{
    int sum = 0;
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
        {
            if (matrix[i][j] == 0)
                sum++;
        }
    return sum;
}

void Nullnegativ(int** matrix, size_t rows, size_t columns) 
{   
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
        {
            if (matrix[i][j] < 0)
                matrix[i][j] ==0;
        }    
}

int SumDiagonMatrix(int** matrix, size_t rows)
    int sum = 0;
    for (size_t i = 0; i < rows; i++)
        {
            Sum +=matrix[i][i]               
        }    
    return sum;
}


int simple_value = 0;
for (int value = start; value < end; ++value) 
{
    int del = 2;
    while (true) 
    {
        if (del >= value)
        {
            cout << "value " << value << "- simple\n";
            ++simple_value;
            break;
        }
        if (value % del == 0) {
            cout << "value is not simple\n";
            break;
        }
        del++;
    }
}

int Polin(int** matrix, size_t length)
{
    int pol = 0;
    for (size_t i = 0; i < length; i++)
    {
        int num = matrix[i][length - i - 1];
        int value = 0;
        int rameins;
        do
        {
            rameins = num % 10;
            num = num / 10;
            value = value * 10 + rameins;



        } while (num != 0);
        if (value == matrix[i][length - i - 1])
        {
            pol++;
        }
    }
    return pol;
}


int main()
{
    srand(time(NULL));    

    size_t rows;
    cout << "Enter amount of rows in matrix: ";
    cin >> rows;
    size_t columns;
    cout << "Enter amount of columns in matrix: ";
    cin >> columns;

    int** matrix = new int* [rows];
    for (size_t i = 0; i < rows; i++)
        matrix[i] = new int[columns];
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
        {
            cout << "Enter " << j << " element of " << i << " row: ";
            cin >> matrix[i][j];
        }
    printMatrix(matrix, rows, columns);
    maxMatrix(matrix, rows, columns);
    NullElem(matrix, rows, columns);
    Nullnegativ(matrix, rows, columns);
    rows == columns ? SumDiagonMatrix(matrix, rows); (cout << " Not squart ");

    for (size_t i = 0; i < rows; i++)
        delete matrix[i];
    delete[] matrix;
    
    return 0;
}

int SumMainDiagonal(int** matrix, const int rows, const int colons)
{

    int sum = 0;
    for (int i = 0; i < rows; ++i)
    {
        sum += matrix[i][i];
    }
    return sum;
}

bool IsPrime(int number)
{
    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int CountPrimeNumbers(int** matrix, const int rows, const int colons)
{
    int count = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < colons; ++j)
        {
            if (IsPrime(matrix[i][j]))
                count++;
        }
    }
    return count;
}

bool IsPalindrome(int number)
{
    int n = 0;
    int temp = number;
    while (temp) 
    {
        n = 10 * n + temp % 10;
        temp /= 10;
    }
    if (temp == n)
        return true;
    else
        return false;
}

int CountPalindrome(int** matrix, const int rows, const int colons)
{
    int count = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < colons; ++j)
        {
            if (IsPalindrome(matrix[i][j]))
                count++;
        }
    }
    return count;
}

int main()
{


    srand(time(NULL));
    int rows, colons;
    cout << "Enter size of the matrix. Rows: ";
    cin >> rows;
    cout << "Colons: ";
    cin >> colons;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[colons];
    }


    FulFillMatrix(matrix, rows, colons);
    PrintMatrix(matrix, rows, colons);
    if (rows == colons)
    {
        cout << "Count of the main diagonal: " << SumMain(matrix, rows) << endl;
    }
    else
        cout << "Our matrix is not square!" << endl;
    cout << "Count prime numbers " << CountPrimeNumbers(matrix, rows, colons) << endl;
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    return 0;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main()
{


    return 0;
}