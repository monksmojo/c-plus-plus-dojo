#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream st;
    char text[50];
    st.open("file_stream.txt",ios::out);
    if(!st)
    {
        cout<<"File creation failed\n";
    }
    else
    {
        cout<<"Creation of file and Writing to file\n";
        cout<<"write content to file\n";
        cin.getline(text,50);
        st<<text;
        st.close();
    }
    st.open("file_stream.txt",ios::in);
    if(!st)
    {
        cout<<"No such file\n";
    }
    else
    {
        cout<<"Opening file and Reading from a file\n";
        char ch;
        while (!st.eof())
        {
            st >>ch;
            cout << ch;
        }
        st.close();
    }
    return 0;
}
