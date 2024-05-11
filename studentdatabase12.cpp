#include <iostream>
using namespace std;

class student
{
   public:
   int r;         // Roll number
   string name;   // Name of the student
   char div;      // Division
   string add;    // Address

   public:
      // Default constructor to initialize default values
      student()
      {
          r = 4;
          name = "cv";
          div = 'a';
          add = "sangamner";
      }
       
      // Method to display student details
      void show()
      {
         cout << "\n" << "Roll number: " << r;
         cout << "\n" << "Name of student: " << name;
         cout << "\n" << "Division: " << div;
         cout << "\n" << "Address: " << add;
      }
      
      // Method to get student data from user
      void getdata()
      {
         cout << "\n" << "Enter roll number: ";
         cin >> r;
         cout << "\n" << "Enter name of student: ";
         cin >> name;
         cout << "\n" << "Enter division: ";
         cin >> div;
         cout << "\n" << "Enter address: ";
         cin >> add;
      }

      // Friend function declaration for displaying student details
      friend void display();
      
      static int count; // Static member variable to count students

      // Static member function to display default student data
      static void display1()
      {
         count++;
         cout << "\nData of student " << count << ":";
         cout << "\n" << "Roll number: " << 6;
         cout << "\n" << "Name of student: " << "na";
         cout << "\n" << "Division: " << 'd';
         cout << "\n" << "Address: " << "abc";
      }   
};

int student::count = 5; // Initializing static member variable

// Friend function definition for displaying student details
void display()
{
    student o;   
    cout << "\n" << "Roll number: " << o.r;
    cout << "\n" << "Name of student: " << o.name;
    cout << "\n" << "Division: " << o.div;
    cout << "\n" << "Address: " << o.add;
}

int main()
{
  student s, *p; // Creating student object and pointer
  p = new student; // Allocating memory for a student object
  int n, i;
  cout << "Enter the number of students: ";
  cin >> n;
  
  for(i = 0; i < n; i++)
  {
      cout << "\nData of student " << i+1;
      p->getdata(); // Getting data for each student
      p->show();    // Displaying student data
  }
  
  cout << "\nData of student 4:";    
  s.show(); // Displaying default data for student 4
  s.getdata(); // Getting data for student 5
  cout << "\nData of student 5:";
  display(); // Displaying data for student 5 using friend function
  s.display1(); // Displaying default data for student 6 using static member function
  delete p; // Deleting dynamically allocated memory
  return 0;
}
