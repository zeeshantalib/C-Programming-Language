#include <iostream>
using namespace std;
int main()
{
    int age;
    int age_total=0;
    int number_of_people=0;

    cout<<"Enter first persons age or -1 to quit"<<endl;
    cin>>age;

    while(age!=-1)
	{
        age_total=age_total+age; // or shorthand: age_total += age;
        number_of_people++;

        cout<<"Enter next persons age or -1 to quit"<<endl;
        cin>>age;
    }

    cout<<"Number of people eneter "<<number_of_people<<endl;
    cout<<"Average age: "<<age_total/number_of_people;

    return 0;
}
