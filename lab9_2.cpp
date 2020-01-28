#include <iostream> 
#include<fstream>
using namespace std ;

int main(){
    ifstream source ;
    ofstream dest("D:\\261102\\lab9-2562-2-charnnaronggot\\cheerbook_copy.txt") ;
    source.open ("D:\\261102\\lab9-2562-2-charnnaronggot\\cheerbook.txt") ;
    string textline;
    dest << " --------------------SOTUS--------------------- " << "\n" ;
    bool havetext;
    havetext = getline (source, textline);
    while (havetext){
        dest << textline << "\n";
        havetext = getline(source , textline ); 
    }
    dest << "--------------------SOTUS--------------------- \n" ;
    source.close();
    dest.close();
   return 0 ;
}





//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

