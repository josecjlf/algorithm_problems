#include <bits/stdc++.h>

using namespace std;

int main(){

    int q_bits;
    cout << "Quantos bits cada numero vai ter?" << endl;
    cin >> q_bits;

    vector<int> num1(q_bits);
    vector<int> num2(q_bits);
    vector<int> num3(q_bits+1);

    cout << "Digite o primeiro numero (msb -> lsb)" << endl;

    for(int i = q_bits-1; i >= 0; i--){
        cin >> num1[i];
    }

    cout << "Digite o segundo numero (msb -> lsb)" << endl;

    for(int i = q_bits-1; i >= 0; i--){
        cin >> num2[i];
    }

    int carry = 0;

    for(int i = 0; i < q_bits; i++){

        int temp = num1[i] + num2[i] + carry;
        carry = temp / 2;
        int value = temp % 2;

        num3[i] = value;

    }

    num3[q_bits] = carry;

    cout << "Resultado:" << endl;

    for(int i = q_bits; i >= 0; i--){
        cout << num3[i] << " ";
    }



    return 0;
}