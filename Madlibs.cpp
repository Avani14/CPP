#include <iostream>
#include <string>
using namespace std;
int main(){
    string color,pluralNoun,celebName;
    cout<< "Hello!! please enter a color\n";
    getline(cin,color);
    cout<< "Well Done!! Now please enter a  Plural Noun\n";
    getline(cin,pluralNoun);
    cout<< "Nice!! Now please enter a celebrity name\n";
    getline(cin,celebName);
    cout<<"Roses are "<<color<<"\n";
    cout<<"Violets are "<<pluralNoun<<"\n";
    cout<<"I love "<<celebName<<"\n";
    return 0;
}