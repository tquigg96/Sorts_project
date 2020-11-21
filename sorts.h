#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <cstdlib>
#include <random>
#include <chrono>
#include <cctype>
#include <vector>
#include <functional>
#include <string>

using namespace std;
using namespace std::chrono;

class Data {

public:
	const int small = 10;
	const int mid = 100;
	const int midLarge = 500;
	const int large = 1000;
	const int mega = 2000;
	const int supermega = 5000;
	const int ultramega = 10000;
	const int holdUp = 50000;
	const int infinite = 100000;

	int num_datasets = 9;
	vector<int>dataset_sizes{ small, mid, midLarge, large, mega, supermega, ultramega, holdUp, infinite };

	Data() {};
	~Data() {};

#pragma region DataVectors

	vector<int> dataSmallRand;
	vector<int> dataMidRand;
	vector<int> dataMidLargeRand;
	vector<int> dataLargeRand;
	vector<int> dataMegaRand;
	vector<int> dataSuperMegaRand;
	vector<int> dataUltraMegaRand;
	vector<int> dataHoldUpRand;
	vector<int> dataInifiteRand;

	vector<int> dataSmall;
	vector<int> dataMid;
	vector<int> dataMidLarge;
	vector<int> dataLarge;
	vector<int> dataMega;
	vector<int> dataSuperMega;
	vector<int> dataUltraMega;
	vector<int> dataHoldUp;
	vector<int> dataInifite;

	vector<int> dataSmallRev;
	vector<int> dataMidRev;
	vector<int> dataMidLargeRev;
	vector<int> dataLargeRev;
	vector<int> dataMegaRev;
	vector<int> dataSuperMegaRev;
	vector<int> dataUltraMegaRev;
	vector<int> dataHoldUpRev;
	vector<int> dataInifiteRev;
#pragma endregion

#pragma region medianVectors

	//vectors to find median times
	//small
	vector<int>insert_vec1;
	vector<int>insert_vec2;
	vector<int>insert_vec3;

	vector<int>bub_vec1;
	vector<int>bub_vec2;
	vector<int>bub_vec3;

	vector<int>qs_vec1;
	vector<int>qs_vec2;
	vector<int>qs_vec3;

	vector<int>select_vec1;
	vector<int>select_vec2;
	vector<int>select_vec3;

	vector<int>heap_vec1;
	vector<int>heap_vec2;
	vector<int>heap_vec3;

	vector<int>merge_vec1;
	vector<int>merge_vec2;
	vector<int>merge_vec3;

	//mid
	vector<int>insert_vec4;
	vector<int>insert_vec5;
	vector<int>insert_vec6;

	vector<int>bub_vec4;
	vector<int>bub_vec5;
	vector<int>bub_vec6;

	vector<int>qs_vec4;
	vector<int>qs_vec5;
	vector<int>qs_vec6;

	vector<int>select_vec4;
	vector<int>select_vec5;
	vector<int>select_vec6;

	vector<int>heap_vec4;
	vector<int>heap_vec5;
	vector<int>heap_vec6;

	vector<int>merge_vec4;
	vector<int>merge_vec5;
	vector<int>merge_vec6;

	//midLarge
	vector<int>insert_vec7;
	vector<int>insert_vec8;
	vector<int>insert_vec9;

	vector<int>bub_vec7;
	vector<int>bub_vec8;
	vector<int>bub_vec9;

	vector<int>qs_vec7;
	vector<int>qs_vec8;
	vector<int>qs_vec9;

	vector<int>select_vec7;
	vector<int>select_vec8;
	vector<int>select_vec9;

	vector<int>heap_vec7;
	vector<int>heap_vec8;
	vector<int>heap_vec9;

	vector<int>merge_vec7;
	vector<int>merge_vec8;
	vector<int>merge_vec9;

	//Large
	vector<int>insert_vec10;
	vector<int>insert_vec11;
	vector<int>insert_vec12;

	vector<int>bub_vec10;
	vector<int>bub_vec11;
	vector<int>bub_vec12;

	vector<int>qs_vec10;
	vector<int>qs_vec11;
	vector<int>qs_vec12;

