#include <iostream>
#include <cstdlib>
#include <random>
#include <chrono>
#include <cctype>
#include <vector>
#include <algorithm>
#include <functional>

#include "sorts.h"

void shuffle_array(vector<int>& shuffled);

using namespace std;
using namespace std::chrono;

int main()
{
	Sorts* sort_function = new Sorts();			//pointer to call sorting function from Sorts class
	Sorts sort_obj;								//object to call a member variable from Sorts class
	Data data_array;							//object to call the data set vectors from Data class

	int length_N = 0;							//length of data set vector (i.e., small, mid, etc)
	int num_datasets = sort_obj.num_datasets;	//total number of data sets; for use in loops
	int dataset = 9;							//number of times the same sort is run to find median
	int middleF = dataset / 2;					//middle vector element for median

	//for every dataset, small through infinite, create and initialize sorted, backwards, 
	//and shuffled arrays:
	for (int i = 0; i < num_datasets; i++)
	{
		//array length N
		length_N = sort_obj.dataset_sizes[i];

		//create array of length N, with value range 0 through(N - 1); sorted
		vector<int> sorted(length_N);
		for (int j = 0; j < length_N; j++)
		{
			sorted[j] = j;
		}

		//create array of length N, reverse values
		vector<int> backwards = sorted;
		reverse(backwards.begin(), backwards.end());

		//create array of length N, shuffled array
		vector<int> shuffled = sorted;
		shuffle_array(shuffled);

		

		
			data_array.copyVector(sorted, data_array.dataMid, length_N);
			data_array.copyVector(backwards, data_array.dataMidRev, length_N);
			data_array.copyVector(shuffled, data_array.dataMidRand, length_N);
			vector<int> shuffled_Mid = shuffled;

			//***********************************Insertion Sort****************************************
			cout << endl << endl;
			cout << "Insertion Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->insertion_timer(data_array.dataMid, data_array.insert_vec4, length_N);
			int time4 = sort_function->calculateMedian(data_array.insert_vec4);
			cout << endl << "Reversed: " << endl;

			//----------------------------Reversed, dataMid--------------------------------------
			sort_function->insertion_timer(data_array.dataMidRev, data_array.insert_vec5, length_N);
			int time5 = sort_function->calculateMedian(data_array.insert_vec5);
			cout << endl << "Shuffled: " << endl;

			//----------------------------Shuffled, dataMid--------------------------------------
			sort_function->insertion_timer(data_array.dataMidRand, data_array.insert_vec6, length_N);
			int time6 = sort_function->calculateMedian(data_array.insert_vec6);

			//***********************************Quick Sort****************************************
			cout << endl << endl;
			cout << "Quick Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->quicksort_timer(data_array.dataMid, data_array.qs_vec4, length_N);
			int qs_time4 = sort_function->calculateMedian(data_array.qs_vec4);
			cout << endl << "Reversed: " << endl;

			sort_function->quicksort_timer(data_array.dataMidRev, data_array.qs_vec5, length_N);
			int qs_time5 = sort_function->calculateMedian(data_array.qs_vec5);
			cout << endl << "Shuffled: " << endl;

			sort_function->quicksort_timer(data_array.dataMidRand, data_array.qs_vec6, length_N);
			int qs_time6 = sort_function->calculateMedian(data_array.qs_vec6);
			cout << endl << endl;
			//***********************************Bubble Sort****************************************

			cout << "Bubble Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->bubble_timer(data_array.dataMid, data_array.bub_vec4, length_N);
			int bub_time4 = sort_function->calculateMedian(data_array.bub_vec4);
			cout << endl << "Reversed: " << endl;

			sort_function->bubble_timer(data_array.dataMidRev, data_array.bub_vec5, length_N);
			int bub_time5 = sort_function->calculateMedian(data_array.bub_vec5);
			cout << endl << "Shuffled: " << endl;

			sort_function->bubble_timer(data_array.dataMidRand, data_array.bub_vec6, length_N);
			int bub_time6 = sort_function->calculateMedian(data_array.bub_vec6);

			//***********************************Selection Sort****************************************

			cout << endl << endl;
			cout << "Selection Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->selectionSort_timer(data_array.dataMid, data_array.select_vec4, length_N);
			int sel_time4 = sort_function->calculateMedian(data_array.select_vec4);
			cout << endl << "Reversed: " << endl;

			sort_function->selectionSort_timer(data_array.dataMidRev, data_array.select_vec5, length_N);
			int sel_time5 = sort_function->calculateMedian(data_array.select_vec5);
			cout << endl << "Shuffled: " << endl;

			sort_function->selectionSort_timer(data_array.dataMidRand, data_array.select_vec6, length_N);
			int sel_time6 = sort_function->calculateMedian(data_array.select_vec6);

			//***********************************Merge Sort****************************************

			cout << endl << endl;
			cout << "Merge Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->merge_timer_(data_array.dataMid, data_array.merge_vec4, length_N);
			int mer_time4 = sort_function->calculateMedian(data_array.merge_vec4);
			cout << endl << "Reversed: " << endl;

			sort_function->merge_timer_(data_array.dataMidRev, data_array.merge_vec5, length_N);
			int mer_time5 = sort_function->calculateMedian(data_array.merge_vec5);
			cout << endl << "Shuffled: " << endl;

			sort_function->merge_timer_(data_array.dataMidRand, data_array.merge_vec6, length_N);
			int mer_time6 = sort_function->calculateMedian(data_array.merge_vec6);

			//***********************************Heap Sort****************************************

			cout << endl << endl;
			cout << "Heap Sort: " << endl;
			cout << endl << "Sorted: " << endl;
			//----------------------------Sorted, dataMid--------------------------------------
			sort_function->heap_timer(data_array.dataMid, data_array.heap_vec4, length_N);
			int heap_time4 = sort_function->calculateMedian(data_array.heap_vec4);
			cout << endl << "Reversed: " << endl;

			sort_function->heap_timer(data_array.dataMidRev, data_array.heap_vec5, length_N);
			int heap_time5 = sort_function->calculateMedian(data_array.heap_vec5);
			cout << endl << "Shuffled: " << endl;

			sort_function->heap_timer(data_array.dataMidRand, data_array.heap_vec6, length_N);
			int heap_time6 = sort_function->calculateMedian(data_array.heap_vec6);
    }

    system("pause");
	return 0;
}


void shuffle_array(vector<int>& shuffled)
{
	// get seed value:
	unsigned seed = system_clock::now().time_since_epoch().count();
	//shuffle values
	shuffle(shuffled.begin(), shuffled.end(), default_random_engine(seed));
}


#pragma endregion