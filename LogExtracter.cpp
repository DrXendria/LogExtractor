#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> extract(const string& row) {
    vector<string> tokens;
    string word;
    stringstream ss(row);
    while (ss >> word) {
        tokens.push_back(word);
    }
    return tokens;
}

void prettyPrint(ofstream& out, const vector<string>& t) {
    if (t.size() < 4) return;

    out << "------------------------------" << endl;
    out << "Date   : " << t[0] << endl;
    out << "Time   : " << t[1] << endl;
    out << "Level  : " << t[2] << endl;
    out << "Event  : " << t[3] << endl;

    // key=value olanlarý ayýkla
    for (size_t i = 4; i < t.size(); ++i) {
        size_t pos = t[i].find('=');
        if (pos != string::npos) {
            string key = t[i].substr(0, pos);
            string val = t[i].substr(pos + 1);
            out << key << " : " << val << endl;
        }
    }

    out << "------------------------------" << endl << endl;
}

int main() {
    string fileRead;
    cout << "Enter the file name that will be read: ";
    cin >> fileRead;

    ifstream file(fileRead.c_str());
    if (!file.is_open()) {
        cout << "The file could not be opened!\n";
        return 1;
    }

    ofstream fileOutput("output.txt");

    string row;
    vector<string> tokens;

    while (getline(file, row)) {
        tokens = extract(row);
        prettyPrint(fileOutput, tokens);
    }

    file.close();
    fileOutput.close();

    cout << "The file has been read and completely formatted!\n";
    return 0;
}

