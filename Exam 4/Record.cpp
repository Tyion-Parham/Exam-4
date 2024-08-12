#include "Record.h"

void Record::play()
{
	for (int i = 0; i < tracks.size(); i++)
	{
		std::cout << artist << ": Track 1: " << tracks[i] << "\n";
	}
}