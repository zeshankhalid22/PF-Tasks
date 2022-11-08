// 100 Students 100 Locker Problem
// here there are N Students and M Lockers
#include <stdio.h>
#include <stdbool.h>

//DECLARED FUNCTIONS HERE

int openLocks(int locker, int student){        // how many lockers will open at the end
    bool LockerState; //  true=open false=close
    int val=0;
    for(int lk=1;lk<=locker;lk++){
        LockerState= false;
        for(int st=1;st<=student;st++) {
            if(lk >= st) { // i used this condition to reduce cpu Cycles
                if (lk % st == 0) {
                    if (LockerState)
                        LockerState = false;
                    else
                        LockerState = true;
                }
            }
            else
                break; // lk<st(2<5) 5th student doesn't need to touch 2nd lk, break from here
        }   if(LockerState) val++;
    }
    return val;
}
int mostTouchableLocker(int locker,int student){  // Mth locker which is mostly touched by students
    int count=0;int prevCount=0,mostTouched;
    int howManyTouched=1;
    for(int lk=1;lk<=locker;lk++){
        for(int st=1;st<=student;st++){
            if(lk>=st){
                if(lk%st==0){
                    count++; // for 6, count=4
                }
            }
            else
                break;
        }
        if(count>=prevCount){
            mostTouched=lk;
            prevCount=count;
            count=0;

        }
        else
            count=0;

    }
        return mostTouched;


}

// BELLOW ARE TEST CASES
void test1(int arr[][3] , int size) // test cases will be checked from openLocks
{
    printf("\n\nTask 1 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = openLocks(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;

            printf( "Test Failed\n") ;


            printf("%s %d","Lockers = ", arr[i][0]);
            printf( "\n");
            printf("%s %d","Students= " , arr[i][1]);
            printf( "\n");
            printf("%s %d","Expected= " , arr[i][2]);
            printf( "\n");
            printf("%s %d","Result =  " , val);
            printf( "\n");
            printf( "\n-------------------------------------");
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);

    printf("\n\n");
    printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][3] , int size) { // test cases will be checked for MostTouchAbleLockers

    printf("\n\nTask 2 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = mostTouchableLocker(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;

            printf("%s %d","Lockers = ", arr[i][0]);
            printf( "\n");
            printf("%s %d","Students= " , arr[i][1]);
            printf( "\n");
            printf("%s %d","Expected= " , arr[i][2]);
            printf( "\n");
            printf("%s %d","Result =  " , val);
            printf( "\n");
            printf( "\n-------------------------------------");
            printf("\n\n");
        }

    }
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);

    printf("\n\n");

    printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

int main() {
                        // arr[0] lockers. arr[1] are students. arr[2] are the respective open lockers at the end
    int arr1[10][3] = {{10,    10,    3},
                       {100,   100,   10},
                       {100,   72,    34},
                       {70,    100,   8},
                       {10000, 1000,  5228},
                       {0,     0,     0},
                       {1,     0,     0},
                       {10000, 10000, 100},
                       {10000, 2000,  5187},
                       {17000, 2154,  8989}};

    int arr2[10][3] = {{10,    10,    10}, // here arr[2] is locker number which is most touched
                       {20,    10,    20},
                       {72,    100,   72},
                       {100,   70,    60},
                       {150,   40,    120},
                       {15,    7,     12},
                       {1500,  450,   1260},
                       {100,   100,   96},
                       {17000, 2154,  15120},
                       {10000, 10000, 9240}};
    test1(arr1, 10);
    test2(arr2, 10);

    return 0;
}