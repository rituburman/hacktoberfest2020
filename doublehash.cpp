#include<iostream>
using namespace std;

class HashTable{
private:
  int array[11]={0};

public:

// Hash--------------------------------------------------------------
  int hash(int d){
    return d%11;
  }

  int hash2(int d){
    return 7-(d%7);
  }


  //insert---------------------------------------------------

  void insert(int data){

    int index = hash(data);

    if(isfull()==true){
      cout<<"HashTable is Full"<<endl;
      return;
    }
    if(array[index]==0 || array[index]==-1){
      array[index]=data;
    }
    else{
      linearProbing(data);
    }
  }

//linearProbing--------------------------------------------------------

  void linearProbing(int d){
    int i=0;

    while(i<11){
      int index = (hash(d)+(i*(hash2(d))))%11;
      if(array[index]==0 || array[index]==-1){
        array[index]=d;
        return;
      }
      i++;
    }
  }


  //Remove----------------------------------------------------

  void Remove(int data){

    int index = hash(data);

    if(array[index]==0){
      cout<<"Value is not in hash table"<<endl;
      return;
    }
    else if(array[index]==data){
      array[index]=-1;
      cout<<"value removed"<<endl;
      return;
    }
    else{
      DelLinear(data);
    }
  }


  //DelLinear---------------------------------------------

  void DelLinear(int d){
    int i=0;

    while(i<11){
      int index = (hash(d)+(i*(hash2(d))))%11;
      if(array[index]==d){
        array[index]=-1;
        return;
      }
      i++;
    }
      cout<<"value not found"<<endl;
  }


  //Search--------------------------------------------------------------

  void Search(int data){
    int index = hash(data);

    if(array[index]==0){
      cout<<"Value is Not present"<<endl;
      return;
    }

    else if(array[index]==data){
      cout<<"Value is present"<<endl;
      return;
    }
    else{
      SearchLinear(data);
    }
  }

  void SearchLinear(int d){
    int i=0;

    while(i<11){
      int index = (hash(d)+(i*(hash2(d))))%11;
      if(array[index]==d){
        cout<<"Value is Present"<<endl;
        return;
      }
      i++;
    }
      cout<<"value not found"<<endl;
  }


//isfull-----------------------------------------------------------

  bool isfull(){
    int count=0;
    for(int i=0; i<11; i++){
      if(array[i]==0 || array[i]==-1){
        count++;
      }
    }

    if(count==0){

    return true;
    }
    return false;
  }




  //display---------------------------------------------------

  void display(){
    for(int i=0;i<11;i++){
      cout<<array[i]<<endl;
    }
  }


};


int main()
{
  HashTable h;
  int input,value;

  do{
    cout<<"Enter 1 to Insert"<<endl;
    cout<<"Enter 2 to Delete"<<endl;
    cout<<"Enter 3 to Search"<<endl;
    cout<<"Enter 4 to display"<<endl;
    cout<<"Enter 5 for Exit"<<endl;
    cin>>input;

    switch(input){
      case 1:
        cout<<"Enter Data"<<endl;
        cin>>value;
        h.insert(value);
        break;

      case 2:
        cout<<"Enter Data"<<endl;
        cin>>value;
        h.Remove(value);
        break;

      case 3:
        cout<<"Enter Data"<<endl;
        cin>>value;
        h.Search(value);
        break;


      case 4:
        h.display();
        break;



    }
  }while(input!=5);



  return 0;
}