	vector<int>select_vec10;
	vector<int>select_vec11;
	vector<int>select_vec12;

	vector<int>heap_vec10;
	vector<int>heap_vec11;
	vector<int>heap_vec12;

	vector<int>merge_vec10;
	vector<int>merge_vec11;
	vector<int>merge_vec12;

	//Mega
	vector<int>insert_vec13;
	vector<int>insert_vec14;
	vector<int>insert_vec15;

	vector<int>bub_vec13;
	vector<int>bub_vec14;
	vector<int>bub_vec15;

	vector<int>qs_vec13;
	vector<int>qs_vec14;
	vector<int>qs_vec15;

	vector<int>select_vec13;
	vector<int>select_vec14;
	vector<int>select_vec15;

	vector<int>heap_vec13;
	vector<int>heap_vec14;
	vector<int>heap_vec15;

	vector<int>merge_vec13;
	vector<int>merge_vec14;
	vector<int>merge_vec15;

	//SuperMega
	vector<int>insert_vec16;
	vector<int>insert_vec17;
	vector<int>insert_vec18;

	vector<int>bub_vec16;
	vector<int>bub_vec17;
	vector<int>bub_vec18;

	vector<int>qs_vec16;
	vector<int>qs_vec17;
	vector<int>qs_vec18;

	vector<int>select_vec16;
	vector<int>select_vec17;
	vector<int>select_vec18;

	vector<int>heap_vec16;
	vector<int>heap_vec17;
	vector<int>heap_vec18;

	vector<int>merge_vec16;
	vector<int>merge_vec17;
	vector<int>merge_vec18;
	//UltraMega
	vector<int>insert_vec19;
	vector<int>insert_vec20;
	vector<int>insert_vec21;

	vector<int>bub_vec19;
	vector<int>bub_vec20;
	vector<int>bub_ve21;

	vector<int>qs_vec19;
	vector<int>qs_vec20;
	vector<int>qs_vec21;

	vector<int>select_vec19;
	vector<int>select_vec20;
	vector<int>select_vec21;

	vector<int>heap_vec19;
	vector<int>heap_vec20;
	vector<int>heap_vec21;

	vector<int>merge_vec19;
	vector<int>merge_vec20;
	vector<int>merge_vec21;

	//HoldUp
	vector<int>insert_vec22;
	vector<int>insert_vec23;
	vector<int>insert_vec24;

	vector<int>bub_vec22;
	vector<int>bub_vec23;
	vector<int>bub_ve24;

	vector<int>qs_vec22;
	vector<int>qs_vec23;
	vector<int>qs_vec24;

	vector<int>select_vec22;
	vector<int>select_vec23;
	vector<int>select_vec24;

	vector<int>heap_vec22;
	vector<int>heap_vec23;
	vector<int>heap_vec24;

	vector<int>merge_vec22;
	vector<int>merge_vec23;
	vector<int>merge_vec24
		;
	//Infinite
	vector<int>insert_vec25;
	vector<int>insert_vec26;
	vector<int>insert_vec27;

	vector<int>bub_vec25;
	vector<int>bub_vec26;
	vector<int>bub_ve27;

	vector<int>qs_vec25;
	vector<int>qs_vec26;
	vector<int>qs_vec27;

	vector<int>select_vec25;
	vector<int>select_vec26;
	vector<int>select_vec27;

	vector<int>heap_vec25;
	vector<int>heap_vec26;
	vector<int>heap_vec27;

	vector<int>merge_vec25;
	vector<int>merge_vec26;
	vector<int>merge_vec27;

#pragma endregion

	void copyVector(const vector<int>& vect, vector<int>& vector, int size)
	{ // you can access and enter the values thru main. The values are public. getters and setters will get messy. select your size and vector.
		for (int i = 0; i < size; i++)
		{
			vector.push_back(vect[i]);
		}

		//testChrono(vector, size);
	}

};

class Sorts : public Data {
public:
	//constructor
	Sorts() {};
	//destructor
	~Sorts() {};
	void printArray(vector<int> A);
	void swap(int*, int*);

