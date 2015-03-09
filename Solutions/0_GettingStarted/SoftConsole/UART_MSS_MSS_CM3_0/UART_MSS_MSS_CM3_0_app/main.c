// Basic application for the SmartFusion Evaluation board
// Copyright 2015 Jeroen Doggen (jeroen.doggen@ap.be, jeroendoggen@gmail.com)

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
