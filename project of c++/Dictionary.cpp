#include<bits/stdc++.h>
using namespace std;
struct STRUCT
{
    string  book_id,
            BOOK_NAME,  AVALIABLE,  VALUE, KIND,  PLACE;
};
vector<STRUCT>ARRAY;


STRUCT ONE;

bool com (  const STRUCT &a,const  STRUCT&b)
{
    return (a.book_id<b.book_id);
}
vector<pair< int,string> >VECTOR;
bool com_name(  const STRUCT &a,const  STRUCT &b)
{
    return (a.BOOK_NAME<b.BOOK_NAME);
}
fstream FF;
map<string,int>C;
void SEARCH_LINEARR()
{
    cout<<"PUT   BOOK_NAME or  KIND   or   PLACE  to find it : ";
    string KEY;
    int flag=0;
    cin>>KEY;

    for (auto i :ARRAY)
    {
        if(i.BOOK_NAME ==KEY || i. KIND ==KEY|| i. PLACE ==KEY )
        {
            C[ i.book_id]++;
            VECTOR.push_back({C[ i.book_id],i.book_id});
            cout<<i. book_id<<"\t"<<i. BOOK_NAME<<"\t"<<i. BOOK_NAME<<"\t"<<i. AVALIABLE<<" \t"<<i. KIND<<"\t"<<i. PLACE<<"\n";
            flag=1;
        }
    }
    if(flag==0)
        cout<<"  not found\n";
}

void SEARCH()
{
    sort(ARRAY.begin(),ARRAY.end(),com);
    cout<<"PUT book_id to find it : ";
    string KEY;
    cin>>KEY;
    int low=0,upper=ARRAY.size()-1,M;
    while(true)
    {
        M=(low+upper)/2;
        if(ARRAY[M].book_id==KEY)
        {
            C[ ARRAY[M].book_id]++;
            VECTOR.push_back({C[ ARRAY[M].book_id],ARRAY[M].book_id});
            cout<<ARRAY[M].book_id<<"\t"<<ARRAY[M].BOOK_NAME<<"\t"<<ARRAY[M].AVALIABLE<<"\t"
                <<ARRAY[M].VALUE<<" \t"<<ARRAY[M].KIND<<"\t"<<ARRAY[M].PLACE<<"\n";
            break;
        }
        else if(low>upper)
        {
            cout<<"No founded  . \n";
            break;
        }
        if(ARRAY[M].book_id<KEY)
        {
            low=M+1;
        }
        else
            upper=M-1;
    }
}


void MODFIY()
{
    cout<<"  PUT book_id to MODFIY : ";
    string KEY;
    cin>>KEY;
    for( int i=0; i<ARRAY.size(); ++i)
    {
        if(ARRAY[i].book_id==KEY)
        {
            string s;
            cout<<"PUT  book_id : ";
            cin>>ONE. book_id;
            cout<<"PUT BOOK_NAME : ";
            cin>>ONE. BOOK_NAME;
            cout<<"PUT  AVALIABLE : ";
            cin>>ONE. AVALIABLE;
            cout<<"PUT  VALUE : ";
            cin>>ONE. VALUE;
            cout<<"PUT  KIND : ";
            cin>>ONE. KIND;
            cout<<"PUT PLACE : ";
            cin>>ONE. PLACE;
            ARRAY[i]=ONE;
            return;
        }
    }

    cout<<"  book_id not found  \n";
}
void REMOVE()
{
    cout<<"please PUT book_id to delete  : ";
    string KEY;
    auto it=ARRAY.begin();
    cin>>KEY;

    for(int i=0 ; it!=ARRAY.end(); ++i,++it)
    {
        if(ARRAY[i].book_id==KEY)
        {
            ARRAY.erase(it);
            return;
        }
    }
    cout<<"  book_id not found -\n";
}
void ADD()
{
    cout<<"PUT  book_id : ";
    cin>>ONE. book_id;

    cout<<"PUT BOOK_NAME : ";
    cin>>ONE. BOOK_NAME;
    cout<<"PUT  AVALIABLE : ";
    cin>>ONE. AVALIABLE;
    cout<<"PUT  VALUE : ";
    cin>>ONE. VALUE;
    cout<<"PUT  KIND : ";
    cin>>ONE. KIND;
    cout<<"PUT  PLACE : ";
    cin>>ONE. PLACE;
    ARRAY.push_back(ONE);
}

