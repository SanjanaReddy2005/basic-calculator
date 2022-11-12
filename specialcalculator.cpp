#include <iostream>
using namespace std;
float add(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float multiply(float a,float b){
    return a*b;
}
float division(float a,float b){
    return a/b;
}
double factorial(float n){
    if(n == 1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){
    int n;
    float x,y;
    
    cout << " 1.add 2.sub 3.multiply 4.division 5.sin 6.cos 7.tan";
    cout << "enter your operation number";
    cin >> n;
    cout << "enter your value for x:";
    cin >> x;
    
       
    if(n==5 || n==6 || n==7){
        x=x*(3.1415/180);
    }else {
    cout << "enter your value for y:";
    cin >> y;
    }
     float t=x;
        float sin = x; 
        for (int n=3;n<=20;n=n+2){
        t = t*x*x*(-1);
        sin +=(t/factorial(n));
        }
        float a=1;
        float cos = 1;
        
        for(int n=2;n<=20;n=n+2){
        a = a*x*x*(-1);
        cos+=(a/factorial(n));
        }
        float tan;
        tan = x+ (1/3*x*x*x) + (2/5*x*x*x*x*x) +(17/315*x*x*x*x*x*x*x);
    switch (n){
        case 1:
        cout << add(x,y);
        break;
        case 2:
        cout << sub(x,y);
        break;
        case 3:
        cout << multiply(x,y);
        break;
        case 4:
        cout << division(x,y);
        break;
        case 5:
        cout << sin;
        break;
        case 6:
        
        cout << cos;
        break;
        case 7:
        
        cout << tan;
        break;
        default:
        cout << "operator chosen wrong key";
        break;
    }
    return 0;
    

}
