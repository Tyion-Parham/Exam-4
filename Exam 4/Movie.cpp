#include "Movie.h"

void Movie::play()
{
	std::cout << director << "'s " << year << " " << genre << " film " << title << ":\n" << plot << "\n";
}