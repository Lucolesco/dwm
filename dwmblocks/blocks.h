//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 󰍛  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	20,		0},
	{" 󰻠  ", "sensors | awk '/Tctl:/ {print $2}'",			        10,		0},
	{"    ", "curl wttr.in/Brasilia?format=1 | cut -d '+' -f 2",					        3600,		0},
	{" 󱑂   ", "date '+%b %d (%a) %I:%M%p '",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
