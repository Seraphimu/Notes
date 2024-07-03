#include <iostream>
#include <cstring>

using namespace std;

class Anime {
public:
    string date;
    double values;
    int dowNum;
};

//The defalut is private
class InorderRabbit : public Anime {
public:
    //what is the this key words used to ???
    //"this" key-word a pointer to a attribute in this class.
    //it is used to separate parameters in methods and attribute.
    void setDate(string date) {
        this->date = date;
    }
    void setValues(int values) {
        this->values = values;
    }
    void setDownNum(int dowNum) {
        this->dowNum = dowNum;
    }

    string getDate(void) {
        return date;
    }
    double getValues(void) {
        return values;
    }
    int getDownNum(void) {
        return dowNum;
    }
};

int main(void)
{
    InorderRabbit iR;
    iR.values = 778.99;
    iR.dowNum = 18000;
    iR.date = "2012-01-22";
    





    iR.setDate("2012-01-02");
    iR.setValues(778.98);
    iR.setDownNum(18000);
    
    cout << "Date: " << iR.getDate() << endl;
    cout << "Values: " << iR.getValues() << endl;
    cout << "DownNum: " << iR.getDownNum() << endl;
    return 0;
}
