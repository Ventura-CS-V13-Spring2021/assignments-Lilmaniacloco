#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using namespace std;


int	main()
{
	ofstream ofs;
	int	i,N;
	int	rdnum;

	do {
		cout << "How many numbers do you want to store in a file\n";
		cin >> N;
	} while ( N <0);

	ofs.open("data.txt");

	srand(time(NULL));
	if (ofs) {
		for(i=0; i<N; i++) {
			rdnum = rand() % 100;
			cout << rdnum << " wrote into a file \n";
			ofs << rdnum << endl; 
		}
	}
	ofs.close();
}





#include	<iostream>
#include	<fstream>
using namespace std;


int	main()
{
	ifstream 	ifs;
	int		N=0, sum=0;
	int		rdnum, min, max;
	float		average;

	ifs.open("data.txt");

	if (ifs) {
		while ( ifs >> rdnum ) {
			cout <<  "\tRead Number from a file : " << rdnum << endl; 
			sum += rdnum;
			if ( N == 0)
				min = max = rdnum;
			else {
				if ( min > rdnum )
					min = rdnum;
				if ( max < rdnum)
					max = rdnum;
			}
			N++;
		}
		if ( N != 0) 
			average = sum / N;
	}
	cout << " The number of integers read from a file " << N << endl;
	cout << " Sum of all integers " << sum << endl;
	cout << " Average " << average<< endl;
}