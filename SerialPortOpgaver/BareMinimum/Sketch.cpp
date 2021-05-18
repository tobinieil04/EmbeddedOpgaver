/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>







#pragma region opgave16.2
	//void setup() {
		//int tal1 = 3;
	//int tal2 = 7;
	//int result;
	//
	//int *ptr1 = &tal1;
	//int *ptr2 = &tal2;
	//int *ptrResult = &result;
	//
	//*ptrResult = *ptr1 + *ptr2;
	//
	//Serial.print(*ptr1);
	//Serial.print(" + ");
	//Serial.print(*ptr2);
	//Serial.print(" = ");
	//Serial.print(*ptrResult);
	//}
	
	#pragma endregion

#pragma region opgave16.3

//void ReadInput(char *ptr);

//void setup() {
////Serial.begin(9600);
////pinMode(11, OUTPUT);
//}

//void loop() {
//if (Serial.available() > 0)
//{
//char input;
//ReadInput(&input);
//Serial.print(input);
//}
//
//
//}
//
//void ReadInput(char *ptr) {
//*ptr = Serial.read();
//digitalWrite(11, HIGH);
//delay(200);
//digitalWrite(11, LOW);
//delay(200);
//
//
//}

#pragma endregion




#pragma region opgave16.4

void PrintArray(char array[]);
void PrintPointer(char *ptrArray);

void setup() {
	Serial.begin(9600);
	char array[] = "Tobias";
	char *ptrArray = "Nielsen";
	
	PrintArray(array);
	PrintPointer(ptrArray);
	

}


void loop() {
	
}

void PrintArray(char array[]) {
	for (int i = 0; i < strlen(array); i++)
	{
		Serial.print(array[i]);
	}
}

void PrintPointer(char *ptrArray) {
	for (int i = 0; i < strlen(ptrArray); i++)
	{
		Serial.print(*(ptrArray + i));
	}
}

#pragma endregion 