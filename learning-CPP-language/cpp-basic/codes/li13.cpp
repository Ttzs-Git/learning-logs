#include <iostream>
#include <stdio.h>
using namespace std;
class Matrix
{
private:
    int row;
    int col;
    int *p;

public:
    Matrix(int row = 0, int col = 0) : row(row), col(col)
    {
        if (row == 0 && col == 0)
        {
            p = nullptr;
        }
        else if (row * col < 0)
        {
            p = nullptr;
        }
        else
        {
            p = new int[col * row];
        }
    }
    ~Matrix()
    {
        delete[] p;
    }
    void disp();
    Matrix &operator=(const Matrix &p0)
    {
        if (row != p0.row || col != p0.col)
        {
            if (row == 0 && col == 0)
            {
                
                row = p0.row;
                col = p0.col;
                p = new int[row * col];
            }
            else
            {
                cout << "program terminated!" << endl;
                abort();
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                *(p + i * col + j) = *(p0.p + i * col + j);
            }
        }
        return *this;
    }
    Matrix operator+(const Matrix &p0)
    {
        if (row != p0.row || col != p0.col)
        {
            if (row == 0 || col == 0)
            {
              
                row = p0.row;
                col = p0.col;
                p = new int[row * col];
            }
            else
            {
                cout << "program terminated!" << endl;
                abort();
            }
        }
        Matrix ans(p0.row, p0.col);
        ans = p0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                *(ans.p + i * col + j) += *(p + i * col + j);
            }
        }
        return ans;
    }
    friend istream &operator>>(istream &in, Matrix &p0);
};
istream &operator>>(istream &in, Matrix &p0)
{
    for (int i = 0; i < p0.row; i++)
    {
        for (int j = 0; j < p0.col; j++)
            in >> *(p0.p + i * p0.col + j);
    }
    return in;
}
void Matrix::disp()
{
    for (int i = 0; i < row; i++)
    {
        // cout << '\t';
        for (int j = 0; j < col; j++)
            cout << *(p + i * col + j) << '\t';
        cout << endl;
    }
}
int main()
{
    int row_a, col_a, row_b, col_b;
    cin >> row_a >> col_a;
    Matrix A(row_a, col_a);
    cin >> A;
    cin >> row_b >> col_b;
    Matrix B(row_b, col_b), C;
    cin >> B;
    C = A + B;

    C.disp();
    A = B;
    cout << endl;
    A.disp();
    return 0;
}
