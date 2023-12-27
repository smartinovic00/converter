#include <iostream>
using namespace std;

void jednoznamenkasti (int b);
void dvoznamenkasti (int b);
void troznamenkasti (int b);
void cetveroznamenkasti ( int b);

int main(){
    int n;
    int i;
    
    cout << "Koliko brojeva je potrebno pretvoriti?" << endl;
    cin >> i;
    
    for (int j = 1; j< i+1; j++) {
        
    
    cout << "Unesite " << j <<". broj " <<endl;
    cin >> n;
   
   
   
    if (n < 10){
        jednoznamenkasti(n);
        cout << "\n";
    }
    else if (n> 9 && n <100) {
        dvoznamenkasti(n);
        cout<< "\n";
    } else if (n > 99 && n< 1000) {
        troznamenkasti(n);
        cout << "\n";
    } else {
        cetveroznamenkasti(n);
        cout  << "\n";
    }
    
    }
    cout << "Hvala  na koristenju ovog pretvaraca ";
    
    return 0;
}
void jednoznamenkasti (int b){
    if (b != 0){
    if (b < 4){
        for (int i = 0; i < b; i++){
            cout << "I";
        }
    }
        else if (b == 4){
            cout <<"IV";
        }else if (b == 5){
            cout << "V";
        } else if (b > 5 && b < 9){
            cout << "V";
            for (int j=0; j< b-5; j++){
                cout << "I";
            }
        }
        else {
            cout <<"IX";
        }
    }
    else {
        cout << "";
    }
    }
void dvoznamenkasti (int b){
        int rem = b % 10;
        int desetice = b - rem;
        
        if (desetice != 0){
        if (desetice < 40){
        while (desetice != 0){
            cout << "X";
            desetice = desetice - 10;
        }
        
    }  else if (desetice == 40) {
        cout << "XL";
    } else if (desetice == 50){
        cout << "L";
    }
    else if (desetice > 50 && desetice < 90){
        cout << "L";
        desetice = desetice - 50;
        while (desetice != 0){
            cout << "X";
            desetice = desetice - 10;
        }
    }else {
        cout << "XC";
    }
        }
        else {
            cout << "";
        }
    if (rem != 0){
            jednoznamenkasti(rem);
        } else{
            cout << "";
        }
}
void troznamenkasti (int b){
    int jedinice = b % 10;
    int ostatak_D = ((b - jedinice) / 10) % 10;
    int desetice = ostatak_D * 10;
    int stotice = b - jedinice - desetice ;
    
    
   if (stotice > 0){
    
    if (stotice < 400){
        while (stotice != 0){
            cout << "C";
            stotice = stotice - 100;
        }
    } else if (stotice == 400) {
        cout << "CD";
    } else if (stotice == 500){
        cout << "D";
    }else if (stotice > 500 && stotice < 900) {
        cout << "D";
        stotice = stotice - 500;
        while (stotice != 0){
            cout << "C";
            stotice = stotice - 100;
        }
    } else {
        cout << "CM";
    }
   }
    
    dvoznamenkasti (desetice);
    jednoznamenkasti(jedinice);
}
void cetveroznamenkasti ( int b) {
    int jedinice = b % 10;
    int broj_D = ( ( b - jedinice)/ 10 ) % 10;
    int desetice = broj_D * 10;
    int broj_S = (  (b - jedinice - desetice) / 100) % 10;
    int stotice = broj_S * 100;
    int tisucice = b - jedinice - desetice - stotice;
    
    while (tisucice != 0){
        cout << "M";
        tisucice = tisucice - 1000;
    }
    troznamenkasti (stotice);
    dvoznamenkasti(desetice);
    jednoznamenkasti(jedinice);
}