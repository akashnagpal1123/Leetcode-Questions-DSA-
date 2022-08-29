class Solution {
public:
    char tolowercase(char ch)
{
	if(ch>='a' && ch<='z' || ch>=0 && ch<=9)
		return ch;
	else{
		char temp;
		temp = ch - 'A'+'a';
		return temp;
	}
}
bool isPalindrome(string s)
{
    int i=0;
    int j = s.size() - 1;
    while(i<=j)
	{
        if(isalnum(s[i]) == 0)
        {
            i++;
        }
        else if(isalnum(s[j]) == 0){
            j--;
        }
        else if (tolowercase(s[i]) == tolowercase(s[j]))
        {
            i++;
            j--;
        }
		else if (s[i] != s[j])
        {
            return 0;
        }
   }
        return 1;  
}
};