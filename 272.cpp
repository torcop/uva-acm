// my second program in C++
#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{


// FILE *f = fopen("file.txt", "w");
// if (f == NULL)
// {
//     printf("Error opening file!\n");

//     return -1;
//     //exit(1);
// }

    // lines
 string line;
 int count = 0;
 while( getline(cin, line) ){

    // 1 is first "" and 2 is 2nd ""

    //char first = "`";

    std::size_t found ;
    while ( (found = line.find("\"")) !=std::string::npos){
        if( ++count & 1 )
            line.replace(found, std::string("\"").length(), "``");
        else
            line.replace(found, std::string("\"").length(), "''");
    }

     printf("%s\n",line.c_str());

    //fprintf(f,"%s\n",line.c_str());
  }

  //fclose(f);

  return 0;

}
