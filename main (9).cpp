/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a ,b ,c, d, e, A, B, C , D, E;
    
    cout << "Input nilai siswa 1 : " << endl;
    cin >> a;
    
    if ( a >= 80){
        A = 4;
        cout << "Nilai A" << endl;
    }
    else if ( a >= 70 && a < 80 ){
        A = 3;
        cout << "Nilai B" << endl;
    }
    else if ( a >= 60 && a < 70 ){
        A = 2;
        cout << "Nilai C" << endl;
    }
    else if ( a >= 50 && a < 60 ){
        A = 1;
        cout << "Nilai D" << endl;
    }
    else{
        A = 0;
        cout << "Nilai E" << endl;
    }
     
     
     
    cout << "Input nilai siswa 2 : " << endl;
    cin >> b;
    
    if ( b >= 80){
        B = 4;
        cout << "Nilai A" << endl;
    }
    else if ( b >= 70 && b < 80 ){
        B = 3;
        cout << "Nilai B" << endl;
    }
    else if ( b >= 60 && b < 70 ){
        B = 2;
        cout << "Nilai C" << endl;
    }
    else if ( b >= 50 && b < 60 ){
        B = 1;
        cout << "Nilai D" << endl;
    }
    else{
        B = 0;
        cout << "Nilai E" << endl;
    }
    
    
    
    cout << "Input nilai siswa 3 : " << endl;
    cin >> c;
    
    if ( c >= 80){
        C = 4;
        cout << "Nilai A" << endl;
    }
    else if ( c >= 70 && c < 80 ){
        C = 3;
        cout << "Nilai B" << endl;
    }
    else if ( c >= 60 && c < 70 ){
        C = 2;
        cout << "Nilai C" << endl;
    }
    else if ( c >= 50 && c < 60 ){
        C = 1;
        cout << "Nilai D" << endl;
    }
    else{
        C = 0;
        cout << "Nilai E" << endl;
    }
    
    
    
    cout << "Input nilai siswa 4 : " << endl;
    cin >> d;
    
    if ( d >= 80){
        D = 4;
        cout << "Nilai A" << endl;
    }
    else if ( d >= 70 && d < 80 ){
        D = 3;
        cout << "Nilai B" << endl;
    }
    else if ( d >= 60 && d < 70 ){
        D = 2;
        cout << "Nilai C" << endl;
    }
    else if ( d >= 50 && d < 60 ){
        D = 1;
        cout << "Nilai D" << endl;
    }
    else{
        D = 0;
        cout << "Nilai E" << endl;
    }
    
    
    
    cout << "Input nilai siswa 5 : " << endl;
    cin >> e;
    
    if ( e >= 80){
        E = 4;
        cout << "Nilai A" << endl;
    }
    else if ( e >= 70 && e < 80 ){
        E = 3;
        cout << "Nilai B" << endl;
    }
    else if ( e >= 60 && e < 70 ){
        E = 2;
        cout << "Nilai C" << endl;
    }
    else if ( e >= 50 && e < 60 ){
        E = 1;
        cout << "Nilai D" << endl;
    }
    else{
        E = 0;
        cout << "Nilai E" << endl;
    }
    
    double AVG = (A + B  + C + D + E) /5;
    cout << "Nilai rata rata adalah : " << AVG << endl;
    
    if( AVG >= 2.75){
        cout << "Lulus "<< endl;
        
    }else {
        cout << "Tidak Lulus "<< endl;
    }
 
    return 0;
}
