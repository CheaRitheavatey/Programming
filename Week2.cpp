#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstring>

using namespace std;



// week 9

// public vs private
class People {
    private: // this private is for the data field
    // data field
    string name;
    int age;
    int a;

    // constructor
    public:
    People(string n,int x, int b) {
        name = n;
        age = x;
        a = b;
    }

    // methods
    public:
    // getter
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getA() {
        return a;
    }
    // setter
    void setName(string n) {
        name = n;
    }
    
    void setAge(int n) {
        age = n;
    }

    void setA(int n) {
        a =n;
    }

    int calculate() {
        return a * age;
    }

    void display() {
        cout << "Name: " << getName() << " Age: " << getAge() << " A: " << getA() << " Calculate: " << calculate() << endl;
    }
};
int week9()
{
    People person1("Jack",20,10);
    // with private you cannot access data field directly but can only access it thru setter
    person1.setName("Joe");
    cout << person1.getAge() << endl;
    person1.display();
   

    return 0;
}
// week 8
// dynamic and static lists
    // when you know the number beforehand you can use static else you can use dynamic list when you can modify during coding
// struct = complex datastructure that contain multiple type of variable, it can be int,str...
// in java it is similar to interface
// practice 2
struct Person {    
	string name;
	int age;
	string city;
};


int testPerson() {
	int n; // Number of people

	// Ask the user for the number of people
	cout << "How many people would you liketo enter? ";

	cin >> n;



	// Create an array of structs

	Person people[n];


	// Fill the array with personal data

	for (int i = 0; i < n; i++) {

		cout << "Enter details for person " << i + 1 << ":" << endl;



		cout << "Name: ";

		cin >> people[i].name;



		cout << "Age: ";

		cin >> people[i].age;



		cout << "City: ";

		cin >> people[i].city;

	}



	// Display the personal data

	cout << "\nYou entered the following data:\n";

	for (int i = 0; i < n; i++) {

		cout << "Person " << i + 1 << ":" << endl;

		cout << "Name: " << people[i].name << endl;

		cout << "Age: " << people[i].age << endl;

		cout << "City: " << people[i].city << endl;

		cout << "-------------------" << endl;

	}
	
	string search;
	
// 	search person in the array
    cout << "Enter Name of person you would like to search for: ";
    cin >> search;
    
    for (int i = 0; i< n; i++) {
        if (search == people[i].name) {
        cout << "Person founded: " << endl;
        cout << "Name: " << people[i].name << endl;

		cout << "Age: " << people[i].age << endl;

		cout << "City: " << people[i].city << endl;

		cout << "-------------------" << endl;
        
        }
        
    } 
    cout << "Person not founded";


	return 0;

}
// practice 1
struct Datum {
    int day;
    char month[10];
    int year;
};

int week8()
{
    Datum datum;
    cout << "Give the year: ";
    cin >> datum.year;
    
    cout << "Give the month e.g(January): ";
    cin >> datum.month;
    
    cout << "Give the day (1-31): ";
    cin >> datum.day;
    
    cout << "Year: " << datum.year << " Month: " << datum.month << " day: " << datum.day;

    return 0;
}
// week 7

// difference between value and reference
void byValue(int a) {
    a += 10;
    cout << "inside byValue: " << a << endl;
}

void byReference(int &a) {
    a += 10;
    cout << "Inside byReference: " << a << endl;
}
void test(){
    int x = 5;
    byValue(x);
    cout << "after byValue: " << x << endl;

    byReference(x);
    cout << "after byReference: " << x << endl;
}

int perimeter(int a, int b) {
    return 2 * (a + b);
}

int area(int a, int b) {
    return a * b ;
}


