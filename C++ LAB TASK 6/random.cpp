# include <iostream>
# include <cstdlib> //
# include <ctime> //

using namespace std;

int main()
{
        srand(time(NULL));
        int daysUntilExpiration = rand() % 12 ; // this generates random number in a range of 0 to 11

        if (daysUntilExpiration == 0)
            {
                cout << "Your subscription has expired." << endl ;
            }
            else if (daysUntilExpiration == 1 )
            {
                cout << "Your subscription expires within a day!" ;
                cout << "Renew Now and save 20%" << endl ;
            }  
            else if (daysUntilExpiration <=5)
            {
                 cout << "Your subscription expires in " << daysUntilExpiration << "Renew Now and Save 10%" << endl ;
            }
            else if (daysUntilExpiration <= 10)
            {
                cout << " Your subscription will expire soon. Renew now !!" << endl ; 
            }else
            {
                cout << "You have an active subscription." << endl ;
            }
            
        return 0;

}