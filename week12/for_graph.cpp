//@author: Zachary Elliott
//@date: 10-27-25
//@purpose: Week 12 linear graph lab. Program will use for loops to create a liner graph

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variables
    int const M = 2;
    int const B = 3;
    int const SIZE = 16;
    int const MIN_X_VAL = 0;
    int const MAX_X_VAL = 4;

    //token for plot point
    char plot_point = 'x';
    string space = "   ";

    //arrays
    int x_axis[SIZE] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int y_axis[SIZE] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};

    //outter range bassed for loop for y-axis
    for(int y : y_axis)
    {
        std::cout << y << "|";

        //inner range based for loop for x-axis
        for (int x : x_axis)
        {
            //if x less then max x val we do the equation
            if(x < MAX_X_VAL)
            {
                int plot = (M * x) + B;
                
                //simple test to print where plot ='s y axis
                if (plot == y) //&& y == MIN_X_VAL)
                {
                    std::cout << std::string(x * space.size(), ' ') << plot_point;
                }
                
                /*
                After testing this is unnecessary sicne first number is 0
                //begin tabbing
                else if(plot == y)
                {
                    //nifty code i found that will take a string
                    //multiply x by space.size which takes my spaces within the space variable
                    //then takes spaces up to where i need it to dump the X
                    //hard part is gettin the spacing correct in space variable not a full tab
                    std::cout << std::string(x * space.size(), ' ') << plot_point;
                }*/
            }
        }
        //new line after all of it to make sure | is on the proper side
        std::cout << "\n";
    }

    //formatting to bump the x-axis out by 1
    std::cout << "  |" ;

    //create x-axis
    for (int x : x_axis)
    {
        std::cout << x << "|";
    }


    return 0;
}