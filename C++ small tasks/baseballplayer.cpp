#include<iostream>
#include<fstream>

using namespace std;
//6014

struct players
{
	string player_name[10];
	string number_of_home_runs[10];
	string number_of_hits[10];
	void input_data()
	{
		ifstream input_file;
		input_file.open("player.txt");
		int index = 0;
		while(input_file >> player_name[index] >> number_of_home_runs[index] >> number_of_hits[index])
		{
			index ++;
		}
	}
	void output_data()
	{
		cout << "Name      No of home runs     No of hits"<<endl;
		for (int i = 0; i < 10; i++)
		{
			
			cout << player_name[i] << "            " << number_of_home_runs[i] << "            " << number_of_hits[i] <<endl;
		}
	}
	void update_function()
	{
		int index, select;
		string data;
		cout << "Enter idex of player: ";
		cin >> index;
		cout<<"Press 1 to change player name\nPress 2 to change no of home runs\nPress 3 to change no of hits\n";
		cin >> select;
		if(select == 1)
		{
			cout <<"Please Enter name of updated Player: ";
			cin >>data;
			player_name[index] = data;
		}
		else if(select == 2)
		{
			cout <<"Please Enter updated no of home runs of Player: ";
			cin >>data;
			number_of_home_runs[index] = data;
		}
		else if(select == 3)
		{
			cout <<"Please Enter updated no of home hits of Player: ";
			cin >>data;
			number_of_hits[index] = data;
		}
		else
			cout <<"invalid number\n";
		}
};

int main()
{
	int input;
	cout << "Press 1 to Input data\nPress 2 to view data\nPress 3 to update\n";
	cin >> input;
	players data;
	
	if(input == 1)
		data.input_data();
	else if(input == 2)
		data.output_data();
	else if(input == 3)
		data.update_function();
	else
		cout<<"Enter valid choise";
	
	
	
	return 0;
}