

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ofstream fout;
    fout.open("data.txt");
    fout << "Hello world" << endl;
    fout.close();
        
    fout.open("data.txt",ios_base::app);
   
    if (!fout.is_open())
    {
        cout << "File does not open"<<endl;
    }
    else
    {
        fout << "You are beautiful" << endl;
        fout.close();
    }

    ifstream fin("data.txt");
    if (!fin.is_open())
    {
        cout << "File does not open";
    }
    else
    {
        string boof;
        //fin >> boof; - если нужно читать по словам
        while (!fin.eof())
        {
            getline(fin, boof); // если нужно прочитать всю строку
            if (!fin.eof())
            {
                cout << boof << endl;
            }
        }
    }

}

