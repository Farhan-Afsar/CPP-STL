#include<bits/stdc++.h>
using namespace std;

/*
Competitive setup

Should use bits/stdc++.h as it includes all the necessary header file needed for competitive programming
it saves a lot of time but slow down execution speed as many unnecessary header is included.

Printf and scanf is faster.If want to use cin cout need to include fast I/o to speed up
ios::sync_with_stdio(0);
cin.tie(0);

"\n" is faster than endl

*/

/*
Macro
we need to use #define to use macro to shorten a code

it also can have Parameter

#define a(i,n) for (int i = 0; i < n; i++) same as normal loop

a(i,10){
    //code
}

*/

/*
Lambda Expressions
function<ReturnType(Parameters)> functionName = [capture](parameters){code}
capture -> & it can local variable value
capture -> = it can use the local variable but can't change
capture -> blank  can't use local variable

function<ReturnType(Parameters)> can be replaced with auto keyword
*/
int main(){
    function<int(int,int) > sum = [](int a, int b){
        return a + b;
    };
    // cout << sum(2,4) << endl;

    auto sum2 = [] (int x,int y){return x + y;};

    // cout << sum2(4,6) << endl;

    pair<int,int> p;
    p.first = 1;
    p.second = 2;
    // cout << p.first << " " << p.second << endl;

    pair<int,string> p2;
    p2.first = 5;
    p2.second = "Farhan";
    // cout << p2.first << " " << p2.second << endl;

    pair<int,pair<int,int>> p3 = {1,{2,3}};
    // cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    //Compare pair
    bool c = make_pair(1,1) < make_pair(1,2) ;
    // cout << c << endl;

    //Tuple(Extended Pair)in pair we can have two element in tuple we can have have as many element as wish
    tuple<int, string, int, bool, char, double> b = {1, "Farhan", 101, true, 'abc', 11.99};
    // get<index>(tuple)  to access a element

    // cout << get<2> (b) << endl;
    
    //Tie function
    int a1,b1;
    pair<int,int> d1 = {7,8};
    tie(a1,b1) = d1;
    // cout << a1 << " " << b1;

    //Structure binding C++ 17
    // pair<int, int> p5 = {1, 2};
    // auto [a5, b5] = p5;
    // cout << a5 << " " << b5 << "\n"; 

}