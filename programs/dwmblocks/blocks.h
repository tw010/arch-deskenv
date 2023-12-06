//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon | Command | Update Interval | Update Signal */
	//{"", "sblock util", 1, 0},
	//{" ", "", 0, 0},
	{"(", "", 0, 0},
	{"MNT:", "sblock disk", 20, 0},
	{")", "", 0, 0},
	{" <", "", 0, 0},
	{"RAM:", "sblock ram", 1, 0},
	{">", "", 0, 0},
	{" {", "", 0, 0},
	{"CPU:", "sblock cpu", 1, 0},
	{" ", "", 0, 0},
	{"GPU:", "sblock gpu", 2, 10},
	{"}", "", 0, 0},
	{" [", "", 0, 0},
	{"", "sblock date", 1, 0},
	{"] ", "", 0, 0},
	{"\\", "sblock battery", 5, 0},
	{" ", "", 0, 0},
	{"", "sblock volume", 60, 2},
	{" ", "", 0, 0},
	{"", "sblock wifi", 2, 0},
	{" ", "", 0, 0},
	{"", "sblock bluetooth", 2, 0},
	{" ", "", 0, 0},
	{"", "sblock monitor", 60, 1},
	{" ", "", 0, 0},
	{" \\", "sblock info", 600, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 0;
