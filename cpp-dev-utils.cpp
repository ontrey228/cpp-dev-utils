int BoolToInt(bool bolean) {
	if(bolean == false)
		return 0;
	if(bolean == true)
		return 1;
	exit(0);
	return -1;
}

bool IntToBool(int integer) {
	if(integer == 0)
		return false;
	if(integer == 1)
		return true;
	
	exit(0);
	return -1;
}