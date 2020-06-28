#include <iostream>
using namespace std;

int main() {
    struct someObject
    {
        int x = 0xA3A2310;
        int y = 0xB3B2B10;

        someObject()
        {
            x = 0xC3C2C1C0;
            y = 0xD3D2D1D0;

        }
    };
    // Stack Allocation (Compile Time)
    //someObject pSomeObject[10];

    // Heap (run time allocation)
    someObject **pSomeObject = new someObject*[10]{ 0 };

    for(int i = 0; i < 10; i++)
        pSomeObject[i] = new someObject();

    for(int i = 0; i < 10; i++)
        delete pSomeObject[i];

    delete[] pSomeObject;

    /*
    int someArray[10] = {3, 6, 8, 9, 23, 45, 17, 49, 91, 34};

    int *pLocation0 = someArray;
    for(int i = 0; i < 10; i++ ){
        //cout << someArray + i << " = " << *(someArray + i) << endl;
        cout << pLocation0 << " = " << *pLocation0 << endl;
        pLocation0++;
    }

//    cout << "pLocation6: " << (int) pLocation6 << endl;
//    cout << "pLocation0: " << (int) pLocation0 << endl;
//    cout << "Difference: " << pLocation6 - pLocation0 << endl;
    //system("pause");

     */

    /*
    char someString[] = "Hello!";
    char *pSomeString = someString;

    cout << "pSomeString: " << pSomeString << endl;

    char *pLocation0 = &someString[0];
    char *pLocation3 = &someString[3];

    cout << "pLocation0: " << (int)pLocation0 << endl;
    cout << "pLocation3: " << (int)pLocation3 << endl;
    cout << "Difference: " << pLocation3 - pLocation0 << endl;
    */
    return 0;
}
