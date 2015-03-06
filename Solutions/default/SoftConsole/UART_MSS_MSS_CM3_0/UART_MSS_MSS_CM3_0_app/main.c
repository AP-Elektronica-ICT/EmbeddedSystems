// Basic application for the SmartFusion development board
// Copyright 2012-2013 Jeroen Doggen (jeroendoggen@gmail.com)

int number = 0;	// Create a variable (to have something to look al while debugging

int main()
{
    // Repeat forever (cf. the 'Arduino loop() function')
	while( 1 )
	{
		number++;
		number--;
		number++;
	}
}
