#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int count = 0 ;
    double sum = 0 ;
    double x = 0 ;
    string textline;
    ifstream source("D:\\261102\\lab9-2562-2-charnnaronggot\\score.txt");
    while (getline(source,textline))
    {
        cout <<textline<<'\n';
        sum += atof(textline.c_str());
         x  +=pow(atof(textline.c_str()),2);
        count ++;

    }
    cout << "Number of data = " << count <<'\n';
    cout << "Mean = "<< sum/count<<'\n';
    cout << "Standard deviation  = "<<sqrt(x/count-pow((sum/count),2))<<'\n';
    source.close();
    return 0;
}










//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";