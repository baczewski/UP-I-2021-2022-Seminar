//#include <iostream>
//#include <cmath>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main() {
//    // bool
//    // if - else
//    // while
////    Напишете булев израз, който по въведени две числа проверява дали първото
////    е по- голямо от второто.
//    // Task 1
//    /* double firstNumber;
//    double secondNumber;
//    cin >> firstNumber >> secondNumber;
//    bool firstGreaterThanSecond = (firstNumber > secondNumber);
//    cout << std::boolalpha << firstGreaterThanSecond << endl; */
//
//    // Напишете булев израз, която проверява дали едно число е четно.
//    // Task 2
//    /* int number;
//    cin >> number;
//    bool isEven = ((number != 0) && number % 2 == 0);
//    cout << std::boolalpha << isEven << endl; */
//
//    // Напишете булев израз, който по въведено цяло положително число, определя
//    //дали то се дели на 2 и на 3, но не се дели на 5.
//    // Task 3
//    /* unsigned int number;
//    cin >> number;
//    bool result = (number % 2 == 0) && (number % 3 == 0) && (number % 5 != 0);
//    cout << std::boolalpha << result << endl; */
//
//    // y=2*x+5 e уравнение на права. Напишете булев израз, който по две въведени
//    //числа, определя дали точката с координати тези числа принадлежи на правата.
//    // (x = 6, y = 17)
//    // Task 4
//    /* int x, y;
//    cin >> x >> y;
//    bool liesOn = (y == 2 * x + 5);
//    cout << std::boolalpha << liesOn << endl; */
//
//    //По въведени координати на точка (x и y), цели числа , напишете булев израз,
//    //който проверява дали тя лежи в окръжност с център началото на координатната
//    //система и радиус 6. Включваме контура на окръжността.
//    /* int x, y;
//    const int radius = 6;
//    cin >> x >> y;
//    bool res = sqrt(x * x + y * y) <= radius;
//    cout << std::boolalpha << res << endl; */
//
//    //  Напишете булев израз, който проверява дали дадено цяло положително
//    //число е степен на двойката
////    int x;
////    cin >> x;
////    bool isPowerOfTwo = (x != 0) && !(x & (x - 1));
//    // 0 -> 0
//    // 1 -> 1
//    // 2 -> 10
//    // 3 -> 011
//    // 4 -> 100
//    // 5 -> 101
//    // 6 -> 110
//    // 7 -> 0111
//    // 8 -> 1000
//    // 9 -> 1001
//    // 10 -> 1010
//    // 16 -> 10000
//    // 31 -> 011111
//    // 32 -> 100000
//
////    Да се въведат три цели числа в конзолата, които представляват параметрите
////    a,b,c на квадратно уравнение ax^2 + bx + c = 0. Да се определи дали
////    уравнението има решение, колко корена има и кои са те.
////    int a, b, c;
////    cin >> a >> b >> c;
////    int d = b * b - 4 * a * c;
////    if (d == 0) {
////        int xs = -b / (2 * a);
////        cout << "x1 = x2 = " << xs << endl;
////    }
////    else if (d > 0) {
////        double x1 = (-b + sqrt(d)) / (2 * a);
////        double x2 = (-b - sqrt(d)) / (2 * a);
////        cout << "x1 = " <<  x1 << " , x2 = " << x2 << endl;
////    }
////    else {
////        cout << "No real solution" << endl;
////    }
////    //
//
//    //Да се въведе година в конзолата и да се определи дали тя е високосна. Една
//    //година високосна, ако се дели на 4, и ако се дели на 100, то трябва да се дели на
//    //400.
////    int year;
////    cin >> year;
////    // 2012
////    // 2200 0
////    bool isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
////    cout << isLeapYear << endl;
////    if (year % 4 == 0) {
////        if (year % 100 == 0) {
////            if (year % 400 == 0) {
////                cout << "True";
////            }
////            else {
////                cout << "False";
////            }
////        }
////        else {
////            cout << "True";
////        }
////    }
////    else {
////        cout << "False";
////    }
//
//// true || true -> true
//// true || false -> true
//// false || true -> true
//// false || false -> false
//////    for (int i = 0; i < n; i += 1) {
//////        cout << i << " -> ";
//////    }
////
////    while (n <= 20) {
////        cout << n << " -> ";
////        n += 60;
////    }
////
//    int n;
//
//    do {
//        cout << "Enter number: ";
//        cin >> n;
//    } while (n != 30);
//
//    return 0;
//}


// Include needed libraries
#include <iostream>
#include <fstream>
#include <string>

// Simple function, that returns if a char is a vowel
bool is_vowel(const char ch) {

    // The power of operator "||" called disjunction returns true if ot least one of the statements is true
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

// Function used to add space and interval after each vowel
void shift_elements(std::string &content) {

    // For each char in out string
    for (int i = 0; i < content.length(); ++i) {

        // If we are at a vowel, we call the insert function, so the string looks like this "something....- ";
        if (is_vowel(content.at(i))) {
            content.insert(i, "- ");

            // We increase index, so we optimise the speed of out program, skipping inserted elements
            i += 2;
        }
    }
}

int main() {
    // Input file stream, we are reading using this stream
    std::ifstream file_path("openMe.txt");

    // Output file stream, where we are outputting the content
    std::ofstream output_stream("saveMe.txt", std::ios::trunc);

    // Temporary empty string, where we store each line
    std::string content;

    // If both file exist
    if (file_path.is_open() && output_stream.is_open()) {
        while (file_path) {

            // We get each line, then we shift elements, we print the line in the output file stream
            std::getline(file_path, content);
            shift_elements(content);
            output_stream << content << std::endl;

            // We clear our temporary string, so we start from scratch with next line
            content.clear();
        }

        // Good practice - close both files
        file_path.close();
        output_stream.close();
    }

    // If we couldn't open the file, we just print a simple message, better way is using throw and a try catch block
    // So the program will print out error and will exit in the closest try catch block
    else {
        std::cout << "Couldn't open files." << std::endl;
    }

    return 0;
}

