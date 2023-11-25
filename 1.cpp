#include <iostream>
using namespace std;
int uaf;
float caf;
float fp;

//function to calculate unadjusted functional point
void UAF()
{
    int input, output, Inquiry, internal_logical_files, external_interface_files, n;

    cout << "Enter the number of Inputs" << endl;
    cin >> input;
    cout << "Enter the number of Outputs" << endl;
    cin >> output;
    cout << "Enter the number of Enquiries" << endl;
    cin >> Inquiry;
    cout << "Enter the number of Internal logical files" << endl;
    cin >> internal_logical_files;
    cout << "Enter the number of External interface files" << endl;
    cin >> external_interface_files;

    cout << "Type\t\t\t\tSimple\t\tAverage\t\tComplex" << endl;
    cout << "Input\t\t\t\t  3\t\t  4\t\t   6" << endl;
    cout << "Output\t\t\t\t  4\t\t  5\t\t   7" << endl;
    cout << "Inquiry\t\t\t\t  3\t\t  4\t\t   6" << endl;
    cout << "Internal logical files\t\t  7\t\t  10\t\t   15" << endl;
    cout << "External interface files\t  5\t\t  7\t\t   10" << endl;

    cout << "Enter the weighing factor for input" << endl;
    cin >> n;
    switch (n)
    {
    case 3:
        uaf += input * 3;
        break;
    case 4:
        uaf += input * 4;
        break;
    case 6:
        uaf += input * 6;
        break;

    default:
        break;
    }

    cout << "Enter the weighing factor for output" << endl;
    cin >> n;
    switch (n)
    {
    case 4:
        uaf += output * 4;
        break;
    case 5:
        uaf += output * 5;
        break;
    case 7:
        uaf += output * 7;
        break;

    default:
        break;
    }

    cout << "Enter the weighing factor for Inquiry" << endl;
    cin >> n;
    switch (n)
    {
    case 3:
        uaf += Inquiry * 3;
        break;
    case 4:
        uaf += Inquiry * 4;
        break;
    case 6:
        uaf += Inquiry * 6;
        break;

    default:
        break;
    }

    cout << "Enter the weighing factor for Internal logical files" << endl;
    cin >> n;
    switch (n)
    {
    case 7:
        uaf += internal_logical_files * 7;
        break;
    case 10:
        uaf += internal_logical_files * 10;
        break;
    case 15:
        uaf += internal_logical_files * 15;
        break;

    default:
        break;
    }

    cout << "Enter the weighing factor for External interface files" << endl;
    cin >> n;
    switch (n)
    {
    case 5:
        uaf += external_interface_files * 5;
        break;
    case 7:
        uaf += external_interface_files * 7;
        break;
    case 10:
        uaf += external_interface_files * 10;
        break;

    default:
        break;
    }

    cout << "Your unadjusted functional point is : " << uaf << endl;
}

//function to calculate complexity adjustment factor

void CAF()
{
    int n, q = 0;

    cout << "No Influence\t0" << endl;
    cout << "Incidental\t1" << endl;
    cout << "Moderate\t2" << endl;
    cout << "Average\t\t3" << endl;
    cout << "Significant\t4" << endl;
    cout << "Essential\t5" << endl;
    cout << "Rate each factor on a scale of 0 to 5" << endl;
    cout << endl;

    cout << "1. Does the system require reliable backup and recovery ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "2. Is data communication required ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "3. Are there distributed processing functions ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "4. Is performance critical ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "5. Will the system run in an existing heavily utilized operational environment ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "6. Does the system require on line data entry ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "7. Does the on line data entry require the input transaction to be built over multiple screens or operations ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "8. Are the master files updated on line ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "9. Is the inputs, outputs, files, or inquiries complex ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "10. Is the internal processing complex ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "11. Is the code designed to be reusable ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "12. Are conversion and installation included in the design ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }

    cout << "13. Is the system designed for multiple installations in different organizations ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }
    cout << "14. Is the application designed to facilitate change and ease of use by the user ? Enter : ";
    cin >> n;
    switch (n)
    {
    case 1:
        q += n;
        break;
    case 2:
        q += n;
        break;
    case 3:
        q += n;
        break;
    case 4:
        q += n;
        break;
    case 5:
        q += n;
        break;
    default:
        break;
    }

    caf = 0.65 + (0.01 * q);

    cout << "Complexity Adjustment Factor is : " << caf << endl;
}

//function to calculate functional point

void FP()
{
    fp = caf * uaf;
    cout << "Your Functional Point : " << fp;
}

int main()
{
    UAF();
    CAF();
    FP();

    return 0 ;
}
