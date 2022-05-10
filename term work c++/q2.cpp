#include<iostream>
using namespace std;

int main()
{
    string str, d, u, l, sc, total;

    cout<<"Input : ";
    getline(cin,str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str.at(i)>='0' && str.at(i)<='9')
        {
            d = d+str.at(i);
        }
        else if(str.at(i)>='A' && str.at(i)<='Z')
        {
            u = u+str.at(i);
        }
        else if(str.at(i)>='a' && str.at(i)<='z')
        {
            l = l+str.at(i);
        }
        else
        {
            sc = sc+str.at(i);
        }
    }

    total = d + u + l + sc;
    cout<<"Output : "<<total;
}