
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream indata;
    int lines=0;
    int words=0;
    int ch=0;

    indata.open("day1.txt");

    //indata.get(ch);
    while(indata)
    {
        if(ch=='\n')
            lines++;
        else if(ch==' ')
            words++;
        else
            ch++;
       // indata.get(ch);
    }
    cout<<"Lines= "<<lines<<endl;
    cout<<"Words= "<<words<<endl;
    cout<<"Characters="<<ch<<endl;
}
