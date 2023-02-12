// sravnenie metodov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    cout << "*******Программа сортировки методом пузырька *****\n";

    const int N = 1000;
    int array[N], tmp, nShift, H=0, sum =0;


    for (int f = 0; f < 10; f++)
    {


        for (int i = 0; i < N; i++)
        {
            array[i] = 1 + rand();
            /* cout << array[i] << " ";*/
        }

        for (int k = 1; k < N; k++)
        {
            nShift = 0;
            for (int j = 0; j < N - k;j++)
            {

                if (array[j] > array[j + 1])
                {
                    tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;
                    nShift++;

                }

            }
            if (nShift == 0)
            {

                H = k;
                
                break;
            }
           
           
        }
        sum += H;
    }
    cout << " Среднее количество циклов в методе пузырька = " << sum/10 << "\n\n";
  

    /*cout << "\n";
    for (int m = 0; m < N; m++)
    {
        
        cout << array[m] << " ";
    }
    cout << endl;*/

    

    cout << "*******Программа сортировки методом выбора*****\n";

    const int M = 1000;
    int array_2[M];
    int temp = 0, mShift, S = 0, sum2 = 0;
     
    for (int i = 0; i < M; i++)
    {
        array_2[i] = 1 + rand();
       /* cout << array_2[i] << " ";*/
    }



    for (int t = 0; t < 10; t++)
    {


        for (int a = 0; a < M - 1; a++)
        {
            mShift = 0;
            int min = a;
            for (int z = a; z < M; z++)
            {
                if (array_2[z] < array_2[min])
                {
                    min = z;

                }
            }
            if (a != min)
            {
                temp = array_2[a];
                array_2[a] = array_2[min];
                array_2[min] = temp;
                mShift++;
            }
            if (mShift == 0)
            {
                S = a;
            }
        }
        sum2 += S;
    }
    cout << " Среднее количество циклов методом выбора = " <<sum2/10 << "\n\n";


    
   /* cout << "\n";
    for (int q = 0; q < M; q++)
    {

        cout << array_2[q]<< " ";
       
    }*/
}

