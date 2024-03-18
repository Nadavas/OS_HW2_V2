/*	main.cpp

*******************************************************************/
#include <fstream>
#include <iostream>

#include "bank.h"

using namespace std;

Bank bank;

int main(int argc, char *argv[]){	
	ofstream clearLogFile("log.txt", std::ios::out);
	clearLogFile << "" << std::endl;
	clearLogFile.close(); // Close the file after truncating it
	
	vector<string> input_lines = convert_file_to_vec(argv[1]);
	auto it = input_lines.begin();
	while(it!=input_lines.end()){
		vector<int> args;
		char cmd = parse_line(*it, args);
		bank.exe_command(cmd, args, 0);
		it++;
	}
	
	logFile.close();
	return 0;
}

























































/*
	bank.open_account(10, 1234, 1000, 5);
	bank.open_account(10, 4567, 400, 17);
	bank.open_account(20, 3333, 5000, 5);
	bank.close_account(11, 1234, 11);//not exist
	bank.close_account(10, 2222, 11);//wrong pass
	map<int, Account>::iterator it = bank.accounts.begin();
	while (it != bank.accounts.end()) {
		cout << it->first << "   "<< it->second.password <<"   " << it->second.balance << endl;
		it++;
	}
	cout << endl;
	bank.close_account(10, 1234, 5);
	bank.deposit_account(20,3333,23,7);
	bank.open_account(21,1133,5757,12);
	bank.withdraw_account(21,1133,9000,10);
	bank.withdraw_account(21,1133,2000,19);
	bank.check_balance_account(21,1000,2);
	bank.check_balance_account(23,1000,2);
	bank.check_balance_account(20,3333,2);
	bank.transfer_funds_account(21,1133,20,6000,2);
	it = bank.accounts.begin();
	while (it != bank.accounts.end()) {
		cout << it->first << "   "<< it->second.password <<"   " << it->second.balance << endl;
		it++;
	}

	cout << endl;
	bank.take_fees_account();
	bank.print_accounts();
	*/