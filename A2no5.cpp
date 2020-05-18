char * longestPalindrome(char * s) {
	int left = 0;
	int right = 0;
	int maxLength = 0;      
	int startIndex = 0;     
	int index = 0;

	while (s[index]) {
		right = index;
		left = index - 1;

		while (s[right] == s[index]) {
			right++;
		}

		index = right;

		while (left >= 0 && s[right] && s[left] == s[right]) {
			left--;
			right++;
		}

		if (right - left - 1>maxLength) {
			startIndex = left + 1;
			maxLength = right - left - 1;
		}

	}
	char* returnStr = (char*)malloc(maxLength + 1);
	returnStr[maxLength] = '\0';
	for (int i = 0;i<maxLength;i++) {
		returnStr[i] = s[startIndex + i];
	}
	return returnStr;
}
