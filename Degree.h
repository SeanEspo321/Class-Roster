#pragma once
#include <string>

const int numDegreeTypes = 5;
enum class DegreeProgram
{
	SECURITY,
	NETWORK,
	SOFTWARE,
	NONE
};

static std::string DegreeTypeStrings[numDegreeTypes] = { "SECURITY", "NETWORK", "SOFTWARE", "NONE" };
