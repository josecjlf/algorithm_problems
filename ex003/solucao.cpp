#include <bits/stdc++.h>
using namespace std;


struct questao{
    int ponto, tempo;
};

bool comparar(questao a, questao b){
    return (long long) a.ponto * b.tempo > (long long) b.ponto * a.tempo;
};

int main(){
    int n, t, m, x;

    cin >> n >> t >> m >> x;

    vector <questao> lista_questoes(n);

    for(int i = 0; i < n; i++){
        cin >> lista_questoes[i].ponto >> lista_questoes[i].tempo;
    }

    sort(lista_questoes.begin(), lista_questoes.end(), comparar);


    
    long long pontos_tartaruga = 0;
    long long pontos_lebre = 0;
    long long tempo_lebre = m * x;

    for(int i = 0; i < n; i++){
        if(t >= lista_questoes[i].tempo){
            pontos_tartaruga += lista_questoes[i].ponto;
            t -= lista_questoes[i].tempo;
        }
        else{
            pontos_tartaruga += (long long)lista_questoes[i].ponto * t / lista_questoes[i].tempo;
            break;

        }
    }

    for(int i = 0; i < n; i++){
        if(tempo_lebre >= lista_questoes[i].tempo){
            pontos_lebre += lista_questoes[i].ponto;
            tempo_lebre -= lista_questoes[i].tempo;
        }
        else{
            pontos_lebre += (long long)lista_questoes[i].ponto * tempo_lebre / lista_questoes[i].tempo;
            break;

        }
    }


   if(pontos_lebre>pontos_tartaruga){
    cout << "LEBRE" << endl;
   }

   else if(pontos_tartaruga > pontos_lebre){
    cout << "TARTARUGA" << endl;
   }
   else{
    cout << "EMPATE" << endl;
   }


    return 0;
}