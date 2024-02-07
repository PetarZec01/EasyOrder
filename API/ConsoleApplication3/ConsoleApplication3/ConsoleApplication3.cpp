#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void dayAdventOfCodeOne() {
    string line;
    ifstream myfile("example.txt");

    int first_digit = 0, last_digit = 0;
    int sum = 0;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            for (size_t i = 0; i < line.size(); i++)
            {
                if (line[i] >= '1' && line[i] <= '9')
                {
                    first_digit = (int)(line[i] - 48);
                    break;
                } 
            }
            for (size_t i = line.size() - 1; i >= 0; i--)
            {
                if (line[i] >= '1' && line[i] <= '9')
                {
                    last_digit = (int)(line[i] - 48);
                    break;
                }
            }
            sum += first_digit * 10 + last_digit;
        }
        cout << sum;
        myfile.close();
    }

    else cout << "Unable to open file";
}

int main() {
    dayAdventOfCodeOne();
}