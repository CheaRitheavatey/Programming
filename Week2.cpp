#include <iostream>

using namespace std;

// week 5

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
    
}
    // main method
int main() {
    strsort();
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