int week7() {
    int side1;
    int side2;

    cout << "Enter a: ";
    cin >> side1;

    cout << "Enter b: ";
    cin >> side2;

    int peri = perimeter(side1,side2);
    int ar = area(side1,side2);

    cout << "Perimeter: " << peri << endl << "Area: " << ar;

    return 0;
}
// week 6
int week6_2() {

    char text1[50];
    char text2[50];
    int i = 0;
    int j = 0;
    char ch;
    
    cout << "enter 1: ";
    while ((ch = getchar()) != '\n' && i < 99) {
        text1[i++] = ch;
    }
    text1[i] = '\0'; // '\0' is end sign meaning the after last element

    cout << "enter 2: ";
    while ((ch = getchar()) != '\n' && j < 99) {
        text2[j++] = ch;
    }
    text2[j] = '\0';

    if (strcmp(text1,text2) == 0) {
        cout << "The two set are identical";
    }
    else {
        cout << "The two sets are not identical";
    }

    // another way to check this but the first one is better
    // bool areEqual = true;
    // while (text1[i] != '\0' || text2[i] != '\0')
    // {
    //     if (text1[i] != text2[i])
    //     {
    //         areEqual = false;
    //         break;
    //     }
    //     i++;
    // }

    // if (areEqual)
    // {
    //     cout << "they are the same";
    // } else {
    //     cout << "They are not the same";
    // }
    
    
    
    
    
    // display output
    cout << "you entered: " << text1 << endl;


    return 0;
    
}


int week6_1() {

    int matrix1[3][3]; // First 3x3 matrix

    int matrix2[3][3]; // Second 3x3 matrix

    int sumMatrix[3][3]; // Sum of matrix1 and matrix2



    // Input elements for the first matrix

    cout << "Enter elements for the first 3x3 matrix:" << endl;

    for (int i = 0; i < 3; i++) { // Rows

        for (int j = 0; j < 3; j++) { // Columns

            cout << "Enter element at position [" << i << "][" << j << "] for matrix1: ";

            cin >> matrix1[i][j];

        }

    }



    // Input elements for the second matrix

    cout << "Enter elements for the second 3x3 matrix:" << endl;

    for (int i = 0; i < 3; i++) { // Rows

        for (int j = 0; j < 3; j++) { // Columns

            cout << "Enter element at position [" << i << "][" << j << "] for matrix2: ";

            cin >> matrix2[i][j];

        }

    }



    // Calculate the sum of matrix1 and matrix2, store in sumMatrix

    for (int i = 0; i < 3; i++) { // Rows

        for (int j = 0; j < 3; j++) { // Columns

            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];

        }

    }
    


    // Output the resulting sumMatrix

    cout << "Sum matrix:" << endl;

    for (int i = 0; i < 3; i++) { // Rows

        for (int j = 0; j < 3; j++) { // Columns

            cout << sumMatrix[i][j] << " ";

        }

        cout << endl; // New line after each row

    }
    cout << endl;
    
     // calculate the row sum
    int row[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row[i] += sumMatrix[i][j];
        }
        
    }
    
    // display the row sum
    for (int i = 0; i<3;i++) {
        cout << "row " << i+1 << ": ";
        cout << row[i] << " ";
    }



    return 0;
}

int week6() {
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // print out the array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // ask for user input
    int user[3][3];
    cout << "enter 9 numbers: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> user[i][j];
        }
        
    }

    // display what they put in
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << user[i][j] << " ";
        }
        cout << endl;
        
    }

    // now add 2 matrixes together
    int addMatrix[3][3];
    for (int i = 0; i < 3; i++) { // Rows

        for (int j = 0; j < 3; j++) { // Columns

            addMatrix[i][j] = matrix[i][j] + user[i][j];

        }

    }
    cout << endl;

    // display the added matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << addMatrix[i][j] << " ";
        }
        cout << endl;
        
    }

     // calculate the row sum
    int row[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row[i] += addMatrix[i][j];
        }
        
    }
    
    // display the row sum
    for (int i = 0; i<3;i++) {
        cout << row[i] << " ";
    }
    

    
    

    return 0;
    
}

// variable, int, float
// calculate area, parameter,... 
// conditional structure, if and switch and loop, while do while, for array and random number
// sort string, int using bubble sort.
// binary sort

// week 5
int task5() {
    float diameter;
    float circleArea;
    float squareArea;
    while (true) {
        // calculate the area of a circle from a dimater
        cout << "Enter a diameter: ";
        cin >> diameter;
        
        if (diameter > 0) {
    
        // calculate circle area
        circleArea =  (diameter/2) * (diameter/2) * 3.14;
    
        // calculate area of square using diameter as the side of the square
        squareArea = diameter * diameter;
    
        // show the output
        cout << "Area of a circle is: " << circleArea << endl;
        cout << "Area of a square is: " << squareArea << endl;
        break;
        
            
        } else {
            cout << "Diameter should be a positive number, enter again" << endl;
            continue;
        }
        
        
    }
    return 0;
}

