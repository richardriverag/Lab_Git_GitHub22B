# include<iostream>
# include<string>

using namespace std;

int main(){

    string name;
    int edad;
    cout<<"bienvenido"<<endl;
    cout<<"ingrese su nombre: "<<endl;
    getline(cin,name);
    cout<<endl;
    cout<<"bienvenido: "<<name<<endl;
    cout<<"ingrese su edad "<<endl;
    cin>>edad;
    cout<<"tu edad es: "<<edad<<endl;

    return 0;
}