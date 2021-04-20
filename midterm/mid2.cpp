#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using namespace std;
int getRdnum(void);
int isGreater(int);

int main ()
{
    int N;
    int rdnum, prec;
    ofstream ofs;

    ofs.open("NUMBERS.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }
        srand(time(0));
        for (int i = 0; i < 10; i++)
        {
            N = getRdnum ();
           
            if (isGreater (N))
            {
                ofs << N <<  endl;
                cout << N << " is greater than" << endl;
            }
            else
                cout << N << endl;
        } 
    ofs.close();
}

int getRdnum ()
{ 
    int random;
    random = rand() % 50 + 1;
    return random;
} 

int isGreater (int n)
{
     static int prec;
     static int i;
      while ( i == 0)
        {   
            i++;
            prec = n;
            continue;
            
        }
        
        if (prec < n)
        {
            prec = n;
            return 1; 
        }
        prec = n;

    return 0;

}

/*
    starting the program wasnt that difficult i was able to 
    get to writing out the open  file code then moved on to getting the getRdnum function in main and then writing out the code for the getRdnum function
    I had trouble with the varible type and return type for awhile the time limte blinded me a little and didnt carefully read the directions you gave after re re-reading i got it and stated debuging to see if the getRdnum fuction worked,then  i just had the numbers output to the terminal to see if it worked. after that i started on the isgreater function this one took me the longest to get I couldnt get my head around it. My brian shut off but after reviewing some previous work on getting to see if the prociding number is greater I stated to just code stuff in and debug it to see what were the errors After a lot of trail and error, I got it to output the correct stuff and changed the output to terminal code, to output in the numbers txt file.


*/
