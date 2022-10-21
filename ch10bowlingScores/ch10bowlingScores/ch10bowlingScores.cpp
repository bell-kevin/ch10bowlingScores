// ch10bowlingScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Use pointer notation throughout the program
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Use pointer notation throughout the program

//function prototypes
void getScoresFromUserAndPutScoresInArray(int* scores, int size);
double calcAverage(int*, int);
int getHighScore(int*, int);

int main()
{
    //Use pointer notation throughout the program
    std::cout << "Chapter 10 Bowling Scores by Kevin Bell\n\n";
    //create array for 10 bowling scores from user input
	int bowlingScores[10];
	//create pointer to array
	int* pBowlingScores = bowlingScores;
	//create variable to hold sum of scores
	int sum = 0;
	//create variable to hold average of scores
	double average = 0.0;
	// highest score variable
	int highestScore = 0;
	//get bowling scores from user and put them in array
	getScoresFromUserAndPutScoresInArray(pBowlingScores, 10);
	//calculate average of scores
	average = calcAverage(pBowlingScores, 10);
	//get highest score
	highestScore = getHighScore(pBowlingScores, 10);
	//display average of scores
	cout << "The average score is " << average << endl;
	//display highest score
	cout << "The highest score is " << highestScore << endl;
	system("pause");
	return 0;
} // end main

//Use pointer notation throughout the program

//Write a function that accepts a pointer to the array to ask the user for the bowling scores
void getScoresFromUserAndPutScoresInArray(int* scores, int size)
{
	//get bowling scores from user
	//input validation
	for (int i = 0; i < size; i++)
	{
		cout << "Enter score " << i + 1 << ": ";
		cin >> *(scores + i);
		while (*(scores + i) < 0 || *(scores + i) > 300)
		{
			cout << "Invalid score. Enter score " << i + 1 << ": ";
			cin >> *(scores + i);
		} // end while loop
	} // end for loop
} // end getScoresFromUserAndPutScoresInArray function

//Write another function that accepts a pointer to the array to calculate the average of those scores and return the result to the main function to display
double calcAverage(int* scores, int size)
{
	//create variable to hold sum of scores
	int sum = 0;
	//create variable to hold average of scores
	double average = 0.0;
	//calculate sum of scores
	for (int i = 0; i < size; i++)
	{
		sum += *(scores + i);
	} // end for loop
	//calculate average of scores
	average = sum / size;
	return average;
} // end calcAverage function

//Write another function that accepts a pointer to the array to find the highest score in the array and return the result to the main function to display
int getHighScore(int* scores, int size)
{
	// highest score variable
	int highestScore = 0;
	//find highest score
	for (int i = 0; i < size; i++)
	{
		if (*(scores + i) > highestScore)
		{
			highestScore = *(scores + i);
		} // end if condition
	} // end for loop
	return highestScore;
} // end getHighScore function
