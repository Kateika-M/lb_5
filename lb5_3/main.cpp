#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string path = "/home/katya/Рабочий стол/data_v20.txt";
    ifstream fin;
    fin.open(path);
    double sr;
    double n;
    int i=0;
    if (!fin.is_open()) {//существует ли файл
        cout<<"Файл не найден !"<<endl;
    }else {
        cout<<"Файл открыт"<<endl;
        while (!fin.eof()) {
            if (n==0) {} else {
                cout<<n<<endl;
                i++;
                sr +=n;
            }
            fin>>n;
        }
        sr = sr/i;
        cout<<"Среднее арифметическое :"<<endl;
        cout<<sr<<endl;
        fin.close();
    }
    return 0;
}
