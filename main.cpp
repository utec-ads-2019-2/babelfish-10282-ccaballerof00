#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string,string> diccionario;

void separar_strings(vector<string> a)
{
    for(auto it : a)
    {
        string palabra1;
        string palabra2;
        bool p1 = true;
        bool p2 = false;
        for(int i = 0; i < it.length();i++ )
        {
            if(p2)
            {
                palabra2+=it[i];
            }
            if(it[i]==' ')
            {
                p1 = false;
                p2 = true;
            }
            if(p1)
            {
                palabra1+=it[i];
            }
        }
        diccionario[palabra2] = palabra1;
        palabra1.clear();
        palabra2.clear();
    }
}

int main() {
    string inp="hola";
    vector<string> inps;
    while(!inp.empty())
    {
        getline(cin,inp);
        inps.push_back(inp);
    }
    separar_strings(inps);
    string inp2;
    while(cin>>inp2)
    {
        if(!diccionario[inp2].empty())
        {
            cout<<diccionario[inp2]<<endl;
        } else
            {
                cout<<"eh"<<endl;
            }
    }

}