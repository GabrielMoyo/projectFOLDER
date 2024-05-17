# include <iostream>
using namespace std ;

int main()
{
    int input ; 
    cout << "ENTER AN INTEGER VALUE BETWEEN 5 AND 10 ";
    cin>>input ;

    while (true)
    {
        if (input >= 5 && input <= 10 )
        {
            cout << "your input value " << input << "has been accepted " << endl ;
            break;
        }else
        {
            cout << "sorry , you entered invalid number. try again" <<endl ;
            break;
        }
    }
    return 0;
}

