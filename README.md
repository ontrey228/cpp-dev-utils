## C++ UTILS

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

<b>Convert BOOL TO INT:</b>
```
BoolToInt(true/*YOUR BOLEAN VALUE*/);
```
<b>Convert INT TO BOOL:</b>
```
IntToBool(1/*YOUR INTEGER VALUE*/);
```