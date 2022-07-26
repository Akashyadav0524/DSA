#include<iostream>
using namespace std;
class sortingA{
  
    int size=5;
    int arr[5];
    public:
    void takingvalue(){
        cout<<"enter the values:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
   virtual void selectionSort(){
        int temp;
        int min;
      
        for(int i=0;i<size-1;i++){
            min=i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[min]){
                    
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
     
    }
   virtual void bubblesort(){
        int temp;
        for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

    }
    void display(){
          for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }


};
class sortingB:public sortingA{
    int size=5;
    int barr[5];
    public:
    void takingvalue(){
        cout<<"enter the values:"<<endl;
        for(int i=0;i<size;i++){
            cin>>barr[i];
        }
    }
   void selectionSort(){
        int temp;
        int min;
    
        for(int i=0;i<size-1;i++){
            min=i;
            for(int j=i+1;j<size;j++){
                if(barr[j]<barr[min]){
                    
                    min=j;
                }
            }
            temp=barr[i];
            barr[i]=barr[min];
            barr[min]=temp;
        }
     
    }
    void bubblesort(){
        int temp;
        for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(barr[j]>barr[j+1]){
                temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }

    }

    }
    void display(){
          for(int i=0;i<size;i++){
            cout<<barr[i]<<endl;
        }
    }

};

int main(){

    sortingA a;
    a.takingvalue();
    a.selectionSort();
    a.display();
    sortingB b;
    b.takingvalue();
    b.selectionSort();
    b.display();


return 0;
}