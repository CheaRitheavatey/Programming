#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstring>

using namespace std;

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
    week6();
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
