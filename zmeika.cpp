#include <iostream>
using namespace std;
int main()
{
    int N = 10;          // задаем размер матрицы
    int a[N][N];        // и инициализируем ее
    for (int ik = 0; ik < N; ik++)
        for (int jk = 0; jk < N; jk++)
            a[ik][jk] = 0;          	// заполнив для удобства нулями
                                      
    for (int ik = 0; ik < N; ik++)
    { 				    	//назовем его "Основной цикл"
        for (int jk = 0; jk < N; jk++)
	{
        
            int i = ik + 1;     	// Номера строк и столбцов приводим в удобный
            int j = jk + 1;     	// в математическом плане вид (от 1 до N)  
		int D = i + j - 1;
int R =  (D * D + D) / 2 - ((D - N) * (D - N))* (D / (N + 1)) 
                    - j * ((D + 1)%2)- i * (D % 2) + 1; 
a[ik][jk] = R;
        }   
    }     

   for (int ik = 0; ik < N; ik++)
   {					//Блок "Вывод массива"
        for (int jk = 0; jk < N; jk++)
	{
           printf( " %02d  " , a[ik][jk]);	// дополняем число ведущими нулями
        }
        cout << endl;
    }  
    return 0;
}