	//void run_timer(function<void(vector<int> array, int size)>sort_func, vector<int> array);
	void buildTimeVector(vector<int>& time_vect, int time);
	int calculateMedian(vector<int>& V);

	//timer functions
	void insertion_timer(vector<int> sort, vector<int>& time_vect, int size);
	void quicksort_timer(vector<int> sort, vector<int>& time_vect, int size);
	void selectionSort_timer(vector<int> sort, vector<int>& time_vect, int size);
	//void merge_timer(vector<int> sort, vector<int>& time_vect, int size);
	void heap_timer(vector<int> sort, vector<int>& time_vect, int size);
	void bubble_timer(vector<int> sort, vector<int>& time_vect, int size);
	void merge_timer_(vector<int> sort, vector<int>& time_vect, int size);

	//insertion sort
	void InsertionSort_Med(vector <int>& vector, int sizeOfVector);
	void InsertionSort(vector<int>, int);  //needs & to sort actual vector, not a copy sent to the function

	//Bubble sort
	void bubbleSort(vector<int>, int);
	void bubbleSort_med(vector<int>&, int);

	//Quick Sort
	void QS_Med(vector <int>& vector, int sizeOfVector);
	void quickmain();
	void mainMenu();
	void buildArray(vector<int>, int, bool);
	int partition1(vector<int>, int, int);
	void quicksort(vector<int>, int, int);
	void quicksort_med(vector<int>, int, int);
	int partition_med(vector<int>, int, int);
	void random_array(vector<int>, int);

	//heap sort
	void ascendingHeapSort_med(vector<int>&, int);
	void ascendingHeapSort(vector<int>, int);
	void max_heapify(vector<int>&, int, int);
	void buildMaxHeap(vector<int>&, int);

	//Merge Sort
	//void Fuse(vector<int>, int, int, int);
	//void MergeS(vector<int>, int, int);
	//void MergeS_med(vector<int>& Arra, int x, int y);
	void merge_sort_(vector<int> array_A, int lower_bound, int upper_bound);
	void merge_(vector<int>& array_A, int low_bound, int mid, int up_bound);
	void merge_sort_med(vector<int> &array_A, int lower_bound, int upper_bound);

	//Selection sort
	void selectionSort(vector<int>, int);
	void selectionSort_med(vector<int>& Arra, int n);

	void testChrono(vector<int> v, int s);
	void print(vector<int>& vector, int size);
};

void Sorts::testChrono(vector<int> v, int s)
{
	cout << " *********Before Sort*********" << endl
		<< endl;
	print(v, s);

	auto start = chrono::steady_clock::now();

	//sorting function goes here

	auto end = chrono::steady_clock::now();
	double elapsed_time = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
	cout << "elapsed Time (s): " << elapsed_time / 1e9 << endl;

	cout << " *********After Sort**********" << endl << endl;
	print(v, s);
}
void Sorts::print(vector<int>& vector, int size)
{ //testing
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i + 1 << ": " << vector.at(i) << endl;
	}
}

