#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void bubbleSort(int array[], int size, int *r0){

      for (int step = 0; step < size; ++step) {

        for (int i = 0; i < size - step; ++i) {
          if (array[i] > array[i + 1]) {

            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            *r0 = *r0 + 1;

          }
        }
      }
    }



    int partition(int arr[], int start, int end, int *r0 ){

        int pivot = arr[start];

        int count = 0;
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] <= pivot)
                count++;
        }

        // Giving pivot element its correct position
        int pivotIndex = start + count;
        swap(arr[pivotIndex], arr[start]);

        // Sorting left and right parts of the pivot element
        int i = start, j = end;

        while (i < pivotIndex && j > pivotIndex) {

            while (arr[i] <= pivot) {
                i++;
            }

            while (arr[j] > pivot) {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
                *r0 = *r0 + 1;

            }
        }

        return pivotIndex;
    }

    void quickSort(int arr[], int start, int end, int *r0){
        int *r1 = r0;

        // base case
        if (start >= end)
            return;

        // partitioning the array
        int p = partition(arr, start, end, r0);

        // Sorting the left part
        quickSort(arr, start, p - 1, r0);

        // Sorting the right part
        quickSort(arr, p + 1, end, r0);
}


// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r, int *r0) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      *r0 = *r0 + 1;
      i++;
    } else {
      arr[k] = M[j];
      *r0 = *r0 + 1;
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    *r0 = *r0 + 1;
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    *r0 = *r0 + 1;
    j++;
    k++;
  }


}

// Divide the array into two subarrays, sort them and merge them
int mergeSort(int arr[], int l, int r, int *r0) {

    if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

        mergeSort(arr, l, m, r0);
        mergeSort(arr, m + 1, r, r0);

        // Merge the sorted subarrays
        merge(arr, l, m, r, r0);
      }

}


