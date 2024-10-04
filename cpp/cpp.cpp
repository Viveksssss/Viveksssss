#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        int age;
        char *name;
    public:
        base(int a, char *n):age(a),name(n){
            cout<<"Constructor of base class called"<<endl;
        }
        virtual ~base(){
            cout<<"Destructor of base class called"<<endl;
            delete[] name;
        }
        base(const base& b){
            cout<<"Copy constructor of base class called"<<endl;
            age=b.age;
            name=new char[strlen(b.name)+1];//char*尾部有\0，所以需要+1
            strcpy(name,b.name);
        }
        base& operator=(const base&b){
            cout<<"Assignment operator of base class called"<<endl;
            if(this!=&b){
                age=b.age;
                delete[] name;
                name=new char[strlen(b.name)+1];
                strcpy(name,b.name);
            }
            return *this;
       } 

       virtual void display(){
            cout<<"Age: "<<age<<", Name: "<<name<<endl;
       }

};

class derived:public base{
    public :
        int marks;
        char *subject;
    public:
        derived(int a,char*n,int m,char* p):base(a,n),marks(m),subject(p){
            cout<<"Constructor of derived class called"<<endl;
        }
        ~derived() override{
            cout<<"Destructor of derived class called"<<endl;
        }
        derived(const derived& d):base(d),marks(d.marks){
            cout<<"Copy constructor of derived class called"<<endl;
        }
        derived& operator=(const derived&d){
            cout<<"Assignment operator of derived class called"<<endl;
            if(this!=&d){
                base::operator=(d);
                marks=d.marks;
            }
            
            return *this;
        }
        void display(){
            cout<<"Marks: "<<marks<<endl;
        }

};

class awov{
    public :
        awov(){
            cout<<"Constructor of awov class called"<<endl;
        }
        virtual ~awov() {
            cout << "Destructor of awov class called" << endl;
        }
        awov(const awov&){
            cout<<"Copy constructor of awov class called"<<endl;
        }
        
        awov(const awov &&){
            cout<<"Move constructor of awov class called"<<endl;
        }

        virtual void display(){ cout<<"awov class"<<endl; }
};



class awov1:public awov{
    public :
        char *name;

        awov1(char*p):name(p){
            cout<<"Constructor of awov1 class called"<<endl;
        }
        ~awov1() override{
            // awov::~awov();没必要显式调用，子类的析构调用时，父类的析构会自动调用
            cout<<"Destructor of awov1 class called"<<endl;
        }
        awov1(const awov1&a):awov(a),name(new char[strlen(a.name)+1]){
            cout<<"Copy constructor of awov1 class called"<<endl;
            strcpy(name,a.name);
        }

        awov1(const awov1&&){
            cout<<"Move constructor of awov1 class called"<<endl;
        }

        void display() override{    cout<<"awov1 class"<<endl; }
};

template<int N>
constexpr static int Fib = Fib<N-1> + Fib<N-2>;
template<>
constexpr  int Fib<0> = 0;
template<>
constexpr  int Fib<1> = 1;

int main(){
    //***************************************
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    //***************************************
   cout << Fib<30><<endl;
   cout << Fib<20><<endl;
   
  
}



