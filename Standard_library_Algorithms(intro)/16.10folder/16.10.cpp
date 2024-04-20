#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


vector<int> read_the_completefile_and_return_the_results_in_a_vector(const string& file_name)
{
    vector<int> readvector;
    ifstream Myfile(file_name);
    copy(istream_iterator<int>(Myfile),istream_iterator<int>(),back_inserter(readvector));
    return readvector;
}



int main()
{
    vector <int >Result;
    Result=read_the_completefile_and_return_the_results_in_a_vector("newmast.txt");

    for(auto items:Result)
    {
        cout<<items<<endl;
    }

    return 0;
}