#include <iostream>
#include <stack>

using namespace std;

bool closing(char c)
{
    return (c == ')' || c == ']' || c == '}');
}

bool sameType(char a, char b)
{
    return ((a == '(' && b == ')') ||
            (a == '[' && b == ']') ||
            (a == '{' && b == '}'))
               ? true
               : false;
}

bool solve()
{

    string caracteres;
    cin >> caracteres;

    stack<char> expressao;

    for (char c : caracteres)
    {
        if (!expressao.empty() && closing(c))
        {
            if (!sameType(expressao.top(), c))
            {
                return false;
            }
            expressao.pop();
            continue;
        }
        expressao.push(c);
    }

    if (!expressao.empty())
    {
        return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{

    int qtd;
    cin >> qtd;

    for (int i = 0; i < qtd; i++)
    {
        if (solve())
        {
            cout << "S";
        }
        else
        {
            cout << "N";
        }
    }

    return 0;
}