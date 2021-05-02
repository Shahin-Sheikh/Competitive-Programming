#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main(){
	char ch, buffer[15], operators[] = "+-*/%=";
	ifstream fin("program.cpp");
	ofstream fout("18-36832-1.txt");
	int i,j=0;
	bool op[5];

	if(!fin.is_open()){
		cout<<"error while opening the file\n";
		exit(0);
	}

	while(!fin.eof()){
   		ch = fin.get();

		for(i = 0; i < 6; ++i){
   			if(ch == operators[0])
   				op[0]=true;
            else if(ch==operators[1])
                op[1]=true;
            else if(ch==operators[2])
                op[2]=true;
            else if(ch==operators[3])
                op[3]=true;
            else if(ch==operators[4])
                op[4]=true;
   		}
   		}
for (int i=0;i<6;i++)
{
    if(op[i]==true)
        j++;
}
cout<<"Number of operator:"<<j;
fout<<"Number of function:"<<j;
return 0;

	}