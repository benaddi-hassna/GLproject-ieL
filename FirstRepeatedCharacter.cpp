#include <bits/stdc++.h> 
using namespace std; 

char Premierchar_recurrent(string &str) 
{ 
	unordered_set<char> h; 

	//Parcours de la chaine de caractères du gauche à droite
	for (int i=0; i<str.length(); i++) 
	{ 
		char c = str[i]; 
        //Si l'element existe dèja alors on le retourne et on sort de la bocle
		if (h.find(c) != h.end()) 
			return c; 

        //Sinon on l'ajoute à h
		else 
			h.insert(c); 
	}  
	return '\0';
} 

int main () 
{ 
	string str = "ABCA"; 
	cout << Premierchar_recurrent(str); 
	return 0; 
} 
