#include <stdio.h>
#include<string.h>

int main()
{
	int continues, numbers = 0, *arr[100], arrayNumbers = 0, temp = 0, biggest = -300000000,secondCounter=0;
	char fileName[100];

	FILE *storageArray, *file;
	storageArray = fopen("numbers.txt", "r");

	do
	{
		printf("Hello how much numbers you would like to use ?(1-100)\n");
		numbers = inputNumber();
	} while (numbers < 1 || numbers > 100);


while(1) {

		printf("_____________________________MENU_____________________________\n--------------------------------------------------------------|\nHello ! What would you like to do now ?                       |\n--------------------------------------------------------------|\nPlease select one of the options listed below.                |\n--------------------------------------------------------------|\n1.I would like to enter numbers in the array                  |\n--------------------------------------------------------------|\n2.I would like to search for specific element in the array.   |\n--------------------------------------------------------------|\n3.I would like to see the array with it's elements            |\n--------------------------------------------------------------|\n4.I would like to see the biggest sum of array digits         |\n--------------------------------------------------------------|\n5.I would like to load existing numbers                       |\n--------------------------------------------------------------|\n6.I would like to save my array into a text file              |\n--------------------------------------------------------------|\n7.Exit                                                        |\n--------------------------------------------------------------|\n");
		continues = inputNumber();
		switch (continues)
		{
		case 1:
			EnterNumsInArr(numbers, arr);
			secondCounter = 1;
			break;
		case 2:
			if (secondCounter == 0)
		{
			printf("Please use option 1 or option 5 first!!!\n");
			break;
		}
			SpecificNumber(arrayNumbers, numbers, arr);
			break;
		case 3:
			if (secondCounter == 0)
			{
				printf("Please use option 1 or option 5 first!!!\n\n");
				break;
			}
			Printer(numbers, arr);
			break;
		case 4:
			if (secondCounter == 0)
		{
			printf("Please use option 1 or option 5 first!!!\n\n");
			break;
		}
			biggestSumDiggits(numbers, arr, temp, biggest);
			break;
		case 5:
			textInput(storageArray, numbers, arr);
			secondCounter = 1;
			fclose(storageArray);
			break;
		case 6:
			if (secondCounter == 0)
			{
				printf("Please use option 1 or option 5 first!!!\n\n");
				break;
			}
			printf("Please enter name for your file: ");
			scanf("%s", fileName);
			strcat(fileName, ".txt");
			file = fopen(fileName, "w");
			SaveArrayIntoAFile(numbers, arr, file, fileName);
			fclose(file);
			printf("We successfully saved your numbers in %s \n", fileName);
			break;
		case 7:
			goto exit;
		default:
			printf("\nInvalid input please try again\n");
			break;
		}
	}
exit:
	printf("Have a nice day !\n");
	return 0;
}




//CASE 1
int EnterNumsInArr(int numbers, int arr[100]) {

	for (int i = 0; i < numbers; i++)
	{

		printf("---------------------");
		printf("\nNumber %d\n", i + 1);

		arr[i] = inputNumber();
	}
	return 1;
}
//CASE 2
int SpecificNumber(int arrayNumbers, int numbers, int arr[100]) {
	printf("\nPlease type in which number you would like to search for : ");
	arrayNumbers = inputNumber();

	for (int i = 0; i < numbers; i++)
	{
		if (arrayNumbers == arr[i])
		{
			printf("\nWe found match of your number %d, his equivalent is at position %d\n", arrayNumbers, i + 1); break;
		}
		else if (i == numbers - 1)
		{
			printf("Sorry we couldn't find any match\n");
		}
	}
	return 1;
}


//CASE 3

int Printer(int numbers, int arr[]) {

	for (int i = 0; i < numbers; i++)
	{
		printf("--------------------------\n");
		printf("Element number %d is : %d\n", i + 1, arr[i]);

	}
	return 1;
}


//CASE 4

int biggestSumDiggits(int numbers, int arr[100], int temp, int biggest) {

	for (int i = 0; i < numbers; i++)
	{
		temp = 0;
		while (arr[i] != 0)
		{
			temp += arr[i] % 10;
			arr[i] /= 10;
		}
		if (temp > biggest) {
			biggest = temp;
		}
	}
	printf("Sum of digits is : %d\n", biggest);

return (1);
}

//Case 5

int textInput(FILE *storageArray, int numbers, int arr[]) {
	if (storageArray == NULL) { printf("Error loading file"); return 0; }

	for (int i = 0; i < numbers; i++)
	{
		fscanf(storageArray, "%d,", &arr[i]);

	}

	for (int i = 0; i < numbers; i++)
	{
		printf("Number %d is: %d\n\n", i + 1, arr[i]);
	}
	
	return (1);
}

//Case 6

int SaveArrayIntoAFile(int numbers, int arr[], FILE *file) {
	for (int i = 0; i < numbers; i++)
	{
		fprintf(file, "%d ", arr[i]);	
	}
	fclose(file); 
	
	return (1);
}

int inputNumber(void)
{
	char *p, string[30];
	int n;
	fflush(stdin);
	printf("Please enter number: ");
	while (fgets(string, sizeof(string), stdin)) {
		n = strtol(string, &p, 10);
		if (p == string || *p != '\n') {
			printf("\nPlease enter number: ");
		}
		else 
			break;
	}
	return n;
}