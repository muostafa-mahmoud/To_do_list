#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class To_do
{
    map<string ,int>show;
    string ADD,REMOVE ,DONE;
    string start_point ;
public :
    To_do()
    {
        if(start_point != "NULL")
            while (1) {
                cout << "Enter your decision : ";
                getline(cin,start_point);
                cout << "\n" ;
                tests();
            }
        else
            cout<<"You have ended your To do list operation .\n ";
    }
    void tests()
    {
        if(start_point =="add")
            add_tasks();
        else if (start_point == "remove")
            remove_tasks();
        else if (start_point == "show")
            show_tasks();
        else if (start_point == "Done")
            done_tasks();
        else
            cout<<"Ekteb sa7 .";
    }
    void done_tasks ()
    {
        cout<<"Hello, enter the task you want to mark as done : ";
        getline(cin,DONE);
        cout<<"\n";
        if(show[DONE]==-1 )
        {
            show[DONE] = 1;
        }
    }
    void show_tasks()
    {
        for(auto SH : show)
        {
            if(SH.second == -1)
                cout<<SH.first <<" not done yet.\n";
            else if (SH.second == 1)
                cout<<SH.first<<" Done .\n";
        }

    }
    void add_tasks ()
    {
        cout<<"HELLO, enter the task you want to add : ";
        getline(cin,ADD);
        if(show[ADD])
            cout<<ADD<<" is already added"<<endl;
        else
            cout<<ADD<<" is added successfully.\n";
        show[ADD]= -1;
        cout<<"\n";
    }
    void remove_tasks()
    {
        cout<<"HELLO, enter the task you want to remove : ";
        getline(cin,REMOVE);
        cout<<REMOVE<<" is removed successfully.\n";
        show[REMOVE]=0;
        cout<<"\n";
    }
};

int main()
{
    To_do();
}