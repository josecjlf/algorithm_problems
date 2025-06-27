#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compra(int caixa, vector<int> precos)
{
    int inicio = 0;
    int fim = precos.size() - 1;
    int total = 0;
    int temp = fim + 1;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        if (caixa >= precos[meio])
        {
            if (temp % 2 == 0)
            {
                temp = temp / 2;
                total = total + (temp);
                inicio = meio + 1;
            }
            else if (temp == 1)
            {
                total++;
                inicio = meio + 1;
            }
            else
            {
                temp = temp / 2;
                total = total + temp + 1;
                inicio = meio + 1;
            }
        }
        else
        {
            fim = meio - 1;
            if (temp % 2 == 0)
            {
                temp = (temp / 2) - 1;
            }
            else
            {
                temp = temp / 2;
            }
        }
    }

    return total;
}

int main()
{
    int quant_lojas;
    cin >> quant_lojas;

    vector<int> precos(quant_lojas);

    for (int i = 0; i < quant_lojas; i++)
    {
        cin >> precos[i];
    }
    sort(precos.begin(), precos.end());

    int quant_dias_compras;
    cin >> quant_dias_compras;

    vector<int> quant_dinheiro_p_dia(quant_dias_compras);

    for (int i = 0; i < quant_dias_compras; i++)
    {
        cin >> quant_dinheiro_p_dia[i];
    }

    for (int i = 0; i < quant_dias_compras; i++)
    {
        int temp = quant_dinheiro_p_dia[i];
        cout << compra(temp, precos) << endl;
    }

    return 0;
}