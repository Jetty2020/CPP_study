#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // exit()
#include <sstream>
using namespace std;

int main()
{
    if(1)
    {
        ofstream ofs("my_first_file.dat");
        //ofs.open("my_first_file.dat");

        if (!ofs)
        {
            cerr << "Couldn't open file " << endl;
            exit(1);
        }
        //  아스키 입출력
        // ofs << "Line 1" << endl;
        // ofs << "Line 2" << endl;

        // 바이너리 입출력
        const unsigned num_data = 10;
        ofs.write((char*)&num_data, sizeof(num_data));

        for (int i = 0; i < num_data; ++i)
            ofs.write((char*)&i, sizeof(i));

    }

    if(1)
    {
        ifstream ifs ("my_first_file.dat");

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }
        //  아스키 입출력
        // while (ifs)

        // {
        //     std::string str;
        //     getline(ifs, str);

        //     std::cout << str << endl;
        // }
        
        // 바이너리 입출력
        unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for (unsigned i = 0; i < num_data; ++i)
        {
            int num;
            ifs.read((char*)&num, sizeof(num));

            cout << num << endl;
        }
    }
}