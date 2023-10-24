#include<iostream> 
using namespace std ; 
class Test {

    public:
    Test(int c = 0 ){
        this->count = c ; 

    }
    static void call (){
        ++count ; 
        cout<<"call fucntion : "<< count << endl ;  

    }
    int get_count_call(){
        return count ; 
    } 
    private:
   static  int count ; 
}; 
int Test::count = 0; 
int main(){
Test t1 ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
t1.call() ; 
cout<< t1.get_count_call() << "  fois " << endl ; 
}