int main() {
    //INIT
    cout << "+---------------------------------------------+\n";
    cout << "|           METODOS DE ORDENAMIENTO           |\n";
    cout << "+---------------------------------------------+\n";
    cout << "|===> Escuela de Ingenieria de Sistemas       |\n";
    cout << "|===> Alumno: Anderson Leonardo Flores Macedo |\n";
    cout << "|===> Codigo: 236177              Semestre: I |\n";
    cout << "+---------------------------------------------+\n\n";

    int size, results[6], better, id = 0, graphics[60] = { 0 }, comprobe, now = 0, rev = 10;
    cout << "List Size: ";
    cin >> size;

    cout << endl << endl << "List Generated with values between 0 and 100" << endl;


    int listt_base[size] = { 0 };
    int listt[size] = { 0 };


    srand ( time ( 0 ) );

    //RestarFileWork
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt_base[n] = rand () % 101;
        listt[n] = listt_base[n];
        cout << listt_base[n] << ' ';


    }

    cout << endl << endl;


    //InsertSort
    cout << "INSERT SORT" << endl;
    int chks = -1, lowest = 0, biggest = 0, r0 = 0;


    for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){
        chks++;

        for ( int m = chks; m > -1 ; m-- ){

            if ( listt[m] > listt[n] ){
                biggest = n;
                lowest = m;

            }



        }


        for ( int o = 0; o < biggest - lowest; o++ ){
            listt[n - o] = listt[n - o] + listt[n - o - 1];
            listt[n - o - 1] = listt[n - o] - listt[n - o - 1];
            listt[n - o] = listt[n - o] - listt[n - o - 1];
            r0++;


        }

        biggest = 0;
        lowest = 0;


        }


    for ( int n = 0; n < sizeof ( listt ) / 4 ; n++ ){
        cout << listt[n] << ' ';


    }



    cout << endl <<"Total Moves: " << r0 << endl;
    results[0] = r0;

    cout << endl << endl;

    //Restart List
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt[n] = listt_base[n];


    }

    r0 = 0;


    //SelectSort
    cout << "SELECT SORT" << endl;
    int indx = -1, l_indx;
    bool change = false;


    for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){

        lowest = listt[n];

        for ( int m = n + 1; m < sizeof ( listt ) / 4; m++ ){

            if ( listt[n] > listt[m] && lowest > listt[m] ){
                lowest = listt[m];
                l_indx = m;
                change = true;

            }


        }

        if ( change == true ){
            r0++;
            listt[n] = listt[n] + listt[l_indx];
            listt[l_indx] = listt[n] - listt[l_indx];
            listt[n] = listt[n] - listt[l_indx];
            change = false;

        }



    }


    for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){
        cout << listt[n] << ' ';

    }
    cout << endl <<"Total Moves: " << r0 << endl;
    results[1] = r0;

    cout << endl << endl;

    //RestartList
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt[n] = listt_base[n];


    }

    r0 = 0;



    //CountingSort
    cout << "COUNTING SORT" << endl;
    int max_s;
    max_s = listt[0];


    for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){
        if ( listt[n] > max_s ){
            max_s = listt[n];

        }


    }


    int new_listt[max_s + 1] = { 0 };

    for ( int m = 0; m < sizeof ( new_listt ) / 4; m++ ){
        for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){

            if ( listt[n] == m ){
                new_listt[m]++;

            }


        }


    }


    for ( int n = 0; n < sizeof ( new_listt ) / 4; n++ ){
        new_listt[n + 1] = new_listt[n + 1] + new_listt[n];

    }



    int end_listt[sizeof ( listt ) / 4] = { 0 };


    for ( int m = 0; m < sizeof ( listt ) / 4; m++ ){
        for ( int n = 0; n < sizeof ( new_listt ) / 4; n++ ){

            if ( listt[m] == n ){
                new_listt[n]--;
                end_listt[new_listt[n]] = listt[m];
                r0++;


            }


        }


    }


    for ( int n = 0; n < sizeof ( end_listt ) / 4; n++ ){
        cout << end_listt[n] << ' ';

    }

    cout << endl <<"Total Moves: " << r0 << endl;
    results[2] = r0;

    cout << endl << endl;

    //RestartList
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt[n] = listt_base[n];


    }

    r0 = 0;


    //MergeSort
    cout << "MERGE SORT\n";
    size = sizeof(listt) / sizeof(listt[0]);
    mergeSort(listt, 0, size - 1, &r0);


    for ( int n = 0; n < sizeof ( listt ) / 4; n++ ){
        cout << listt[n] << ' ';

    }

    cout << endl << "Total Moves: " << r0 << endl;
    results[3] = r0;


    cout << endl << endl;


    //RestartList
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt[n] = listt_base[n];


    }

    r0 = 0;


    //QuickSort
    cout << "QUICK SORT" << endl;
    quickSort(listt, 0, size - 1, &r0);

    for (int i = 0; i < size; i++) {
        cout << listt[i] << " ";


    }


    cout << endl << "Total Moves: " << r0 << endl;
    results[4] = r0;

    cout << endl << endl;



    //RestartList
    for ( int n = 0; n < sizeof ( listt_base ) / 4 ; n++ ){
        listt[n] = listt_base[n];


    }

    r0 = 0;


    //BubbleSort
    cout << "BUBBLE SORT" << endl;
    int N = sizeof(listt) / sizeof(listt[0]);
    bubbleSort(listt, N, &r0);

    for (int i = 0; i < size; i++) {
        cout << listt[i] << " ";


    }
    cout << endl << "Total Moves: " << r0 << endl;
    results[5] = r0;



    //SHowResults

    better = results[0];
    for ( int n = 1; n < 6; n++ ){
        if ( results[n] < better ){
            better = results[n];
            id = n;

        }

    }

    cout << "Better Sort was ";
    if ( id == 0 ){
        cout << "Insert Sort with ";
    }
    else if ( id == 1 ){
        cout << "Select Sort with ";

    }
    else if ( id == 2 ){
        cout << "Counting Sort with ";

    }
    else if ( id == 3 ){
        cout << "Merge Sort with ";

    }
    else if ( id == 4 ){
        cout << "Quick Sort with ";

    }
    else if ( id == 5 ){
        cout << "Bubble Sort with ";

    }

    cout << better << " moves." << endl << endl << endl;

    comprobe = size;

    cout << "+============+" << endl;
    cout << "| Stadistics |" << endl;
    cout << "+============+" << endl;


    for ( int n = 10; n > 0; n-- ){
        for ( int m = 0; m < 6; m++ ){

            if ( results[m] < comprobe ){
                graphics[now] = 1;

            }
            now++;


        }


        comprobe += size;


    }

    now = 0;

    for ( int n = 0; n < 10; n++ ){
        if ( rev == 10 ){
            cout << rev << '|';

        }
        else{
            cout << ' ' << rev << '|';

        }

        rev--;

        for ( int m = 0; m < 6; m++ ){
            if ( graphics[now] == 1 ){
                cout << "#### ";

            }
            else{
                cout << "     ";

            }

            now++;


        }

        cout << endl;

    }


    for ( int n = 0; n < 33; n++ ){
        cout << '=';

    }

    cout << endl << "    ";

    for ( int n = 1; n < 7; n++ ){
        cout << 'S' << n << "   ";

    }

    cout << endl << endl;

    cout << "Legend" << endl;
    cout << "S1 ==> Insert Sort     S2 ==> Select Sort      S3 ==> Counting Sort\n";
    cout << "S4 ==> Merge Sort      S5 ==> Quick Sort       S6 ==> Bubble Sort";
    cout << endl << "To be the better Sort, the number of moves must be lower of the list size" << endl;
    cout << "If not, we compare the same list size but added by the original list size" << endl;
    cout << "Example:" << endl;
    cout << "9 < 10 = Yes, Score 10" << endl;
    cout << "11 < 10 = No" << endl;
    cout << "11 < 20 = Yes, Score 9" << endl;
    cout << "25 < 20 = No" << endl;
    cout << "25 < 30 = Yes, Score 8" << endl;

    return 0;
}
