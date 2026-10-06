#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string type;
    
    
    cout<<"nombre de sommet : ";
    cin >> N;
    cout<<"type de primitive : ";
    cin >> type;
    if (N<=0)
    {
        cout<<"le nombre de sommet est invalide";
    }
    
    int formes = 0;
    int rest =0;
    

    if (type == "POINTS") {
        rest =0;
        formes = N;
    }
    else if (type == "LINES") {
        rest=N%2;
        formes = N / 2;
    }
    else if (type == "TRIANGLES") {
        rest=N%3;
        formes = N / 3;
    }
    else if (type == "LINE_STRIP") {
        rest=0;
        formes = (N >= 2) ? N - 1 : 0;
    }
    else if (type == "TRIANGLE_STRIP") {
        rest=0;
        formes = (N >= 3) ? N - 2 : 0;
    }
    else if (type == "TRIANGLE_FAN") {
        rest=0;
        formes = (N >= 3) ? N - 2 : 0;
    }
   
    cout << formes<<" " ;
    cout<< type<<"            ";
    cout<<rest<<" "<<"sommet ";
    cout<<"restant"<<endl;

    return 0;
}