int task3() {
    // determine if triangle is eidtable or not
    int a;
    int b;
    int c;

    cout << "Enter a b c: ";
    cin >> a>>b>> c;
    if (a + b < c || a + c < b || b + c < a)
    {
        cout << "not editable triangle";
    } else {
        cout << "editable triangle"; 
    }
    return 0;

}
int task4() {
    // absolute value
    // task 4: decide the absolute value of a number
   
   int num;
   // ask for input
   cout << "Enter an integer number: ";
   cin >> num;
   
   if (num < 0) {
       cout << "absolute value: | " << num << " |" << " is " << -num;
   } else {
       cout << "absolute value: | " << num << " |" << " is " << num;
   }
   

    return 0;
}


int task1() {
    // task 1 ask for 5 ages in an array 
    int number[5];
    int temp;
    
    cout << "Enter 5 ages: ";
    for (int i =0; i< 5; i++) {
        cin >> number[i];
    }
    
    // sort in decending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (number[j] < number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    
    // print out the output
    cout << "Age sort in decending order: ";
    for (int i = 0; i< 5; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
  

    // ----------------------------------------------
    // task 2 write out the interval
    
    for (int i = 0; i < 5; i++) {
        if (number[i] < 0 || number[i] > 120) {
            cout << number[i] << " invalid age" << endl;
        }
        else if (number[i] > 0 && number[i] < 5) {
            cout << "child: " << number[i] << endl;
        } else if (number[i] >= 5 && number[i] <= 18) {
            cout << "young: " << number[i] << endl;
        } else if (number[i] >= 19 && number[i] < 65) {
            cout << "adult: " << number[i] << endl;
        } else if (number[i] < 120){
            cout << "old: " << number[i] << endl;
        }
    }

    return 0;
}

int bubble() {
    // 2,7,3,4,9
    int temp;
    int arr[5];
    char again;

    do {
        // take in user input
    cout << "enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 4; i++) {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        }
    
    cout << "\ndo you want to enter again? (y/n): ";
    cin >> again;

    
    
    } while (tolower(again) == 'y');
    
    return 0;
}

int prac3While() {
    int i;
    char x;
    // ask input
    // cout << "Enter number: ";
    // cin >> i;
    
    while (true) {
        cout << "enter number: ";
        cin >> i;
        
        if (i > 0) {
            cout << "you entered: " << i << endl;
        } else {
            cout << "invalid input" << endl;
            continue;
        }

        // ask for input again
        cout << "Do you want to input again? (y/n): ";
        cin >> x;

        if (x == 'y')
        {
            continue;
        } else {
            cout << "Program finished";
            break;
        }
        
    }
    return 0;
}

int pracDoWhile() {
    int i;
    do {
        cout << "enter positive number: ";
        cin >> i;
    } while (i < 0);
    
    cout << "you entered: " << i;
    

    return 0;
}
int practWhileLoop() {
    int i;
    // ask input
    cout << "Enter number: ";
    cin >> i;
    
    
    while (i<= 0) {
        
        cout << "invalid input" << endl;
        cout << "Enter number: ";
        cin >> i;
    }
    
    cout << "you entered: " << i ;

    return 0;
}
// do wile and while loop
void week5() {
    int num, i =0;

    // input
    cout << "enter a number: ";
    cin >> num;

    cout << "do while: " << endl;
    do
    {
        cout << i << " ";
        i++;
    } while (i < num);

    
    // do while will do the code in the 'do'no matter what


    // while loop will stop if theres an error
    
    
    
}

// for loop is ideal for when you know how many iteration
void forloop() {
    double a;
    double b;
    double c;
    
    cout << "Enter a b c: ";
    cin >> a >> b >> c;
    
    if (a >= c >= b) {
        cout << "c is in an interval of " << a << "and" << b; 
    }


    for (int i = 1; i <=5; i++) {
        for (int j = 1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;

        
    }
    for (int x = 1; x <=5; x++) {
        for (int j = 5; j >= x; j-- ) {
                cout << "* ";
            } 
            cout << endl;
    }

   for (int i = 1; i <= 4; i++) {
        for (int j = 4; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
}

void month() {
     // example 3
    int month;

    cout << "Enter month number: ";
    cin >> month;

    switch (month)
    {
    case 12:
    case 1:
    case 2:
    cout << "winter";
        break;
    case 3:
    case 4:
    case 5:
    cout << "spring";
        break;
    case 6:
    case 7:
    case 8:
    cout << "summer";
        break;
    case 9:
    case 10:
    case 11:
    cout << "fall";
        break;
    
    default:
    cout << "enter 1-12";
        break;
    }
}

void season() {
    int month;

    cout << "Enter month number: ";
    cin >> month;

    switch (month)
    {
    case 1:/* constant-expression */
        cout << "January" << endl;
        break;
    case 2: 
        cout << "February" << endl;
        break;
    case 3:/* constant-expression */
        cout << "March" << endl;
        break;
    case 4: 
        cout << "April" << endl;
        break;
    case 5:/* constant-expression */
        cout << "May" << endl;
        break;
    case 6: 
        cout << "June" << endl;
        break;
    case 7:/* constant-expression */
        cout << "July" << endl;
        break;
    case 8: 
        cout << "August" << endl;
        break;
    default:
        cout << "enter number from 1-12";
        break;
    }
}

void triangle() {
    // example 1

    int a;
    int b;
    int c;

    cout << "Enter a b c: ";
    cin >> a>>b>> c;
    if (a + b < c || a + c < b || b + c<a)
    {
        cout << "cannot construct triangle";
    } else {
        cout << "can construct triangle"; 
    }

}

void postiveORnegative(){
     // example 2

    int num; 
    cout << "enter a number: ";
    cin >> num;

    if (isdigit(num)) {
        if (num > 0)
            cout << "the number is positive" << endl;
        else if (num < 0)
            cout << "The number is negative" << endl;
        else
            cout << "The number is 0" << endl;    
    
    } 
    else {
        cout << "Enter integer number" << endl;
        
    }
}

int arrayPract() {
    int number[5];
    int sum = 0;
    
    // take input
    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }
    

    // display number and then sum up the number
    for (int i = 0; i < 5; i++)
    {
       // cout << "Number: "<< number[i] << endl;0
        sum += number[i];
    } 

    cout << "Sum: " << sum;
    return 0;
    
}

int arrayPractHomework() {
    double number[5];
    double sum = 0;
    double average;
    
    // take input
    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }
    

    // display number and then sum up the number
    for (int i = 0; i < 5; i++)
    {
       // cout << "Number: "<< number[i] << endl;0
        sum += number[i];
    }

    average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average;
    return 0;
    
}

int strsort() {
    string word[5];
    string temp;

    cout << "enter 4 words: ";
    for (int i = 0; i < 5; i++)
    {cin >> word[i];}

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (word[j] < word[j+1]) {
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < 5; i++) {
        cout << word[i];
    }
    
    
    
    return 0;
    
}
int sort() {
    int numbers[5];

    // Fill the array
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Bubble sort 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) { // Decreasing iteration in the inner loop
            // Write out corrent state
            cout << "Current i: " << i << ", Current j: " << j << " | Current array state: ";
            for (int k = 0; k < 5; k++) {
                cout << numbers[k] << " ";
            }
            cout << endl;

            // Comparison of the neighbors
            if (numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Final array (sorted)
    cout << "The sorted numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;

}

int binarysort() {
    int number[5];
    cout << "enter 5 number: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }
    
    // [2,1,3,6,4]
    // find the middle element: length of list / 2 
    // put element less than middle element in list small
    // put element bigger than middle element in big list 
    // recursive
    int middle = size(number) / 2;
    int small[size(number) - middle];
    int big[size(number) - middle];
    
    return 0;
}   

int randomnum() {
    int number[5];
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        number[i] = rand() % 10 + 1; // generate number between 1 - 10
    }

    for (int i = 0; i < 5; i++) {
        cout << number[i] << " ";
    }
    return 0;
    
}
    // main method
int main() {
    week9();
    // week8();
    // test();
    // week7();
    // week6();
    // task1();
    // bubble();
    // randomnum();
    // strsort();
    // sort();
    // arrayPractHomework()
    // arrayPract();
    // prac3While();
    // pracDoWhile();
    // practWhileLoop();
    // week5();
    // forloop();
    // month();
    // season();
    // triangle();
    // postiveORnegative();
    return 0;    
}
