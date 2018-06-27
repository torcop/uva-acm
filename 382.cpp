#include <bits/stdc++.h>

using namespace std;


ofstream myfile;

void printDivisors(int n)
{

    int sum = 0;

    for (int i=1;i<n;i++){

        if (n%i==0){

            sum+=i;

            //cout << i << " :: " << sum << endl;

        }

    }

    std::cout << std::right << std::setw(5) << n;

    myfile << std::right << std::setw(5) << n;

    if( sum == n){

        cout << "  " << "PERFECT" << endl;

        myfile << "  " << "PERFECT" << endl;
    }

    if( sum > n){

        cout << " " << "ABUNDANT" << endl;

        myfile << "  " << "ABUNDANT" << endl;
    }

    if( sum < n){

        cout << " " << "DEFICIENT" << endl;

        myfile << "  " << "DEFICIENT" << endl;
    }

            //printf("%d ",i);
}



int main()
{

  myfile.open ("write.txt");

int n;

int player,opponent;

string inp;


getline(cin,inp);

  stringstream ss( inp );

  cout << "PERFECTION OUTPUT" << endl;

   myfile << "PERFECTION OUTPUT" << endl;

    while(  ss >> player ){


        if( player == 0 ){


            cout << "END OF OUTPUT" << endl;

            myfile << "END OF OUTPUT" << endl;

            break;
        }

        printDivisors( player );

    }


    myfile.close();

    return 0;
}