void  DISPLAY()
{
    sort(ARRAY.rbegin(),ARRAY.rend(),com_name);
    for(auto i : ARRAY)
        cout<<i. book_id<<"\t"<<i. BOOK_NAME<<"\t"<<i. BOOK_NAME<<"\t"<<i. AVALIABLE<<" \t"<<i. KIND<<"\t"<<i. PLACE<<"\n";
}
void PRINTT()
{
    sort(ARRAY.begin(),ARRAY.end(),com_name);
    for(auto i : ARRAY)
        cout<<i. book_id<<"\t"<<i. BOOK_NAME<<"\t"<<i. BOOK_NAME<<"\t"<<i. AVALIABLE<<" \t"<<i. KIND<<"\t"<<i. PLACE<<"\n";
}
void SAVEE()
{
    FF.open("system.txt",ios::out);
    for(auto i:ARRAY)
        FF<<i. book_id<<'|'<<i. BOOK_NAME<<'|'<<i. AVALIABLE<<'|'<<i. VALUE<<'|'<<i. KIND<<'|'<<i. PLACE<<'\n';
    FF.close();
}
void POP()
{
    sort(VECTOR.rbegin(),VECTOR.rend());
    map<string,int >flag;

    for(auto i : VECTOR)
    {
        if(flag[i.second]!=5)
        {
            for (auto x :ARRAY)
                if(x. book_id == i.second  )
                {
                    cout<<x. book_id<<"\t"<<x. BOOK_NAME<<"\t"<<x. BOOK_NAME<<"\t"<<x. AVALIABLE<<" \t"<<x. KIND<<"\t"<<x. PLACE<<"\n";
                    break;
                }
        }
        flag[i.second]=5;
    }
}
void first()
{

    FF. open("system.txt",ios::in);

    while(!(FF.eof()))
    {
        char w[20];
        FF.getline(w,20, '|' );
        ONE. book_id=w;
        FF.getline(w,20, '|' );
        ONE. BOOK_NAME=w;
        FF.getline(w,20, '|' );
        ONE. AVALIABLE=w;
        FF.getline(w,20, '|' );
        ONE. VALUE=w;
        FF.getline(w,20, '|' );
        ONE. KIND=w;
        FF.getline ( w, 20  );
        ONE. PLACE=w;
        if(FF.eof())
            break;
        ARRAY.push_back(ONE);
    }
    FF.close();
}

int main()
{
    first();

    string f;
    do
    {
        cout<<"  (1)    insert\n";
        cout<<"  (2)  print  (asc)  \n  (3)   to display (desc)  \n";
        cout<<"  (4) save\n (5) MODFIY \n";
          cout<< "  (6)   delete\n  (7) search \n  (8)  (binary_search)\n";
          cout<<"  (9)   display  5   book \n    if you need to exit press (Y & y )\n";
        cin>>f;
        if(f=="1")
        {
            ADD ();
        }
        else if(f=="2")
        {
            PRINTT();
        }
        else if(f=="3")
        {
            DISPLAY();
        }
        else if(f=="4")
        {
            SAVEE();
        }
        else if(f=="5")
        {
            MODFIY();
        }
        else if(f=="6")
        {
            REMOVE();
        }
        else if(f=="7")
        {
            SEARCH_LINEARR();
        }
        else if(f=="8")
        {
            SEARCH();
        }
        else if(f=="9")
        {
           POP();
        }
        else if(f=="y" || f=="Y")
        {
            SAVEE();
            return 0;
        }

    }
    while(1);
    return 0;
}


