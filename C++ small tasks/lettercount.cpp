//Header File
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

    //Structs
struct letterCount
{
  char letter;
  int count;
  int count_caps;
};

    //Function Prototypes
int openFile(ifstream& infile, ofstream& outfile);
void count(letterCount letters[], ifstream& infile);
void printResult(letterCount letters[], ofstream& outfile);

    //Main Program
int main()
{
    const int MAX_LETTERS = 26;
    letterCount counts[MAX_LETTERS];

    ifstream infile;
    ofstream outfile;

    openFile(infile, outfile);
	count(counts, infile);
	printResult(counts, outfile);

	return 0 ;

}

    //User-defined Function 1
int openFile(ifstream& infile, ofstream& outfile)
{
    string inputFile;
    string outputFile;

    cout << "Enter the input file name: ";
    cin >> inputFile;
    cout << endl;

    infile.open(inputFile.c_str());
    if (!infile)
    {
        cout << "Cannot open " << inputFile << ". Program terminated." << endl;
        return 1;
    }

    cout << "Enter the output file name: ";
    cin >> outputFile;
    cout << endl;

    outfile.open(outputFile.c_str());

    cout << "Processing Data..." << endl << endl;
    cout << "Data can be found in file " << outputFile << endl;

}

    //User-defined function 2
void count(letterCount letters[], ifstream& infile)
{
	char ch, ch1;
	unsigned int i = 0, line = 0, minLine = 0, minChars = 0, maxLine = 0, maxChars = 0, totChars = 0;

	i = 0;
	ch = infile.get();
	while (ch != EOF)
	{
		if (isalpha (ch))
		{
			int up = isupper (ch) ? 1 : 0;
			ch1 = ch;
			int idx = tolower(ch1) - 'a';
			letters[idx].count++;
			letters[idx].letter = ch1;
			letters[idx].count_caps += up;
		}
		i++;
		ch = infile.get();
		if ( ch == '\n')
		{
			line++;
			totChars += i - 1;

			if (i < minChars)
			{
				minChars = i;
				minLine = line;
			}
			else if (i > maxChars || minChars > maxChars)
			{
				maxChars = i;
				maxLine = line;
			}

			i = 0;
		}

	}

	if (i > 0)
	{
		line++;
		totChars += i;

		if (i < minChars)
		{
			minChars = i;
			minLine = line;
		}
		else if (i > maxChars || minChars > maxChars)
		{
			maxChars = i;
			maxLine = line;
		}

		i = 0;
	}
	infile.close();
}


void printResult(letterCount letters[], ofstream& outfile)
{
    int total_caps ;
	int total ;
	double percent;
	const int MAX_LETTERS = 26;

	total_caps = 0 ;
	total = 0 ;

	for (int i = 0 ; i < MAX_LETTERS; i++)
	{
		if (letters[i].count > 0)
		{
			total_caps += letters[i].count_caps ;
			total += letters[i].count ;
		}
	}

	outfile << "Total number of letters: " << total  << endl ;

	outfile << "Total number of capital letters: " << total_caps << endl ;

	outfile << "Total number of lowercase letters: " << total - total_caps << endl ;

	outfile << "Letter\t" << "Total occurrence\t" << "Capital occurrence\t" << "% of capital letters" << endl ;
    for (int i = 0 ; i < MAX_LETTERS; i++)
	{
		if (letters[i].count > 0)
		{
			percent = (static_cast<int>(letters[i].count_caps)/static_cast<int>(total_caps)) * 100;
			outfile << letters[i].letter << "\t"
				<< letters[i].count << "\t\t\t"
				<< letters[i].count_caps << "\t\t\t"
				<< percent  << "%" << endl ;

        }
	}
    outfile.close();
}