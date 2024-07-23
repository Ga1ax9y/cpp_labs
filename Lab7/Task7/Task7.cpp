#include <iostream>


bool check(unsigned* Numbers) {

    unsigned* result = new unsigned[171];
    unsigned dlin = 170 - Numbers[0];

    for (int i = 1; i < 170; ++i) {
        result[i] = Numbers[i];
    }
    while (dlin > 0) {
        for (int i = Numbers[0]; i < 170; i++) {
            result[i + 1] += (result[i] & 1) * 10;
            result[i] >>= 1;
        }
        dlin--;
    }
    if (result[169] & 1) {
        return false;
    }

    return true;

}

unsigned** first(unsigned** Numbers, unsigned Number, unsigned ColumnNumber) {
    Numbers[Number][ColumnNumber - 1] = 1;
    Numbers[Number][ColumnNumber] = 0;
    Numbers[Number][0]--;
    return Numbers;
}
unsigned** second(unsigned** Numbers, unsigned Number, unsigned ColumnNumber) {
    Numbers[Number][ColumnNumber - 1] = 1;
    Numbers[Number][0]--;
    return Numbers;
}


int main() {
    unsigned NumberOfTheNumber, Number = 1, s = 0, e = 0;
    std::cin >> NumberOfTheNumber;
    unsigned** Numbers = new unsigned* [NumberOfTheNumber + 1];
    for (int i = 0; i <= NumberOfTheNumber; i++)
    {
        Numbers[i] = new unsigned[170];
    }

    Numbers[0][169] = 1;
    Numbers[0][0] = 169;
    while (Number <= NumberOfTheNumber) {
        for (int i = s; i <= e; i++) {
            if (Number <= NumberOfTheNumber)
            {
                for (int a = 0; a < 170; a++)
                {
                    Numbers[Number][a] = Numbers[i][a];
                }
                Numbers = first(Numbers, Number, Numbers[Number][0]);
                if (check(Numbers[i]))
                {
                    Number++;
                }
            }
            else
            {
                break;
            }
        }

        for (int i = s; i <= e; i++) {
            if (Number <= NumberOfTheNumber)
            {
                for (int a = 0; a < 170; a++)
                {
                    Numbers[Number][a] = Numbers[i][a];
                }
                Numbers = second(Numbers, Number, Numbers[Number][0]);
                if (check(Numbers[i]))
                {
                    Number++;
                }
            }
            else
            {
                break;
            }
        }
        s = e + 1;
        e = Number - 1;
    }

    for (int i = Numbers[NumberOfTheNumber - 1][0]; i < 170; i++)
    {
        std::cout << Numbers[NumberOfTheNumber - 1][i];
    }

    for (int i = 0; i <= NumberOfTheNumber; i++)
    {
        delete Numbers[i];
    }
    delete[] Numbers;


}