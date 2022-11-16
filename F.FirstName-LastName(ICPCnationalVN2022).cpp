/*Loc is a hard-working security guard at a company. His company only allows Vietnamese people to enter and
leave its office, and Loc has to verify everyone’s nationality. One day, a man shows up. For safety, Loc politely asks:
- Good day sir. May I see your card?
The man gives out his card. Unfortunately, the card is at a very bad condition. Loc can not see his nationality at
all, and can barely see his full name. The card is at a very bad condition, that Loc can only see his name as a string
S, containing all of the characters of the name, but there are no spaces. Since Loc is very smart, he quickly comes up
with a way to check the man’s nationality. As you may know, Vietnamese names always start with the last name (the
family name), and end with the first name. So Loc asked the man:
- What is your first name and your last name, sir?
- My first name is F and my last name is L. I don’t have a middle name.
Given the string S, F and L, please help Loc determine if this man has a valid Vietnamese name, so that Loc can
let him in.


Input
The first line contains an integer t (1 <= t <= 10 000) — the number of test cases. Then t test cases follow. Each test
case is presented in three lines:
• The first line contains the string S — the name of the man without any spaces.
• The second line contains the string F — the first name of the man.
• The third line contains the string L — the last name of the man.
It is guaranteed that each string consists of between 1 and 50 characters, which are lowercase English letter only,
and |F| + |L| = |S|.


Output
For each test case, output “YES” (without quotes) if the man has a valid Vietnamese name, or “NO” (without quotes)
otherwise.

Explanation of the sample
In the first test case, the man full’s name with out spaces is S = “tranloc", his first name is F = “loc", and his
last name is L = “tran". We can see that this is indeed a Vietnamese name, because if we put his last name before
his first name, we will have “tran loc00, which is the string S when all spaces are removed.
In the second test case, the man’s first name and last name are F = “albert" and L = “einstein" respectively.
If we concatenate his last name with his first name, we will get “einstein albert00, which is not the string
S = “alberteinstein" when all spaces are removed


Example
input:
2

tranloc
loc
tran

alberteinstein
albert
einstein

output:
YES
NO
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 3001
using namespace std;

int main(){
	string fullName;
	string lastName;
	string firstName;
	int n;
	cin >> n;
	for( int i=0;i<n;i++){
		cin >> fullName  >> lastName >> firstName;
		if(firstName + lastName == fullName ){
			cout << "YES" << endl;
		}else
			cout << "NO" << endl;
	}
}
// => O(n) = n;
// => speed : 

















