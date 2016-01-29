//a terceira oitava é a oitava original, one o A é a nota matriz(440.0 Hz)
void play(String note, int oitava, int playTime){
	
	int sum;

	//get the note value
	if(note == "C") sum = -9;
	else if (note == "C#") sum = -8;
	else if (note == "D") sum = -7;
	else if (note == "D#") sum = -6;
	else if (note == "E") sum = -5;
	else if (note == "F") sum = -4;
	else if (note == "F#") sum = -3;
	else if (note == "G") sum = -2;
	else if (note == "G#") sum = -1;
	else if (note == "A") sum = 0;
	else if (note == "A#") sum = 1;
	else if (note == "B") sum = 2;
	else sum = 0;
	sum += (oitava - 3)*12;

	//calculate the note frequency
	double value = 440.0*pow(1.059463, sum);

	//play the note
	int begin = millis();
	while(millis() - begin < playTime){
		digitalWrite(1, 1);
		delayMicroseconds(1/value*pow(10, 6));
		digitalWrite(1, 0);
		delayMicroseconds(1/value*pow(10, 6));
	}


}