//timer functions
void Sorts::insertion_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		InsertionSort_Med(sort, size);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
void Sorts::quicksort_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		quicksort_med(sort, 0, size - 1);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
void Sorts::selectionSort_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		selectionSort_med(sort, 9);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
/*
void Sorts::merge_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		MergeS_med(sort, 0, 8);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);
	}

}
*/
void Sorts::heap_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		ascendingHeapSort_med(sort, 9);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
void Sorts::bubble_timer(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		bubbleSort_med(sort, 9);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
void Sorts::merge_timer_(vector<int> sort, vector<int>& time_vect, int size)
{
	for (int k = 0; k < 9; k++)
	{
		//timer start
		auto start1 = high_resolution_clock::now();

		//call function to time
		merge_sort_med(sort, 0, 9);

		//timer end
		auto stop1 = high_resolution_clock::now();

		//calculate execution time
		auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds	
		auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

		cout << "Array length N = " << size << " took " << duration1.count() << " microseconds." << endl;
		int time = duration1.count();
		buildTimeVector(time_vect, time);

	}
}
//calculates the median for the times. vector length is 9.
int Sorts::calculateMedian(vector<int>& V)
{
	//sort array of times to get median
	InsertionSort_Med(V, 9);
	for (int l = 0; l <= 8; l++)
	{
		cout << V[l] << " ";
	}
	int mTime = V[4];
	cout << endl;
	cout << "median = " << mTime << endl;
	return mTime;
}
void Sorts::buildTimeVector(vector<int>& time_vect, int time)
{
	time_vect.push_back(time);
}

//*****************************Utility Functions********************************
/*
void Sorts::run_timer(function<void(vector<int> array, int size)>sort_func, vector<int> array)
{
	int length = array.size();
	for (int i = 0; i < length; i++)
	{
		cout << array[i];
	}
	cout << endl << endl;
	//timer start
	auto start1 = high_resolution_clock::now();

	//call function to time
	sort_func(array, length);

	//timer end
	auto stop1 = high_resolution_clock::now();

	//calculate execution time
	auto duration1 = duration_cast<microseconds>(stop1 - start1);		//Output: Microseconds
	auto duration_sec = duration_cast<seconds>(stop1 - start1);			//Output: Seconds

	cout << "Array length N = " << length << " took " << duration1.count() << " microseconds.";

	//TODO: ***write results to file***
}
*/
void Sorts::printArray(vector<int> A)
{
	for (int i = 1; i < A.size(); i++)
	{
		cout << A[i] << ",";
	}
	cout << endl;
}
void Sorts::swap(int* a, int* b) // using reference by pointer for changes throughout function
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//*****************************Quicksort Functions********************************
#pragma region Quicksort
//Quick Sort
void Sorts::quickmain()
{
	const int	FIRST = 1,			//constants for menu option choices
		RANDOM = 2,
		MEDIAN = 3,
		EXIT = 4;
	const char	OWN_ARRAY = 'A',
		RAND_ARRAY = 'B';
	char choice1;
	int	choice2 = 0;
	int length = 0;
	bool finished = false;

	cout << "**********Quicksort Program**********" << endl << endl;

	cout << "Would you like to:" << endl << endl;
	cout << "A. Enter my own list of values" << endl;
	cout << "B. Generate a random list" << endl << endl;
	cout << "Please enter A or B: ";
	//discard leading white space
	cin >> ws;
	//get user's choice of entering own values or generating random values
	cin >> choice1;
	//clear character in buffer following input, if any
	cin.ignore();

	cout << endl << "How many numbers would you like to sort?  ";
	cin >> length;

	//input array
	vector<int>A(length);

	//Switch statement to let user input values or create an array of random values
	switch (toupper(choice1))
	{
	case OWN_ARRAY:
		buildArray(A, length, finished);
		break;
	case RAND_ARRAY:
		random_array(A, length);
		break;
	default: cout << "error";
	}

	//display main menu options
	mainMenu();
	//get user's selection from menu
	cin >> choice2;

	//sort list for testing
	quicksort(A, 0, (length - 1));
	//timer start
	auto start1 = high_resolution_clock::now();

	//switch statement for Main Menu choices. Determines how pivot is selected.
	switch (choice2)
	{
	case FIRST:
		quicksort(A, 0, (length - 1));											//length-1 because array index starts at 0
		break;
	case MEDIAN:
		quicksort_med(A, 0, (length - 1));										//length-1 because array index starts at 0
		break;
	case EXIT:
		break;
	default:
		cout << "Don't be stupid. Please enter a menu option using 1-4: ";
		cin >> choice2;
	}
	auto stop1 = high_resolution_clock::now();								//timer end
	auto duration1 = duration_cast<microseconds>(stop1 - start1);			//calculate execution time
	auto duration_sec = duration_cast<seconds>(stop1 - start1);

	//print sorted values
	//cout << endl;
	//for (int i = 0; i < length; i++)
		//cout << A[i] << " " << endl;
	cout << endl;
	cout << "Quicksort took " << duration1.count() << " microseconds." << endl;
	cout << endl;
	//pause program to view output
	cin.get();
}
//menu options that allow the user to select how the pivot is chosen
void Sorts::mainMenu()
{
	cout << endl;
	cout << "Choose a method for selecting the pivot:" << endl;
	cout << "1 - First element in the list" << endl;
	cout << "2 - A random element in the array" << endl;
	cout << "3 - The median" << endl;

	cout << "4 - Exit" << endl << endl;

	cout << "Enter a value 1-4: ";
}
//stores user's values in array
void Sorts::buildArray(vector<int>A, int length, bool finished)
{
	{
		int i = 0;
		int val = 0;
		cout << endl << "Please enter your list, one number at a time:" << endl;
		cout.flush();

		while (finished == false)		//get input from user
		{
			cin >> ws;					//discard leading white space
			int x = cin.peek();			//check validity
			if (ispunct(x))				//user entered a space
			{
				string exit;			//get ! out of buffer
				cin >> exit;
				finished = true;		//set flag to terminate entry sequence
			} else if (isdigit(x))
			{
				cin >> val;				//store input
				A[i] = val;				//add value to array
				i += 1;
				if (i == length)
					finished = true;
			} else
			{
				string str;
				cin >> str;
				finished = false;
				cout << "Invalid input. Punch yourself in the face and enter a valid whole number: ";
			}

		}
	}
}
//regular quicksort function
void Sorts::quicksort(vector<int>A, int left, int right)
{
	int q;
	if (left < right)
	{
		q = partition1(A, left, right);
		quicksort(A, left, q);
		quicksort(A, (q + 1), right);
	}
}
//quicksort taking the median of first, middle, and last elements 
void Sorts::quicksort_med(vector<int>A, int left, int right)
{
	int q;
	if (left < right)
	{
		q = partition_med(A, left, right);
		//cout << "q = " << q << endl;
		//cout << "entering quicksort_med with variables left = " << left << " and q = " << q << endl;
		quicksort_med(A, left, q);
		//cout << "entering quicksort_med with variables q + 1 = " << q + 1 << " and right = " << right << endl;
		quicksort_med(A, (q + 1), right);
	}
}
//regular partition method (Hoare)
int Sorts::partition1(vector<int>A, int left, int right)
{
	//cout << "entered partition1" << endl;
	int pivot = A[left];
	//cout << "pivot = " << pivot << endl;
	int i = left - 1;
	int j = right + 1;
	int temp;

	while (true)
	{
		//find the left-most element that is >= pivot
		do
		{
			i++;
			//cout << "iterating i to i = " << i << endl;
		} while (A[i] < pivot);
		//find rightmost element that is <= pivot
		do
		{
			j--;
			//cout << "decrementing j to j = " << j << endl;
		} while (A[j] > pivot);
		//if pointers cross or are ==
		if (i >= j)
		{
			//cout << "Returning j= " << j << endl;
			return j;
		}
		//once pointers stop, swap elements to correct sides
		//cout << "swapping A[" << i << "] = " << A[i] << endl;
		swap(&A[i], &A[j]);
	}
}
//partition that calculates the median of first, middle, and last elements and swaps the index of the middle value
int Sorts::partition_med(vector<int>A, int left, int right)
{
	//array to hold first, middle, and last elements of the array
	vector<int> arrB(3);
	//get index of middle element. right + 1 gets length of array
	int mid_index = (right + 1) / 2;
	//initialize array with first, middle, and last values
	arrB[0] = A[left];
	arrB[1] = A[mid_index];
	arrB[2] = A[right];
	//sort values
	quicksort(arrB, 0, 2);
	//swap median value with left value, unless the left value is the median, then do nothing
	if (arrB[1] == A[mid_index])
		swap(&A[mid_index], &A[left]);
	else if (arrB[1] == A[right])
		swap(&A[right], &A[left]);

	//cout << "returning partition1 function" << endl;
	return partition1(A, left, right);
}
//populate an array with random numbers for sorting
void Sorts::random_array(vector<int>A, int length)
{
	//srand(time(NULL));
	//int randVal = rand() % (length);
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator(seed);
	uniform_int_distribution<int> distribution(1, 100000);

	for (int i = 0; i < length; i++)
	{
		int randVal = distribution(generator);
		A[i] = randVal;
	}
}
void Sorts::QS_Med(vector <int>& vector, int sizeOfVector)
{
	int key;
	sizeOfVector = vector.size();
	for (int j = 1; j < sizeOfVector; ++j)
	{
		key = vector[j];
		int i = j - 1;
		while (i >= 0 && vector[i] > key)
		{
			vector[i + 1] = vector[i];
			i--;
		}
		vector[i + 1] = key;
	}
}

# pragma endregion

//Insertion Sort
void Sorts::InsertionSort(vector <int> vector, int sizeOfVector)
{
	int key;
	sizeOfVector = vector.size();
	for (int j = 1; j < sizeOfVector; ++j)
	{
		key = vector[j];
		int i = j - 1;
		while (i >= 0 && vector[i] > key)
		{
			vector[i + 1] = vector[i];
			i--;
		}
		vector[i + 1] = key;
	}
}
void Sorts::InsertionSort_Med(vector <int>& vector, int sizeOfVector)
{
	int key;
	sizeOfVector = vector.size();
	for (int j = 1; j < sizeOfVector; ++j)
	{
		key = vector[j];
		int i = j - 1;
		while (i >= 0 && vector[i] > key)
		{
			vector[i + 1] = vector[i];
			i--;
		}
		vector[i + 1] = key;
	}
}

//Bubble Sort
void Sorts::bubbleSort(vector<int> vector, int sizeOfVector)
{
	for (int i = 0; i < sizeOfVector; ++i)
	{
		for (int j = sizeOfVector - 1; j >= i + 1; j--)
		{
			if (vector[j] < vector[j - 1])
			{
				swap(&vector[j], &vector[j - 1]);
			}
		}
	}

}
void Sorts::bubbleSort_med(vector<int>&vector, int sizeOfVector)
{
	for (int i = 0; i < sizeOfVector; ++i)
	{
		for (int j = sizeOfVector - 1; j >= i + 1; j--)
		{
			if (vector[j] < vector[j - 1])
			{
				swap(&vector[j], &vector[j - 1]);
			}
		}
	}

}

//Heap Sort
//Max Heap
//Maintains the max heap property
void Sorts::max_heapify(vector<int>& A, int i, int n)
{
	int l = 2 * i;
	if (l > n) return;
	int r = 2 * i + 1;
	int largest = 0;

	if (l <= n && A[l] > A[i]) largest = l;
	else largest = i;

	if (r <= n && A[r] > A[largest]) largest = r;
	if (largest != i)
	{
		swap(&A[i], &A[largest]);
		max_heapify(A, largest, n);
	}
}
//Heapify entire list
void Sorts::buildMaxHeap(vector<int>& A, int n)
{
	for (int i = n / 2; i > 0; i--)
	{
		max_heapify(A, i, n);
	}
}
//Prints the array in ascending order by calling  heapify
void Sorts::ascendingHeapSort(vector<int> A, int n)
{
	for (int i = n; i >= 2; i--)
	{
		swap(&A[1], &A[i]);
		max_heapify(A, 1, i - 1);

	}
}
void Sorts::ascendingHeapSort_med(vector<int>&A, int n)
{
	for (int i = n; i >= 2; i--)
	{
		swap(&A[1], &A[i]);
		max_heapify(A, 1, i - 1);

	}
}

//Merge sort
/*
void Sorts::Fuse(vector<int>Arra, int x, int k, int y)
{
	int r, e, m;
	int f1 = k - x + 1;
	int f2 = y - k;

	vector<int> X(f1);
	vector<int> Y(f2);
	vector<int>temp(f1 + f2);

	for (r = 0; r < f1; r++)
	{
		X[r] = Arra[x + r];
	}
	for (e = 0; e < f2; e++)
	{
		Y[e] = Arra[k + 1 + e];
	}

	r = 0; //first
	e = 0; //second
	m = 0; //merged

	while (r < f1 && e < f2)
	{
		if (X[r] <= Y[e])
		{
			temp[m] = X[r];
			r++;
		} else
		{
			Arra[m] = Y[e];
			e++;
		}
		m++;
	}
	while (r <= f1)
	{
		Arra[m] = Y[e];
		r++;
		m++;
	}
	while (e <= f2)
	{
		Arra[m] = X[r];
		e++;
		m++;
	}
}
void Sorts::MergeS(vector<int>Arra, int x, int y)
{
	if (x < y)
	{
		int k = (x + y) / 2;

		//Sorts the two halves
		MergeS(Arra, x, k);
		MergeS(Arra, k + 1, y);

		Fuse(Arra, x, k, y);

	}
}
void Sorts::MergeS_med(vector<int>& Arra, int x, int y)
{
	if (x < y)
	{
		int k = (x + y) / 2;

		//Sorts the two halves
		MergeS_med(Arra, x, k);
		MergeS_med(Arra, k + 1, y);

		Fuse(Arra, x, k, y);

	}
}
*/
//Selection sort
void Sorts::selectionSort(vector<int>Arra, int n)
{
	int i, j, min, phd;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (Arra[j] < Arra[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			phd = Arra[i];
			Arra[i] = Arra[min];
			Arra[min] = phd;
		}
	}
}
void Sorts::selectionSort_med(vector<int> &Arra, int n)
{
	int i, j, min, phd;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (Arra[j] < Arra[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			phd = Arra[i];
			Arra[i] = Arra[min];
			Arra[min] = phd;
		}
	}
}

void Sorts::merge_sort_(vector<int> array_A, int lower_bound, int upper_bound)
{
	int middle;
	if (lower_bound < upper_bound)							//checks lower bound against upper bound
	{
		middle = ((lower_bound + upper_bound) / 2);			//calculates the middle of the array
		merge_sort_(array_A, lower_bound, middle);			//recursive call to split array_L
		merge_sort_(array_A, (middle + 1), upper_bound);		//recursively splits 2nd half of array again to array_R;
		merge_(array_A, lower_bound, middle, upper_bound);
	}
}
void Sorts::merge_sort_med(vector<int> &array_A, int lower_bound, int upper_bound)
{
	int middle;
	if (lower_bound < upper_bound)							//checks lower bound against upper bound
	{
		middle = ((lower_bound + upper_bound) / 2);			//calculates the middle of the array
		merge_sort_(array_A, lower_bound, middle);			//recursive call to split array_L
		merge_sort_(array_A, (middle + 1), upper_bound);		//recursively splits 2nd half of array again to array_R;
		merge_(array_A, lower_bound, middle, upper_bound);
	}
}
void Sorts::merge_(vector<int>& array_A, int low_bound, int mid, int up_bound)
{
	int length_L, length_R;
	length_L = mid - low_bound + 1;				//computes length of subarrays
	length_R = up_bound - mid;

	vector<int> array_L;
	vector<int> array_R;
	//array_L = new int[length_L + 1];			//allocate space for dynamic array; extra position is for sentinals
	//array_R = new int[length_R + 1];

	for (int i = 0; i < length_L; i++)			//copy values from array_A to array_L
	{
		array_L.push_back(array_A[low_bound + i]);
	}
	//print_array(array_L, length_L);

	for (int j = (0); j < length_R; j++)		//copy values from array_A to array_R
	{
		array_R.push_back(array_A[(mid + 1) + j]);
	}
	//print_array(array_R, length_R);

	int i = 0;
	int j = 0;
	int k = low_bound;

	while (i < length_L && j < length_R)
	{
		if (array_L[i] <= array_R[j])
		{
			array_A[k] = array_L[i];
			i = i + 1;
			k++;
		} else
		{
			array_A[k] = array_R[j];
			j = j + 1;
			k++;
		}
	}

	while (i < length_L)
	{
		array_A[k] = array_L[i];
		i = i + 1;
		k++;
	}
	while (j < length_R)
	{
		array_A[k] = array_R[j];
		j = j + 1;
		k++;
	}
}


#endif SORTS_H